#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdQuestStep.h"
#include "MdMapQuestStep.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapQuestStep : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdQuestStep> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdQuestStep Dummy;
    
    UMdMapQuestStep();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdQuestStep GetMd(const FString& InId) const;
    
};

