#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdRecipeCategory.h"
#include "MdMapRecipeCategory.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapRecipeCategory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdRecipeCategory> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdRecipeCategory Dummy;
    
    UMdMapRecipeCategory();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdRecipeCategory GetMd(const FString& InId) const;
    
};

