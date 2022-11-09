#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdCharJob.h"
#include "MdMapCharJob.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharJob : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharJob> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharJob Dummy;
    
    UMdMapCharJob();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharJob GetMd(const FString& InId) const;
    
};

