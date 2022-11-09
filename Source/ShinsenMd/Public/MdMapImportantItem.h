#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdImportantItem.h"
#include "MdMapImportantItem.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapImportantItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdImportantItem> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdImportantItem Dummy;
    
    UMdMapImportantItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdImportantItem GetMd(const FString& InId) const;
    
};

