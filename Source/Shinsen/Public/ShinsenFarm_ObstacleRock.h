#pragma once
#include "CoreMinimal.h"
#include "ShinsenFarm_MachineBase.h"
#include "ShinsenFarm_ObstacleRock.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenFarm_ObstacleRock : public AShinsenFarm_MachineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    AShinsenFarm_ObstacleRock();
};

