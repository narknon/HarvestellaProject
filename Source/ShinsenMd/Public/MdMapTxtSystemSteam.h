#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtSystemSteam.h"
#include "MdMapTxtSystemSteam.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtSystemSteam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtSystemSteam> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtSystemSteam Dummy;
    
    UMdMapTxtSystemSteam();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtSystemSteam GetMd(const FString& InId) const;
    
};

