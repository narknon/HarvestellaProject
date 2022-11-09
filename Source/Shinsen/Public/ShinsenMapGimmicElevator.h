#pragma once
#include "CoreMinimal.h"
#include "ShinsenMapGimmick.h"
#include "ShinsenMapGimmicElevator.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenMapGimmicElevator : public AShinsenMapGimmick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepaired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RepairedFlagName;
    
    AShinsenMapGimmicElevator();
};

