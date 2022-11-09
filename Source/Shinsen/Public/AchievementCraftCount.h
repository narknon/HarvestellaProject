#pragma once
#include "CoreMinimal.h"
#include "AchievementCraftCount.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FAchievementCraftCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Create;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Try;
    
    FAchievementCraftCount();
};

