#pragma once
#include "CoreMinimal.h"
#include "MapLoadLevel.generated.h"

class ULevelStreamingDynamic;

USTRUCT(BlueprintType)
struct SHINSEN_API FMapLoadLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreamingDynamic* Level;
    
    FMapLoadLevel();
};

