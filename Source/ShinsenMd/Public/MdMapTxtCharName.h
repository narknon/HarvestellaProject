#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtCharName.h"
#include "MdMapTxtCharName.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtCharName : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtCharName> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtCharName Dummy;
    
    UMdMapTxtCharName();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtCharName GetMd(const FString& InId) const;
    
};

