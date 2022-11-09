#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTCompositeNode.h"
#include "ShinsenBTComposite_WeightedRandom.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTComposite_WeightedRandom : public UBTCompositeNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftChildSelectingRate;
    
    UShinsenBTComposite_WeightedRandom();
};

