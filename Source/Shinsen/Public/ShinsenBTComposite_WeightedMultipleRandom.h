#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "ShinsenBTComposite_WeightedMultipleRandom.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTComposite_WeightedMultipleRandom : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ChildSelectingRate;
    
    UShinsenBTComposite_WeightedMultipleRandom();
};

