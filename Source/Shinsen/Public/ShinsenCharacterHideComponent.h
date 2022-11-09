#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShinsenCharacterHideComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenCharacterHideComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UShinsenCharacterHideComponent();
};

