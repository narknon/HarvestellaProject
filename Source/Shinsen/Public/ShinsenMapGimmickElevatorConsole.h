#pragma once
#include "CoreMinimal.h"
#include "ShinsenMapGimmick.h"
#include "ShinsenMapGimmickElevatorConsole.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenMapGimmickElevatorConsole : public AShinsenMapGimmick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FoundFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnlockFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnlockEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RideEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    AShinsenMapGimmickElevatorConsole();
};

