#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EWeather.h"
#include "ShinsenWeatherComponent.generated.h"

class AShinsenWeatherParticle;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenWeatherComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenWeatherParticle* Particle;
    
public:
    UShinsenWeatherComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWeatherParticleEnable(bool inEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetWeatherID(EWeather inWeatherID);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool inEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectEnable(bool inEnable);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUseID(EWeather inWeatherID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEffectEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeather GetWeatherID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeather GetPrevWeatherID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLightIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetLightColor() const;
    
};

