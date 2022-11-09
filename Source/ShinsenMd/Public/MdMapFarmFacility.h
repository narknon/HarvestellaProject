#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdFarmFacility.h"
#include "MdMapFarmFacility.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapFarmFacility : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdFarmFacility> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdFarmFacility Dummy;
    
    UMdMapFarmFacility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdFarmFacility GetMd(const FString& InId) const;
    
};

