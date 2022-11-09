#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdMap.h"
#include "MdMapMap.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdMap> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdMap Dummy;
    
    UMdMapMap();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdMap GetMd(const FString& InId) const;
    
};

