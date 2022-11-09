#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdItemCategory.h"
#include "MdMapItemCategory.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapItemCategory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdItemCategory> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdItemCategory Dummy;
    
    UMdMapItemCategory();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdItemCategory GetMd(const FString& InId) const;
    
};

