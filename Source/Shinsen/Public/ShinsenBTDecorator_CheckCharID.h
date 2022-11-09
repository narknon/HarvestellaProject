#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ShinsenBTDecorator_CheckCharID.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_CheckCharID : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CharIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatch;
    
    UShinsenBTDecorator_CheckCharID();
};

