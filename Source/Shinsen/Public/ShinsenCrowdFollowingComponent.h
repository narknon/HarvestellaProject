#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "ShinsenCrowdFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenCrowdFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    UShinsenCrowdFollowingComponent();
};

