#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdItem.h"
#include "MdMapItem.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdItem> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdItem Dummy;
    
    UMdMapItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdItem GetMd(const FString& InId) const;
    
};

