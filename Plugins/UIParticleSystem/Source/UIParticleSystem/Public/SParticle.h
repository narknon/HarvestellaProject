// Copyright 2020 Yijie Shi. All Rights Reserved.

#pragma once

#include "Runtime/UMG/Public/Slate/SMeshWidget.h"
#include "UIParticleComponent.h"
#include "SlateMaterialBrush.h"

class UWorld;
class UIPARTICLESYSTEM_API SParticle : public SMeshWidget
{
public:
    SLATE_BEGIN_ARGS(SParticle) 
    {
    }
    SLATE_DEFAULT_SLOT(FArguments, Content)
    SLATE_END_ARGS()

    ~SParticle();
    void Construct(const FArguments& Args);
    void BeginUpdate();
    virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyClippingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const override;
    void GetUpdatePtr(UMaterialInterface* Material, uint32 Index, uint32 NumVertices, uint32 NumIndices, FSlateVertex** Vertices, SlateIndex** Indices);
	TWeakObjectPtr<UUIParticleComponent> ParticleInScene;
    static TSharedPtr<FSlateMaterialBrush> GetValidSlateMaterial(UMaterialInterface*);
    static void ReleaseInvalidSlateMaterials();
private:
    static TMap<FString, TSharedPtr<FSlateMaterialBrush>> SlateBrusheList;
};