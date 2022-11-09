#pragma once
#include "CoreMinimal.h"
#include "MdRegion.h"
#include "UObject/Object.h"
#include "MdMapRegion.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapRegion : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdRegion> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdRegion Dummy;
    
    UMdMapRegion();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdRegion GetMd(const FString& InId) const;
    
};

