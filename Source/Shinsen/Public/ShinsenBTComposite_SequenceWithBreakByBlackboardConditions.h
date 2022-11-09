#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "ShinsenBTComposite_SequenceWithBreakByBlackboardConditionsBlackboardInfo.h"
#include "ShinsenBTComposite_SequenceWithBreakByBlackboardConditions.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTComposite_SequenceWithBreakByBlackboardConditions : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenBTComposite_SequenceWithBreakByBlackboardConditionsBlackboardInfo> BlackboardInfos;
    
    UShinsenBTComposite_SequenceWithBreakByBlackboardConditions();
};

