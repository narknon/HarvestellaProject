#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdPlayerGenderResource.h"
#include "MdMapPlayerGenderResource.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapPlayerGenderResource : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdPlayerGenderResource> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdPlayerGenderResource Dummy;
    
    UMdMapPlayerGenderResource();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdPlayerGenderResource GetMd(const FString& InId) const;
    
};

