#pragma once
#include "CoreMinimal.h"
#include "MdBreakTime.h"
#include "UObject/Object.h"
#include "MdMapBreakTime.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapBreakTime : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdBreakTime> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdBreakTime Dummy;
    
    UMdMapBreakTime();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdBreakTime GetMd(const FString& InId) const;
    
};

