#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ShinsenDataAsset_CharacterFieldAI.generated.h"

class UBehaviorTree;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenDataAsset_CharacterFieldAI : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBehaviorTree* BehaviorTree[5];
    
    UShinsenDataAsset_CharacterFieldAI();
};

