#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShinsenCharacterStaminaComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenCharacterStaminaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UShinsenCharacterStaminaComponent();
};

