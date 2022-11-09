#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ShinsenAnimNotifyState_StopAnimWhenCantItemUse.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class SHINSEN_API UShinsenAnimNotifyState_StopAnimWhenCantItemUse : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UShinsenAnimNotifyState_StopAnimWhenCantItemUse();
};

