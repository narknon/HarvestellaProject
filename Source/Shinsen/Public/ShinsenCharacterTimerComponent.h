#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShinsenCharacterTimerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenCharacterTimerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UShinsenCharacterTimerComponent();
};

