#pragma once
#include "CoreMinimal.h"
#include "ECharacterJobType.h"
#include "ShinsenCharacterJobSlot.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterJobSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterJobType JobType;
    
    FShinsenCharacterJobSlot();
};

