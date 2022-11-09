#pragma once
#include "CoreMinimal.h"
#include "MdTxtAccessoryName.h"
#include "UObject/Object.h"
#include "MdMapTxtAccessoryName.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtAccessoryName : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtAccessoryName> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtAccessoryName Dummy;
    
    UMdMapTxtAccessoryName();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtAccessoryName GetMd(const FString& InId) const;
    
};

