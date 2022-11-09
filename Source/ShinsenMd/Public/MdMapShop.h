#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdShop.h"
#include "MdMapShop.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapShop : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdShop> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdShop Dummy;
    
    UMdMapShop();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdShop GetMd(const FString& InId) const;
    
};

