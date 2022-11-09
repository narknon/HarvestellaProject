#pragma once
#include "CoreMinimal.h"
#include "MdTxtRecipeName.h"
#include "UObject/Object.h"
#include "MdMapTxtRecipeName.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtRecipeName : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtRecipeName> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtRecipeName Dummy;
    
    UMdMapTxtRecipeName();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtRecipeName GetMd(const FString& InId) const;
    
};

