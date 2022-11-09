#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtMemo.h"
#include "MdMapTxtMemo.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtMemo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtMemo> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtMemo Dummy;
    
    UMdMapTxtMemo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtMemo GetMd(const FString& InId) const;
    
};

