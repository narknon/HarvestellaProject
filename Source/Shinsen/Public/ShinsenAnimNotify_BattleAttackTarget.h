#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ECharacterAIAttackTargetType.h"
#include "ShinsenAnimNotify_BattleAttackTarget.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SHINSEN_API UShinsenAnimNotify_BattleAttackTarget : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAIAttackTargetType TargetType;
    
    UShinsenAnimNotify_BattleAttackTarget();
};

