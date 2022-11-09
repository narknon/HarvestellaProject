#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtItemName.h"
#include "MdMapTxtItemName.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtItemName : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtItemName> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtItemName Dummy;
    
    UMdMapTxtItemName();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtItemName GetMd(const FString& InId) const;
    
};

