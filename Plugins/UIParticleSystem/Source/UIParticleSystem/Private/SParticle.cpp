// Copyright 2020 Yijie Shi. All Rights Reserved.

#include "SParticle.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "SlateMaterialBrush.h"
#include "ParticleWidget.h"


TMap<FString, TSharedPtr<FSlateMaterialBrush>> SParticle::SlateBrusheList;

void SParticle::Construct(const FArguments& Args)
{
    ParticleInScene.Reset();
}

TSharedPtr<FSlateMaterialBrush> SParticle::GetValidSlateMaterial(UMaterialInterface* Material)
{
    FString MaterialName = Material->GetFullName();
    TSharedPtr<FSlateMaterialBrush>* BrushFound = SlateBrusheList.Find(MaterialName);
    if (BrushFound && BrushFound->IsValid())
    {
        return *BrushFound;
    }
    else
    {
        Material->AddToRoot();
        TSharedPtr<FSlateMaterialBrush> NewMaterial = MakeShareable(new FSlateMaterialBrush(*Material, FVector2D(1.0, 1.0)));
        SlateBrusheList.Add(MaterialName, NewMaterial);
        return NewMaterial;
    }
}

void SParticle::ReleaseInvalidSlateMaterials()
{
    for (TMap<FString, TSharedPtr<FSlateMaterialBrush>>::TIterator Itr(SlateBrusheList.CreateIterator());
        Itr;
        ++Itr)
    {
        if (Itr.Value().GetSharedReferenceCount() == 1)
        {
            Itr.Value()->GetResourceObject()->RemoveFromRoot();
            Itr.RemoveCurrent();
        }
    }
}

SParticle::~SParticle()
{
    RenderData.Empty();
	SParticle::ReleaseInvalidSlateMaterials();
}

void SParticle::BeginUpdate()
{
    RenderData.Empty();
}

void SParticle::GetUpdatePtr(UMaterialInterface* Material, uint32 Index, uint32 NumVertices, uint32 NumIndices, FSlateVertex** Vertices, SlateIndex** Indices)
{
    if (!Material)
        return;
    int _Index = Index;
    if (RenderData.Num() <= _Index)
    {
        int NumToAdd = _Index - RenderData.Num() + 1;
        for (int i = 0; i != NumToAdd; ++i)
        {
            RenderData.Add(FRenderData());
        }
    }

    FRenderData& NewRenderData = RenderData[_Index];
    if (Material != nullptr)
    {
        NewRenderData.Brush = SParticle::GetValidSlateMaterial(Material);
        NewRenderData.RenderingResourceHandle = FSlateApplication::Get().GetRenderer()->GetResourceHandle(*NewRenderData.Brush);
    }

    NewRenderData.VertexData.Empty();
    NewRenderData.IndexData.Empty();

    if (NumVertices && NumIndices)
    {
        NewRenderData.VertexData.AddUninitialized(NumVertices);
        *Vertices = &NewRenderData.VertexData[0];
        NewRenderData.IndexData.AddUninitialized(NumIndices);
        *Indices = &NewRenderData.IndexData[0];
    }

}



int32 SParticle::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
    SCOPE_CYCLE_COUNTER(STAT_UIParticles_All_GT);

    SCOPE_CYCLE_COUNTER(STAT_UIParticles_UpdateRendering);

	UUIParticleComponent* UIParticleComponent = ParticleInScene.Get();

	static IConsoleVariable* var = IConsoleManager::Get().FindConsoleVariable(TEXT("r.disableuiparticle"));
	bool bShouldDisableUIParticle = UIParticleComponent == nullptr || var && var->GetInt() == 1 ;

    if (!bShouldDisableUIParticle)
    {
		{
			FPaintGeometry PaintGeometry = AllottedGeometry.ToPaintGeometry();

			//Get Post transformation
			FSlateLayoutTransform LayoutTransform = AllottedGeometry.GetAccumulatedLayoutTransform();
			float  ScaleLayout = LayoutTransform.GetScale();
			FVector2D TranslationLayout = LayoutTransform.GetTranslation();

			//FPaintGeometry to FSlateRenderTransform
			FSlateRenderTransform Transformation = PaintGeometry.GetAccumulatedRenderTransform();
			FVector2D Position = Transformation.TransformPoint(FVector2D(AllottedGeometry.GetLocalSize() * 0.5f));
			FMatrix2x2 ScalingRotationMatrix = Transformation.GetMatrix();

			FVector2D Scale = ScalingRotationMatrix.TransformVector(FVector2D(1.0f, 1.0f));
			Scale = Scale / ScaleLayout;
			Position = Position / ScaleLayout;

			// Extract Rotation and Scale from the matrix
			FVector2D BaseX(1.0f, 0.0f);
			FVector2D BaseY(0.0f, 1.0f);

			FVector2D TransformedBaseX = ScalingRotationMatrix.TransformVector(BaseX);
			FVector2D TransformedBaseY = ScalingRotationMatrix.TransformVector(BaseY);

			// Get Post Scale
			TransformedBaseX = TransformedBaseX / ScaleLayout;
			TransformedBaseY = TransformedBaseY / ScaleLayout;

			// Get Rotation Vectors
			FVector2D RotationVectorX, RotationVectorY;
			float TransformedLengthX = 1.f, TransformedLengthY = 1.f;
			TransformedBaseX.ToDirectionAndLength(RotationVectorX, TransformedLengthX);
			TransformedBaseY.ToDirectionAndLength(RotationVectorY, TransformedLengthY);

			float Angle = acosf(RotationVectorY.Y);

			if (RotationVectorY.X < 0)
			{
				Angle *= -1.0f;
			}

			UIParticleComponent->SetTransformation(Position, FVector2D(TransformedLengthX, TransformedLengthY), FRotator(0.0f, -FMath::RadiansToDegrees(Angle), 0.0f));
			UIParticleComponent->UpdateRendering(TranslationLayout, FVector2D(ScaleLayout, ScaleLayout), const_cast<SParticle*>(this));

			return SMeshWidget::OnPaint(Args, AllottedGeometry, MyClippingRect, OutDrawElements, LayerId, InWidgetStyle, bParentEnabled);
		}
	}

	return LayerId;
}