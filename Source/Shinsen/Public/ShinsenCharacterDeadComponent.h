#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ShinsenCharacterDeadComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenCharacterDeadComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UShinsenCharacterDeadComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEffectNpc(float BlackTime, float FadeTime, float SpriteRate, float DustRate, float AuraRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartEffect(float BlackTime, float DissolveTime, FLinearColor DissolveColor, float SpriteRate, float DustRate, float AuraRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDisApperEffect(float FadeTime, float SpriteRate, float DustRate, float AuraRate);
    
};

