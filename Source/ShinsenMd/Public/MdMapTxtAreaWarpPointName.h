#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtAreaWarpPointName.h"
#include "MdMapTxtAreaWarpPointName.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtAreaWarpPointName : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtAreaWarpPointName> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtAreaWarpPointName Dummy;
    
    UMdMapTxtAreaWarpPointName();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtAreaWarpPointName GetMd(const FString& InId) const;
    
};

