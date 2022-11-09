// Copyright 2020 Yijie Shi. All Rights Reserved.

#pragma once

#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "UIParticleComponent.generated.h"

class SParticle;
struct FDynamicSpriteEmitterReplayDataBase;
struct FDynamicRibbonEmitterReplayData;


UCLASS()
class UIPARTICLESYSTEM_API UUIParticleComponent : public UParticleSystemComponent
{
    GENERATED_UCLASS_BODY()
    ~UUIParticleComponent();
    void SetActivateState( bool bActivate );
    virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
    void SetTransformation(const FVector2D& Translation, const FVector2D& Scale, const FRotator& Rotator );
    void UpdateRendering(const FVector2D& PostTranslation, const FVector2D& PostScale, SParticle* UIWdiget);
    virtual FPrimitiveSceneProxy* CreateSceneProxy() override;
protected:
    virtual void SendRenderDynamicData_Concurrent() override;
    void GenerateSpriteVerticesData( const FDynamicSpriteEmitterReplayDataBase* SourceData, uint32 Index, UMaterialInterface*, const FVector2D& PostTranslation, const FVector2D& PostScale, SParticle* );
    void GenerateRibbonVerticesData( const FDynamicRibbonEmitterReplayData* SourceData, uint32 Index, UMaterialInterface*, const FVector2D& PostTranslation, const FVector2D& PostScale, bool bTextureTileDistance, bool bUsesDynamicParameter, SParticle* );
	bool bTransformationSet;
    bool bPendingActivate;
};

class UUIParticleComponent;
UCLASS()
class AUIParticleActor : public AActor
{
    GENERATED_UCLASS_BODY()
    UUIParticleComponent* Emit();
};