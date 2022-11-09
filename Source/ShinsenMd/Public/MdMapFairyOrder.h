#pragma once
#include "CoreMinimal.h"
#include "MdFairyOrder.h"
#include "UObject/Object.h"
#include "MdMapFairyOrder.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapFairyOrder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdFairyOrder> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdFairyOrder Dummy;
    
    UMdMapFairyOrder();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdFairyOrder GetMd(const FString& InId) const;
    
};

