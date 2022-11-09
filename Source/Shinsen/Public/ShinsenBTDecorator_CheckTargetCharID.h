#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ShinsenBTDecorator_CheckTargetCharID.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_CheckTargetCharID : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CharIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatch;
    
    UShinsenBTDecorator_CheckTargetCharID();
};

