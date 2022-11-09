// Copyright 2020 Yijie Shi. All Rights Reserved.

#pragma once

#include "Runtime/UMG/Public/Components/Widget.h"
#include "SParticle.h"
#include "ParticleWidget.generated.h"


DECLARE_STATS_GROUP(TEXT("UIParticles"), STATGROUP_UIParticles, STATCAT_Advanced);
DECLARE_CYCLE_STAT(TEXT("UIParticles All GT"), STAT_UIParticles_All_GT, STATGROUP_UIParticles);
DECLARE_CYCLE_STAT(TEXT("UIParticles Tick GT"), STAT_UIParticles_Tick_GT, STATGROUP_UIParticles);
DECLARE_CYCLE_STAT(TEXT("UIParticles OnPaint GT"), STAT_UIParticles_UpdateRendering, STATGROUP_UIParticles);
DECLARE_CYCLE_STAT(TEXT("UIParticles TickComponent GT"), STAT_UIParticles_TickComponent_GT, STATGROUP_UIParticles);


DECLARE_DWORD_COUNTER_STAT_EXTERN(TEXT("UIParticles Sprites Num"), STAT_UIParticles_Sprites_Num, STATGROUP_UIParticles, );


class UUIParticleComponent;

UCLASS()
class UIPARTICLESYSTEM_API UParticleSystemWidget : public UWidget
{
	GENERATED_UCLASS_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Particle", DisplayName = "ParticleSystem")
    UParticleSystem* ParticleSystemTemplate;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Behavior")
    bool bAutoActivate;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Behavior")
    bool bReactivate;

private:
	UPROPERTY()
    UUIParticleComponent* WorldParticleComponent;        // Don't use bAutoDestroy!

	UPROPERTY()
	AActor* WorldParticleActor;

	void InitParticleSystem();

public:
    virtual TSharedRef<SWidget> RebuildWidget() override;
    virtual void SynchronizeProperties() override;
    virtual void ReleaseSlateResources(bool bReleaseChildren) override;
    UFUNCTION(BlueprintCallable, Category = "Particle")
    void ActivateParticles(bool bActive, bool bReset);

    UFUNCTION(BlueprintCallable, Category = "Particle")
    void SetReactivate(bool bActivateAndReset);

	UFUNCTION(BlueprintCallable, Category = "Particle")
	UParticleSystemComponent* GetParticleComponent() const;

	virtual void Serialize(FArchive& Ar);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual const FText GetPaletteCategory() override;
#endif

private:
    TSharedPtr<SParticle> MyParticleWidget;
};