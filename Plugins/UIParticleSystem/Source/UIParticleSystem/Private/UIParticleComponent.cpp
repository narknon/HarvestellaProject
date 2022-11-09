// Copyright 2020 Yijie Shi. All Rights Reserved.

#include "UIParticleComponent.h"
#include "PrimitiveSceneProxy.h"
#include "ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Core/Public/Math/UnrealMathUtility.h"
#include "Runtime/Launch/Resources/Version.h"
#include "SParticle.h"
#include "Materials/Material.h"

#if (ENGINE_MAJOR_VERSION == 4 && ENGINE_MINOR_VERSION >= 24)
#define PRIVATE_COMPONENT_MEMBERS 1
#else
#define PRIVATE_COMPONENT_MEMBERS 0
#endif



DEFINE_STAT(STAT_UIParticles_Sprites_Num);

static TAutoConsoleVariable<int32> GEnableUIParticle(
	TEXT("r.disableuiparticle"),
	0,
	TEXT("Disable UI particles rendering and tick."),
	ECVF_Default);

UUIParticleComponent::UUIParticleComponent(class FObjectInitializer const & Initializer)
    : UParticleSystemComponent( Initializer )
	, bTransformationSet( false )
    , bPendingActivate( false )
{
}

UUIParticleComponent::~UUIParticleComponent()
{
}

void UUIParticleComponent::SetActivateState(bool bActivate)
{
    if (bTransformationSet)
    {
        if (bActivate)
            ActivateSystem();
        else
            DeactivateSystem();
    }
    else
    {
        if(bActivate)
            bPendingActivate = true;
        else
            DeactivateSystem();
    }
}

void UUIParticleComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
    SCOPE_CYCLE_COUNTER(STAT_UIParticles_TickComponent_GT);

    static IConsoleVariable* var = IConsoleManager::Get().FindConsoleVariable(TEXT("r.disableuiparticle"));

    if (var && var->GetInt() == 1 || !bTransformationSet )
    {
        return;
    }
    UParticleSystemComponent::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UUIParticleComponent::SetTransformation(const FVector2D& Translation, const FVector2D& Scale, const FRotator& Rotator )
{
    SetRelativeLocation(FVector(Translation.X, Translation.Y, 0.0f));
    SetRelativeScale3D(FVector(Scale.X, Scale.Y, 1.0f));
    SetRelativeRotation( Rotator );
	if (!bTransformationSet)
	{
		bTransformationSet = true;
		if( bPendingActivate )
            ActivateSystem(true);
	}
}

static FVector2D GetParticleSize(const FBaseParticle& Particle, const FDynamicSpriteEmitterReplayDataBase& Source)
{
    FVector2D Size;
    Size.X = FMath::Abs(Particle.Size.X * Source.Scale.X);
    Size.Y = FMath::Abs(Particle.Size.Y * Source.Scale.Y);

    return Size;
}

FPrimitiveSceneProxy* UUIParticleComponent::CreateSceneProxy()
{
    return NULL;
}


