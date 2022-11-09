#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtRecipeCategory.h"
#include "MdMapTxtRecipeCategory.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtRecipeCategory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtRecipeCategory> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtRecipeCategory Dummy;
    
    UMdMapTxtRecipeCategory();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtRecipeCategory GetMd(const FString& InId) const;
    
};

