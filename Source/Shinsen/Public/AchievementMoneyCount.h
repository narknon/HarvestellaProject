#pragma once
#include "CoreMinimal.h"
#include "AchievementMoneyCount.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FAchievementMoneyCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Get;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Use;
    
    FAchievementMoneyCount();
};

