#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ShinsenAttackMakerSpawnParam.h"
#include "ShinsenAnimNotifyState_AttackMarker.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SHINSEN_API UShinsenAnimNotifyState_AttackMarker : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenAttackMakerSpawnParam SpawnParam;
    
    UShinsenAnimNotifyState_AttackMarker();
};

