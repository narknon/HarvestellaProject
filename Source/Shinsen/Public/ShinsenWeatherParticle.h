#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenWeatherParticle.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class SHINSEN_API AShinsenWeatherParticle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentParticle;
    
    AShinsenWeatherParticle();
    UFUNCTION(BlueprintCallable)
    void UpdateParticle(const FString& ParticlePath);
    
    UFUNCTION(BlueprintCallable)
    void StopImmidiately();
    
};

