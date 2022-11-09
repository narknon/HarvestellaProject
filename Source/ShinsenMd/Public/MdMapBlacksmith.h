#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdBlacksmith.h"
#include "MdMapBlacksmith.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapBlacksmith : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdBlacksmith> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdBlacksmith Dummy;
    
    UMdMapBlacksmith();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdBlacksmith GetMd(const FString& InId) const;
    
};

