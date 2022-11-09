#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdFarm.h"
#include "MdMapFarm.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapFarm : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdFarm> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdFarm Dummy;
    
    UMdMapFarm();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdFarm GetMd(const FString& InId) const;
    
};

