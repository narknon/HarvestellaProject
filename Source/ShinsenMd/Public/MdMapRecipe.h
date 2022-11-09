#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdRecipe.h"
#include "MdMapRecipe.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapRecipe : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdRecipe> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdRecipe Dummy;
    
    UMdMapRecipe();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdRecipe GetMd(const FString& InId) const;
    
};

