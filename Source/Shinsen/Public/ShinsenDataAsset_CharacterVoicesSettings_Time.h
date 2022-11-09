#pragma once
#include "CoreMinimal.h"
#include "ShinsenDataAsset_CharacterVoicesSettings_Time.generated.h"

USTRUCT(BlueprintType)
struct FShinsenDataAsset_CharacterVoicesSettings_Time {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Min;
    
    SHINSEN_API FShinsenDataAsset_CharacterVoicesSettings_Time();
};

