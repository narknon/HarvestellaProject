#pragma once
#include "CoreMinimal.h"
#include "EFarmAction.h"
#include "PlayerEventFarmDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerEventFarm, EFarmAction, Action);