void UUIParticleComponent::UpdateRendering(const FVector2D& PostTranslation, const FVector2D& PostScale, SParticle* ParticleWidget)
{
    if (!ParticleWidget)
        return;

    ParticleWidget->BeginUpdate();

    ERHIFeatureLevel::Type InFeatureLevel = ERHIFeatureLevel::ES3_1;	// just a parameter

    TArray<FDynamicEmitterDataBase*> DynamicEmitterDataArray;

    // Only proceed if we have any live particles or if we're actively replaying/capturing
    if (EmitterInstances.Num() > 0)
    {
        int32 LiveCount = 0;
        for (int32 EmitterIndex = 0; EmitterIndex < EmitterInstances.Num(); EmitterIndex++)
        {
            FParticleEmitterInstance* EmitInst = EmitterInstances[EmitterIndex];
            if (EmitInst)
            {
                if (EmitInst->ActiveParticles > 0)
                {
                    LiveCount++;
                }
            }
        }

        if (!bForceLODUpdateFromRenderer
            && LiveCount == 0
            && ReplayState == PRS_Disabled)
        {
            return;
        }
    }

    FParticleSystemReplayFrame* NewReplayFrame = NULL;

    // Is the particle system allowed to run?
    if (bForcedInActive == false)
    {
        //SCOPE_CYCLE_COUNTER(STAT_ParticleSystemComponent_CreateDynamicData_Gather);
        DynamicEmitterDataArray.Reset();
        DynamicEmitterDataArray.Reserve(EmitterInstances.Num());
        //QUICK_SCOPE_CYCLE_COUNTER(STAT_ParticleSystemComponent_GetDynamicData);
        for (int32 EmitterIndex = 0; EmitterIndex < EmitterInstances.Num(); EmitterIndex++)
        {
            FDynamicEmitterDataBase* NewDynamicEmitterData = NULL;
            FParticleEmitterInstance* EmitterInst = EmitterInstances[EmitterIndex];
            if (EmitterInst)
            {
                // Generate the dynamic data for this emitter
                {
                    bool bIsOwnerSeleted = false;
                    NewDynamicEmitterData = EmitterInst->GetDynamicData(bIsOwnerSeleted, InFeatureLevel);
                }
                if (NewDynamicEmitterData != NULL)
                {
                    NewDynamicEmitterData->bValid = true;
                    DynamicEmitterDataArray.Add(NewDynamicEmitterData);
                    NewDynamicEmitterData->EmitterIndex = EmitterIndex;

                }
            }
        }
    }


    int Index = 0;

    for (int i = 0; i != DynamicEmitterDataArray.Num(); ++i)
    {
        FDynamicEmitterDataBase* DynamicEmitterDataBase = DynamicEmitterDataArray[i];
        const FDynamicEmitterReplayDataBase& DynamicEmitterData = DynamicEmitterDataBase->GetSource();
        int EmitterIndex = DynamicEmitterDataBase->EmitterIndex;
        EDynamicEmitterType EmitterType = DynamicEmitterData.eEmitterType;
        if (EmitterType == DET_Sprite)
        {
            const FDynamicSpriteEmitterReplayDataBase* Data = static_cast<const FDynamicSpriteEmitterReplayDataBase*>(&DynamicEmitterData);
            UMaterialInterface* Material = GetMaterial(EmitterIndex);
            if (Material && Material->GetMaterial() && Material->GetMaterial()->MaterialDomain == MD_UI)
            {
                GenerateSpriteVerticesData(Data, Index, Material, PostTranslation, PostScale, ParticleWidget);
                Index++;
            }
        }
        else if (EmitterType == DET_Ribbon)
        {
            const FDynamicRibbonEmitterReplayData* Data = static_cast<const FDynamicRibbonEmitterReplayData*>(&DynamicEmitterData);
            UMaterialInterface* Material = GetMaterial(EmitterIndex);
            FDynamicTrailsEmitterData* TrailsEmitterData = static_cast<FDynamicTrailsEmitterData*>(DynamicEmitterDataBase);
            //FDynamicTrailsEmitterData::GetDynamicMeshElementsEmitter
            if (Material && Material->GetMaterial() && Material->GetMaterial()->MaterialDomain == MD_UI)
            {
                GenerateRibbonVerticesData(Data, Index, Material, PostTranslation, PostScale, TrailsEmitterData->bTextureTileDistance, TrailsEmitterData->bUsesDynamicParameter, ParticleWidget);
                Index++;
            }
        }
    }


    for (int i = 0; i != DynamicEmitterDataArray.Num(); ++i)
    {
        delete DynamicEmitterDataArray[i];
    }

}

static void ApplyOrbitToPosition(
    const FBaseParticle& Particle,
    const FDynamicSpriteEmitterReplayDataBase& Source,
    const FMatrix& InLocalToWorld,
    FVector& ParticlePosition,
    FVector& ParticleOldPosition
)
{
    if (Source.OrbitModuleOffset != 0)
    {
        int32 CurrentOffset = Source.OrbitModuleOffset;
        const uint8* ParticleBase = (const uint8*)&Particle;
        PARTICLE_ELEMENT(FOrbitChainModuleInstancePayload, OrbitPayload);

        if (Source.bUseLocalSpace)
        {
            ParticlePosition += OrbitPayload.Offset;
            ParticleOldPosition += OrbitPayload.PreviousOffset;
        }
        else
        {
            ParticlePosition += InLocalToWorld.TransformVector(OrbitPayload.Offset);
            ParticleOldPosition += InLocalToWorld.TransformVector(OrbitPayload.PreviousOffset);
        }
    }
}

//  65535/6
#define MAXPARTICLECOUNT 10921 

