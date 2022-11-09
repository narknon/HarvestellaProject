#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ShinsenAnimNotify_BulletByEnemyExistNumBulletSpawnInfo.h"
#include "ShinsenAnimNotify_BulletByEnemyExistNum.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SHINSEN_API UShinsenAnimNotify_BulletByEnemyExistNum : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CharIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenAnimNotify_BulletByEnemyExistNumBulletSpawnInfo> BulletSpawnInfos;
    
    UShinsenAnimNotify_BulletByEnemyExistNum();
};

