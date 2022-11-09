#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShinsenInterface_Character.h"
#include "ShinsenCharacterColorChangeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenCharacterColorChangeComponent : public UActorComponent, public IShinsenInterface_Character {
    GENERATED_BODY()
public:
    UShinsenCharacterColorChangeComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAlphaForCameraDistance(float bAlpha);
    
    
    // Fix for true pure virtual functions not being implemented
};

