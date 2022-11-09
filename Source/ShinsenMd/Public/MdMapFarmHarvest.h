#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdFarmHarvest.h"
#include "MdMapFarmHarvest.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapFarmHarvest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdFarmHarvest> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdFarmHarvest Dummy;
    
    UMdMapFarmHarvest();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdFarmHarvest GetMd(const FString& InId) const;
    
};

