#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtReplaceSteam.h"
#include "MdMapTxtReplaceSteam.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtReplaceSteam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtReplaceSteam> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtReplaceSteam Dummy;
    
    UMdMapTxtReplaceSteam();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtReplaceSteam GetMd(const FString& InId) const;
    
};

