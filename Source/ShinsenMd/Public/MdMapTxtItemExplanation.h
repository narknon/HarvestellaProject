#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtItemExplanation.h"
#include "MdMapTxtItemExplanation.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtItemExplanation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtItemExplanation> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtItemExplanation Dummy;
    
    UMdMapTxtItemExplanation();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtItemExplanation GetMd(const FString& InId) const;
    
};

