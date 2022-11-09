#pragma once
#include "CoreMinimal.h"
#include "MdTxtItemCategory.h"
#include "UObject/Object.h"
#include "MdMapTxtItemCategory.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtItemCategory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtItemCategory> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtItemCategory Dummy;
    
    UMdMapTxtItemCategory();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtItemCategory GetMd(const FString& InId) const;
    
};

