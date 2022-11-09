#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ParticleSystemWidget.generated.h"

class UParticleSystem;
class UParticleSystemComponent;
class AActor;

UCLASS(Blueprintable)
class UIPARTICLESYSTEM_API UParticleSystemWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystemTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickEvenWhenPaused;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* WorldParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WorldParticleActor;
    
public:
    UParticleSystemWidget();
    UFUNCTION(BlueprintCallable)
    bool UpdateParticleActivate(bool bActivate);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateParticle(UParticleSystem* ParticleSystem, bool bActivate);
    
    UFUNCTION(BlueprintCallable)
    void SetReactivate(bool bActivateAndReset);
    
    UFUNCTION(BlueprintCallable)
    void InitParticle();
    
    UFUNCTION(BlueprintCallable)
    void ActivateParticles(bool bActive, bool bReset);
    
};

