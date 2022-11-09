#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterJobSlot.h"
#include "ShinsenCharacterJobSlots.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterJobSlots {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterJobSlot JobSlotU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterJobSlot JobSlotL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterJobSlot JobSlotB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterJobSlot JobSlotR;
    
    FShinsenCharacterJobSlots();
};

