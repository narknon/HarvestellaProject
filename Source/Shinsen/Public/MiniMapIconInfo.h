#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMapIconType.h"
#include "MiniMapIconInfo.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FMiniMapIconInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> QuestIDs;
    
    FMiniMapIconInfo();
};

