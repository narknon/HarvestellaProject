#pragma once
#include "CoreMinimal.h"
#include "LanInfo.generated.h"

USTRUCT(BlueprintType)
struct FLanInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_vStrOfs;
    
    SHINSEN_API FLanInfo();
};

