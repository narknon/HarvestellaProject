#pragma once
#include "CoreMinimal.h"
#include "AccessoryEffect.h"
#include "Accessory.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FAccessory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccessoryEffect> Slots;
    
    FAccessory();
};

