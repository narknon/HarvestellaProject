#pragma once
#include "CoreMinimal.h"
#include "EPictureBookEnemyInfoLevelStep.h"
#include "PictureBookEnemy.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FPictureBookEnemy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPictureBookEnemyInfoLevelStep InfoLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> HitAttr;
    
    FPictureBookEnemy();
};

