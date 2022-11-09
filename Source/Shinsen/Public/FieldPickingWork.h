#pragma once
#include "CoreMinimal.h"
#include "FieldPickingWork.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FFieldPickingWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DropNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecoveryDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDispMiniMapIcon;
    
    FFieldPickingWork();
};

