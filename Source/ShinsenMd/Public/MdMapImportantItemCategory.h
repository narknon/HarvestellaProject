#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdImportantItemCategory.h"
#include "MdMapImportantItemCategory.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapImportantItemCategory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdImportantItemCategory> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdImportantItemCategory Dummy;
    
    UMdMapImportantItemCategory();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdImportantItemCategory GetMd(const FString& InId) const;
    
};

