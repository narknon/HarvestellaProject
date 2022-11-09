#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtRegionName.h"
#include "MdMapTxtRegionName.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtRegionName : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtRegionName> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtRegionName Dummy;
    
    UMdMapTxtRegionName();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtRegionName GetMd(const FString& InId) const;
    
};

