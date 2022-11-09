#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdRecipeBook.h"
#include "MdMapRecipeBook.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapRecipeBook : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdRecipeBook> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdRecipeBook Dummy;
    
    UMdMapRecipeBook();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdRecipeBook GetMd(const FString& InId) const;
    
};