void UUIParticleComponent::GenerateSpriteVerticesData( const FDynamicSpriteEmitterReplayDataBase* SourceData, uint32 Index, UMaterialInterface* Material, const FVector2D& PostTranslation, const FVector2D& PostScale, SParticle* UIWidget )
{
    INC_DWORD_STAT_BY(STAT_UIParticles_Sprites_Num, SourceData->ActiveParticleCount);

    if (!UIWidget)
        return;

    int32 NumVerticesPerParticle = 4;
    int32 NumTriagnlesPerParticle = 2;

    const FDynamicSpriteEmitterReplayDataBase& Source = *SourceData;

    int32 ParticleCount = Source.ActiveParticleCount;

    if ((Source.MaxDrawCount >= 0) && (ParticleCount > Source.MaxDrawCount))
    {
        ParticleCount = Source.MaxDrawCount;
    }
    
    ParticleCount = ParticleCount > MAXPARTICLECOUNT ? MAXPARTICLECOUNT : ParticleCount;

    int32 NumVertices = ParticleCount * 4;
    int32 NumIndices = ParticleCount * 6;

    FSlateVertex* Vertices = NULL;
    SlateIndex* Indices = NULL;

    UIWidget->GetUpdatePtr(Material, Index, NumVertices, NumIndices, &Vertices, &Indices);

#if PRIVATE_COMPONENT_MEMBERS
	FVector RelativeScale3D0 = GetRelativeScale3D();
	FVector RelativeLocation0 = GetRelativeLocation();
	FRotator RelativeRodation0 = GetRelativeRotation();
#else
	FVector& RelativeScale3D0 = RelativeScale3D;
	FVector& RelativeLocation0 = RelativeLocation;
	FRotator& RelativeRodation0 = RelativeRotation;
#endif
    FMatrix InLocalToWorld( FVector(RelativeScale3D0.X, 0.0f, 0.0f ),
                            FVector( 0.0f, RelativeScale3D0.Y, 0.0f ),
                            FVector( 0.0f, 0.0f, RelativeScale3D0.Z ),
							RelativeLocation0);

	const FMatrix ComponentToWorld0 = GetComponentToWorld().ToMatrixWithScale();

    // Pack the data
    int32 ParticleIndex;
    int32 ParticlePackingIndex = 0;
    int32 IndexPackingIndex = 0;

    int32 VertexStride = sizeof(FParticleSpriteVertex);
    int32 VertexDynamicParameterStride = sizeof(FParticleVertexDynamicParameter);

    FVector ParticlePosition;
    FVector ParticleOldPosition;

    bool bUseLocalSpace = Source.bUseLocalSpace;

    const uint8* ParticleData = Source.DataContainer.ParticleData;
    const uint16* ParticleIndices = Source.DataContainer.ParticleIndices;
    //const FParticleOrder* OrderedIndices = ParticleOrder;

    int32 CurrentVertexIndex = 0;
    int32 CurrentIndexIndex = 0;

    FRotationMatrix RotationMatrix( RelativeRodation0 );

    FMatrix2x2 RelativeRotation2D(RotationMatrix.M[0][0],
        RotationMatrix.M[0][1],
        RotationMatrix.M[1][0],
        RotationMatrix.M[1][1]);

    for (int32 i = 0; i < ParticleCount; i++)
    {
        //ParticleIndex = OrderedIndices ? OrderedIndices[i].ParticleIndex : i;
        ParticleIndex = i;
        DECLARE_PARTICLE_CONST(Particle, ParticleData + Source.ParticleStride * ParticleIndices[ParticleIndex]);
        if (i + 1 < ParticleCount)
        {
            //int32 NextIndex = OrderedIndices ? OrderedIndices[i + 1].ParticleIndex : (i + 1);
            int32 NextIndex = i + 1;
            DECLARE_PARTICLE_CONST(NextParticle, ParticleData + Source.ParticleStride * ParticleIndices[NextIndex]);
            FPlatformMisc::Prefetch(&NextParticle);
        }

        ParticlePosition = Particle.Location;
        ParticleOldPosition = Particle.OldLocation;

        ApplyOrbitToPosition(Particle, Source, InLocalToWorld, ParticlePosition, ParticleOldPosition);

        float SubImageIndex = 0;

        if (Source.SubUVDataOffset > 0)
        {
            FFullSubUVPayload* SubUVPayload = (FFullSubUVPayload*)(((uint8*)&Particle) + Source.SubUVDataOffset);
            SubImageIndex = SubUVPayload->ImageIndex;       //For render sub uv sprites
        }

        FVector4 OutDynamicData;

        if (Source.DynamicParameterDataOffset > 0)
        {
            GetDynamicValueFromPayload(Source.DynamicParameterDataOffset, Particle, OutDynamicData);
        }

        FColor Color = Particle.Color.ToFColor(false);

		FVector2D Size3D = GetParticleSize(Particle, Source);
		if (Source.ScreenAlignment == PSA_Square)
		{
			Size3D.Y = Size3D.X;
		}

        FVector Position3D = ParticlePosition;

        if (bUseLocalSpace)
        {
			Size3D.X *= RelativeScale3D0.X;
			Size3D.Y *= RelativeScale3D0.Y;

			Position3D = ComponentToWorld0.TransformPosition( ParticlePosition );
        }


		FVector2D Position(Position3D.X, Position3D.Y);

		Position *= PostScale;

        Size3D *= PostScale;

        Size3D = GetParticleSizeWithUVFlipInSign(Particle, Size3D);
        FVector2D Size(Size3D.X, Size3D.Y);
        FVector2D Pos0(-Size.X, -Size.Y);
        FVector2D Pos1(Size.X, -Size.Y);
        if (Source.ScreenAlignment != PSA_Velocity)
        {
            Pos0 = Pos0.GetRotated(Particle.Rotation * 360);
            Pos1 = Pos1.GetRotated(Particle.Rotation * 360);

            if (bUseLocalSpace)
            {
                if (Source.bLockAxis && Source.bUseLocalSpace && (Source.LockAxisFlag == EPAL_Z || Source.LockAxisFlag == EPAL_NEGATIVE_Z))
                {
                    Pos0 = RelativeRotation2D.TransformVector(Pos0);
                    Pos1 = RelativeRotation2D.TransformVector(Pos1);
                }
            }
        }
        else
        {
            FVector Velocity = Particle.Velocity;
            Velocity.Z = 0.0f;
            Velocity.Normalize();
            FVector Direct0 = -Velocity;
            Velocity = Velocity.RotateAngleAxis(90, FVector(0.0f, 0.0f, 1.0f));
            Pos0.Set(Pos0.X * Velocity.X + Pos0.Y * Direct0.X, Pos0.X * Velocity.Y + Pos0.Y * Direct0.Y);
            Pos1.Set(Pos1.X * Velocity.X + Pos1.Y * Direct0.X, Pos1.X * Velocity.Y + Pos1.Y * Direct0.Y);
        }
        FVector2D Pos2 = Pos1 * -1.0f;
        FVector2D Pos3 = Pos0 * -1.0f;

        FVector2D SubImageSize(
            SourceData->SubImages_Horizontal,
            SourceData->SubImages_Vertical);

        FVector2D SubImageSizeZW(
            1.0f / SourceData->SubImages_Horizontal,
            1.0f / SourceData->SubImages_Vertical);

        double TmpVar = 0.0f;
        float SubImageLerp = modf(SubImageIndex, &TmpVar);
        float SubImageA = SubImageIndex - SubImageLerp;
        float SubImageAH = fmod(SubImageA, SubImageSize.X);
        float SubImageAV = floor(SubImageA * SubImageSizeZW.X);
        FVector2D UpperLeftUV = (FVector2D(SubImageAH, SubImageAV)) * SubImageSizeZW;
        FVector2D UpperRightUV = (FVector2D(SubImageAH+1, SubImageAV)) * SubImageSizeZW;
        FVector2D LowerLeftUV = (FVector2D(SubImageAH, SubImageAV+1)) * SubImageSizeZW;
        FVector2D LowerRightUV = (FVector2D(SubImageAH+1, SubImageAV+1)) * SubImageSizeZW;

        Vertices[CurrentVertexIndex].Position = Pos0 + Position;
        Vertices[CurrentVertexIndex].Color = Color;
        Vertices[CurrentVertexIndex].TexCoords[0] = UpperLeftUV[0];
        Vertices[CurrentVertexIndex].TexCoords[1] = UpperLeftUV[1];
        Vertices[CurrentVertexIndex].TexCoords[2] = OutDynamicData[0];
        Vertices[CurrentVertexIndex].TexCoords[3] = OutDynamicData[1];
        Vertices[CurrentVertexIndex].MaterialTexCoords[0] = OutDynamicData[2];
        Vertices[CurrentVertexIndex].MaterialTexCoords[1] = OutDynamicData[3];

        Vertices[CurrentVertexIndex + 1].Position = Pos1 + Position;
        Vertices[CurrentVertexIndex + 1].Color = Color;
        Vertices[CurrentVertexIndex + 1].TexCoords[0] = UpperRightUV[0];
        Vertices[CurrentVertexIndex + 1].TexCoords[1] = UpperRightUV[1];
        Vertices[CurrentVertexIndex + 1].TexCoords[2] = OutDynamicData[0];
        Vertices[CurrentVertexIndex + 1].TexCoords[3] = OutDynamicData[1];
        Vertices[CurrentVertexIndex + 1].MaterialTexCoords[0] = OutDynamicData[2];
        Vertices[CurrentVertexIndex + 1].MaterialTexCoords[1] = OutDynamicData[3];

        Vertices[CurrentVertexIndex + 2].Position = Pos2 + Position;
        Vertices[CurrentVertexIndex + 2].Color = Color;
        Vertices[CurrentVertexIndex + 2].TexCoords[0] = LowerLeftUV[0];
        Vertices[CurrentVertexIndex + 2].TexCoords[1] = LowerLeftUV[1];
        Vertices[CurrentVertexIndex + 2].TexCoords[2] = OutDynamicData[0];
        Vertices[CurrentVertexIndex + 2].TexCoords[3] = OutDynamicData[1];
        Vertices[CurrentVertexIndex + 2].MaterialTexCoords[0] = OutDynamicData[2];
        Vertices[CurrentVertexIndex + 2].MaterialTexCoords[1] = OutDynamicData[3];

        Vertices[CurrentVertexIndex + 3].Position = Pos3 + Position;
        Vertices[CurrentVertexIndex + 3].Color = Color;
        Vertices[CurrentVertexIndex + 3].TexCoords[0] = LowerRightUV[0];
        Vertices[CurrentVertexIndex + 3].TexCoords[1] = LowerRightUV[1];
        Vertices[CurrentVertexIndex + 3].TexCoords[2] = OutDynamicData[0];
        Vertices[CurrentVertexIndex + 3].TexCoords[3] = OutDynamicData[1];
        Vertices[CurrentVertexIndex + 3].MaterialTexCoords[0] = OutDynamicData[2];
        Vertices[CurrentVertexIndex + 3].MaterialTexCoords[1] = OutDynamicData[3];

        Indices[CurrentIndexIndex] = CurrentVertexIndex;
        Indices[CurrentIndexIndex + 1] = CurrentVertexIndex + 1;
        Indices[CurrentIndexIndex + 2] = CurrentVertexIndex + 2;

        Indices[CurrentIndexIndex + 3] = CurrentVertexIndex + 2;
        Indices[CurrentIndexIndex + 4] = CurrentVertexIndex + 1;
        Indices[CurrentIndexIndex + 5] = CurrentVertexIndex + 3;

        CurrentVertexIndex += 4;
        CurrentIndexIndex += 6;
    }

}


