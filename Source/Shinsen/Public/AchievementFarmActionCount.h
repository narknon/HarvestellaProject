#pragma once
#include "CoreMinimal.h"
#include "AchievementFarmActionCount.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FAchievementFarmActionCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Charge;
    
    FAchievementFarmActionCount();
};

