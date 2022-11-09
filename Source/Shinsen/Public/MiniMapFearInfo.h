#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MiniMapFearInfo.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FMiniMapFearInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelDiff;
    
    FMiniMapFearInfo();
};

