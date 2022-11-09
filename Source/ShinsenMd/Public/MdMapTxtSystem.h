#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtSystem.h"
#include "MdMapTxtSystem.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtSystem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtSystem> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtSystem Dummy;
    
    UMdMapTxtSystem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtSystem GetMd(const FString& InId) const;
    
};

