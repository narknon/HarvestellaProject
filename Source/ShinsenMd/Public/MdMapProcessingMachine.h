#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdProcessingMachine.h"
#include "MdMapProcessingMachine.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapProcessingMachine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdProcessingMachine> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdProcessingMachine Dummy;
    
    UMdMapProcessingMachine();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdProcessingMachine GetMd(const FString& InId) const;
    
};

