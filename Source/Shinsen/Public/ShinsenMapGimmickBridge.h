#pragma once
#include "CoreMinimal.h"
#include "ShinsenMapGimmick.h"
#include "ShinsenMapGimmickBridge.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenMapGimmickBridge : public AShinsenMapGimmick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FoundFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepaired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RepairedFlagName;
    
    AShinsenMapGimmickBridge();
};

