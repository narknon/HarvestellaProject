#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdMapCrop.h"
#include "MdMapMapCrop.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapMapCrop : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdMapCrop> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdMapCrop Dummy;
    
    UMdMapMapCrop();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdMapCrop GetMd(const FString& InId) const;
    
};

