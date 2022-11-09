#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtCharJob.h"
#include "MdMapTxtCharJob.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtCharJob : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtCharJob> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtCharJob Dummy;
    
    UMdMapTxtCharJob();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtCharJob GetMd(const FString& InId) const;
    
};

