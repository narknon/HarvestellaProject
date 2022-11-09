#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ShinsenAnimNotify_RandomizedBulletParty_BulletInfo.h"
#include "ShinsenAnimNotify_RandomizedBulletParty.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SHINSEN_API UShinsenAnimNotify_RandomizedBulletParty : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenAnimNotify_RandomizedBulletParty_BulletInfo> Bullets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDuplicate;
    
    UShinsenAnimNotify_RandomizedBulletParty();
};

