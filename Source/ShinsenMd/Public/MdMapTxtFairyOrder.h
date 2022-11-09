#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtFairyOrder.h"
#include "MdMapTxtFairyOrder.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtFairyOrder : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtFairyOrder> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtFairyOrder Dummy;
    
    UMdMapTxtFairyOrder();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtFairyOrder GetMd(const FString& InId) const;
    
};

