#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdKeyConfigParam.h"
#include "MdMapKeyConfigParam.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapKeyConfigParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdKeyConfigParam> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdKeyConfigParam Dummy;
    
    UMdMapKeyConfigParam();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdKeyConfigParam GetMd(const FString& InId) const;
    
};

