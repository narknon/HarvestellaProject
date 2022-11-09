#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ShinsenAnimNotify_BulletByBlackboardBulletSpawnInfo.h"
#include "ShinsenAnimNotify_BulletByBlackboard.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SHINSEN_API UShinsenAnimNotify_BulletByBlackboard : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyOneBulletSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenAnimNotify_BulletByBlackboardBulletSpawnInfo> BulletSpawnInfos;
    
    UShinsenAnimNotify_BulletByBlackboard();
};

