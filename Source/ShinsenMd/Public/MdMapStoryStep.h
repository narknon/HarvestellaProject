#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdStoryStep.h"
#include "MdMapStoryStep.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapStoryStep : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdStoryStep> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdStoryStep Dummy;
    
    UMdMapStoryStep();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdStoryStep GetMd(const FString& InId) const;
    
};