void UUIParticleComponent::GenerateRibbonVerticesData(const FDynamicRibbonEmitterReplayData* SourceData, uint32 Index, UMaterialInterface* Material, const FVector2D& PostTranslation, const FVector2D& PostScale, bool bTextureTileDistance, bool bUsesDynamicParameter, SParticle* ParticleWidget)
{
    if (!ParticleWidget)
        return;

    int32	TrianglesToRender = 0;

    const FDynamicRibbonEmitterReplayData& Data = *SourceData;

    TArray<FSlateVertex> Vertices;
    
    //FParticleBeamTrailVertex* Vertex;
    //FParticleBeamTrailVertexDynamicParameter* DynParamVertex;

    const FDynamicRibbonEmitterReplayData& Source = *SourceData;

    int32 MaxTessellationBetweenParticles = FMath::Max<int32>(Source.MaxTessellationBetweenParticles, 1);
    int32 Sheets = 1;

    bool bUseDynamic = bUsesDynamicParameter;

    // The distance tracking for tiling the 2nd UV set
    float CurrDistance = 0.0f;

    uint32 NumSegments = 0;

    float Scaling = PostScale.X;

    FBaseParticle* PackingParticle;
    const uint8* ParticleData = Source.DataContainer.ParticleData;
    for (int32 ParticleIdx = 0; ParticleIdx < Source.ActiveParticleCount; ParticleIdx++)
    {
        DECLARE_PARTICLE_PTR(Particle, ParticleData + Source.ParticleStride * Source.DataContainer.ParticleIndices[ParticleIdx]);
        FRibbonTypeDataPayload* TrailPayload = (FRibbonTypeDataPayload*)((uint8*)Particle + Source.TrailDataOffset);
        if (TRAIL_EMITTER_IS_HEAD(TrailPayload->Flags) == 0)
        {
            continue;
        }

        if (TRAIL_EMITTER_GET_NEXT(TrailPayload->Flags) == TRAIL_EMITTER_NULL_NEXT)
        {
            continue;
        }

        PackingParticle = Particle;
        // Pin the size to the X component
        FLinearColor CurrLinearColor = PackingParticle->Color;
        // The increment for going [0..1] along the complete trail
        float TextureIncrement = 1.0f / (TrailPayload->TriangleCount / 2.0f);
        float Tex_U = 0.0f;
        FVector CurrTilePosition = PackingParticle->Location * Scaling;
        FVector PrevTilePosition = PackingParticle->Location * Scaling;
        FVector PrevWorkingUp(0, 0, 1);
        int32 VertexStride = sizeof(FParticleBeamTrailVertex);
        int32 DynamicParameterStride = 0;
        bool bFillDynamic = false;
        if (bUseDynamic)
        {
            DynamicParameterStride = sizeof(FParticleBeamTrailVertexDynamicParameter);
            if (Source.DynamicParameterDataOffset > 0)
            {
                bFillDynamic = true;
            }
        }
        float CurrTileU;
        FEmitterDynamicParameterPayload* CurrDynPayload = NULL;
        FEmitterDynamicParameterPayload* PrevDynPayload = NULL;
        FBaseParticle* PrevParticle = NULL;
        FRibbonTypeDataPayload* PrevTrailPayload = NULL;

        FVector WorkingUp = TrailPayload->Up;

		if (/*RenderAxisOption == Trails_CameraUp*/1)
		{
			FVector DirToCamera(0.0f, 0.0f, 1.0f);
			DirToCamera.Normalize();
			FVector NormailzedTangent = TrailPayload->Tangent;
			NormailzedTangent.Normalize();
			WorkingUp = NormailzedTangent ^ DirToCamera;
			WorkingUp.Normalize();
		}

        while (TrailPayload)
        {
            float CurrSize = PackingParticle->Size.X * Source.Scale.X * Scaling;

            int32 InterpCount = TrailPayload->RenderingInterpCount;
            if (InterpCount > 1)
            {
                check(PrevParticle);
                check(TRAIL_EMITTER_IS_HEAD(TrailPayload->Flags) == 0);

                // Interpolate between current and next...
                FVector CurrPosition = PackingParticle->Location * Scaling;
                FVector CurrTangent = TrailPayload->Tangent * Scaling;
                FVector CurrUp = WorkingUp;
                FLinearColor CurrColor = PackingParticle->Color;

                FVector PrevPosition = PrevParticle->Location * Scaling;
                FVector PrevTangent = PrevTrailPayload->Tangent * Scaling;
                FVector PrevUp = PrevWorkingUp;
                FLinearColor PrevColor = PrevParticle->Color;
                float PrevSize = PrevParticle->Size.X * Source.Scale.X * Scaling;

                float InvCount = 1.0f / InterpCount;
                float Diff = PrevTrailPayload->SpawnTime - TrailPayload->SpawnTime;

                FVector4 CurrDynParam;
                FVector4 PrevDynParam;
                if (bFillDynamic)
                {
                    GetDynamicValueFromPayload(Source.DynamicParameterDataOffset, *PackingParticle, CurrDynParam);
                    GetDynamicValueFromPayload(Source.DynamicParameterDataOffset, *PrevParticle, PrevDynParam);
                }

                FVector4 InterpDynamic(1.0f, 1.0f, 1.0f, 1.0f);
                for (int32 SpawnIdx = InterpCount - 1; SpawnIdx >= 0; SpawnIdx--)
                {
                    float TimeStep = InvCount * SpawnIdx;
                    FVector InterpPos = FMath::CubicInterp<FVector>(CurrPosition, CurrTangent, PrevPosition, PrevTangent, TimeStep);
                    FVector InterpUp = FMath::Lerp<FVector>(CurrUp, PrevUp, TimeStep);
                    FLinearColor InterpColor = FMath::Lerp<FLinearColor>(CurrColor, PrevColor, TimeStep);
                    float InterpSize = FMath::Lerp<float>(CurrSize, PrevSize, TimeStep);
                    if (bFillDynamic)
                    {
                        InterpDynamic = FMath::Lerp<FVector4>(CurrDynParam, PrevDynParam, TimeStep);
                    }

                    if (bTextureTileDistance == true)
                    {
                        CurrTileU = FMath::Lerp<float>(TrailPayload->TiledU, PrevTrailPayload->TiledU, TimeStep);
                    }
                    else
                    {
                        CurrTileU = Tex_U;
                    }

                    FVector FinalPos = InterpPos + InterpUp * InterpSize;
                    if (Source.bUseLocalSpace)
                    {
                        //FinalPos += Data.LocalToWorld.GetOrigin();
                    }

                    FSlateVertex NewVertex0;

                    FSlateVertex* Vertex = (FSlateVertex*)(&NewVertex0);
                    Vertex->Position = FVector2D( FinalPos );
                    Vertex->TexCoords[0] = Tex_U;
                    Vertex->TexCoords[1] = 0.0f;
                    Vertex->TexCoords[2] = CurrTileU;
                    Vertex->TexCoords[3] = 0.0f;
                    Vertex->Color = InterpColor.ToFColor(true);
                    if (bUseDynamic)
                    {
                        Vertex->MaterialTexCoords[0] = InterpDynamic.X;
                        Vertex->MaterialTexCoords[1] = InterpDynamic.Y;
                        //DynParamVertex->DynamicValue[2] = InterpDynamic.Z;
                        //DynParamVertex->DynamicValue[3] = InterpDynamic.W;
                    }
                    Vertices.Add(NewVertex0);

                    FSlateVertex NewVertex1;

                    FinalPos = InterpPos - InterpUp * InterpSize;
                    Vertex = (FSlateVertex*)(&NewVertex1);
                    Vertex->Position = FVector2D(FinalPos);
                    Vertex->TexCoords[0] = Tex_U;
                    Vertex->TexCoords[1] = 1.0f;
                    Vertex->TexCoords[2] = CurrTileU;
                    Vertex->TexCoords[3] = 1.0f;
                    Vertex->Color = InterpColor.ToFColor(true);
                    if (bUseDynamic)
                    {
                        Vertex->MaterialTexCoords[0] = InterpDynamic.X;
                        Vertex->MaterialTexCoords[1] = InterpDynamic.Y;
                        //DynParamVertex->DynamicValue[2] = InterpDynamic.Z;
                        //DynParamVertex->DynamicValue[3] = InterpDynamic.W;
                    }
                    Vertices.Add(NewVertex1);

                    Tex_U += TextureIncrement;

                    NumSegments++;
                }
            }
            else
            {
                if (bFillDynamic == true)
                {
                    CurrDynPayload = ((FEmitterDynamicParameterPayload*)((uint8*)(PackingParticle)+Source.DynamicParameterDataOffset));
                }

                if (bTextureTileDistance == true)
                {
                    CurrTileU = TrailPayload->TiledU;
                }
                else
                {
                    CurrTileU = Tex_U;
                }

                FSlateVertex NewVertex0;

                FSlateVertex* Vertex = (FSlateVertex*)(&NewVertex0);
                Vertex->Position = FVector2D( PackingParticle->Location * Scaling + WorkingUp * CurrSize );
                Vertex->TexCoords[0] = Tex_U;
                Vertex->TexCoords[1] = 0.0f;
                Vertex->TexCoords[2] = CurrTileU;
                Vertex->TexCoords[3] = 0.0f;
                Vertex->Color = PackingParticle->Color.ToFColor(true);
                if (bUseDynamic)
                {
                    if (CurrDynPayload != NULL)
                    {
                        Vertex->MaterialTexCoords[0] = CurrDynPayload->DynamicParameterValue[0];
                        Vertex->MaterialTexCoords[1] = CurrDynPayload->DynamicParameterValue[1];
                        //DynParamVertex->DynamicValue[2] = CurrDynPayload->DynamicParameterValue[2];
                        //DynParamVertex->DynamicValue[3] = CurrDynPayload->DynamicParameterValue[3];
                    }
                    else
                    {
                        Vertex->MaterialTexCoords[0] = 1.0f;
                        Vertex->MaterialTexCoords[1] = 1.0f;
                        //DynParamVertex->DynamicValue[2] = 1.0f;
                        //DynParamVertex->DynamicValue[3] = 1.0f;
                    }
                }

                Vertices.Add(NewVertex0);


                FSlateVertex NewVertex1;

                Vertex = (FSlateVertex*)(&NewVertex1);
                Vertex->Position = FVector2D( PackingParticle->Location * Scaling - WorkingUp * CurrSize );
                Vertex->TexCoords[0] = Tex_U;
                Vertex->TexCoords[1] = 1.0f;
                Vertex->TexCoords[2] = CurrTileU;
                Vertex->TexCoords[3] = 1.0f;
                Vertex->Color = PackingParticle->Color.ToFColor(true);
                if (bUseDynamic)
                {
                    if (CurrDynPayload != NULL)
                    {
                        Vertex->MaterialTexCoords[0] = CurrDynPayload->DynamicParameterValue[0];
                        Vertex->MaterialTexCoords[1] = CurrDynPayload->DynamicParameterValue[1];
                        //DynParamVertex->DynamicValue[2] = CurrDynPayload->DynamicParameterValue[2];
                        //DynParamVertex->DynamicValue[3] = CurrDynPayload->DynamicParameterValue[3];
                    }
                    else
                    {
                        Vertex->MaterialTexCoords[0] = 1.0f;
                        Vertex->MaterialTexCoords[1] = 1.0f;
                        //DynParamVertex->DynamicValue[2] = 1.0f;
                        //DynParamVertex->DynamicValue[3] = 1.0f;
                    }
                }

                Vertices.Add(NewVertex1);

                Tex_U += TextureIncrement;

                NumSegments++;
			}

            PrevParticle = PackingParticle;
            PrevTrailPayload = TrailPayload;
            PrevWorkingUp = WorkingUp;

            int32	NextIdx = TRAIL_EMITTER_GET_NEXT(TrailPayload->Flags);
            if (NextIdx == TRAIL_EMITTER_NULL_NEXT)
            {
                TrailPayload = NULL;
                PackingParticle = NULL;
            }
            else
            {
                DECLARE_PARTICLE_PTR(TempParticle, ParticleData + Source.ParticleStride * NextIdx);
                PackingParticle = TempParticle;
                TrailPayload = (FRibbonTypeDataPayload*)((uint8*)TempParticle + Source.TrailDataOffset);
                WorkingUp = TrailPayload->Up;
                if (/*RenderAxisOption == Trails_CameraUp*/1)
                {
                    //FVector DirToCamera = PackingParticle->Location - ViewOrigin;
                    FVector DirToCamera(0.0f, 0.0f, 1.0f);
                    DirToCamera.Normalize();
                    FVector NormailzedTangent = TrailPayload->Tangent;
                    NormailzedTangent.Normalize();
                    WorkingUp = NormailzedTangent ^ DirToCamera;
                    WorkingUp.Normalize();
                }
            }

        }
    }

    int32 NumVertices = Vertices.Num();

    TArray<SlateIndex> Indices;

    for (int32 i = 0; i != NumVertices / 2 - 1; ++i)
    {
        SlateIndex Index0 = i * 2;
        SlateIndex Index1 = i * 2 + 1;
        SlateIndex Index2 = i * 2 + 2;
        SlateIndex Index3 = i * 2 + 3;

        Indices.Add(Index0);
        Indices.Add(Index2);
        Indices.Add(Index1);
        Indices.Add(Index1);
        Indices.Add(Index2);
        Indices.Add(Index3);
    }

    FSlateVertex* VertPtr = NULL;
    SlateIndex* IndPtr = NULL;

    ParticleWidget->GetUpdatePtr(Material, Index, NumVertices, Indices.Num(), &VertPtr, &IndPtr);

    memcpy(VertPtr, &Vertices[0], NumVertices * sizeof(FSlateVertex));
    memcpy(IndPtr, &Indices[0], Indices.Num() * sizeof(SlateIndex));

}

void UUIParticleComponent::SendRenderDynamicData_Concurrent()
{
}

AUIParticleActor::AUIParticleActor(class FObjectInitializer const &)
{

}

UUIParticleComponent* AUIParticleActor::Emit()
{
    UUIParticleComponent* PSC = NewObject<UUIParticleComponent>((UObject*)this);
    PSC->bAutoDestroy = false;
    PSC->bAllowAnyoneToDestroyMe = true;
    PSC->SecondsBeforeInactive = 0.0f;
    PSC->bAutoActivate = false;
    PSC->bOverrideLODMethod = false;
#if PRIVATE_COMPONENT_MEMBERS
    PSC->SetUsingAbsoluteLocation(true);
    PSC->SetUsingAbsoluteRotation(true);
    PSC->SetUsingAbsoluteScale(true);
#else
    PSC->bAbsoluteLocation = (true);
    PSC->bAbsoluteRotation = (true);
    PSC->bAbsoluteScale = (true);
#endif
    PSC->SetHiddenInGame(false);
    PSC->RegisterComponentWithWorld(this->GetWorld());
    PSC->Activate(true);
    return PSC;
}