#pragma once
#include "CoreMinimal.h"
#include "MdAchievement.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdAchievement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetId;
    
    FMdAchievement();
};

