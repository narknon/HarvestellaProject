#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdEventBg.h"
#include "MdMapEventBg.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapEventBg : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdEventBg> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdEventBg Dummy;
    
    UMdMapEventBg();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdEventBg GetMd(const FString& InId) const;
    
};

