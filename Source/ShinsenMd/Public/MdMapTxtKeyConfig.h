#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtKeyConfig.h"
#include "MdMapTxtKeyConfig.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtKeyConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtKeyConfig> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtKeyConfig Dummy;
    
    UMdMapTxtKeyConfig();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtKeyConfig GetMd(const FString& InId) const;
    
};

