#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdCharStatusEffect.h"
#include "MdMapCharStatusEffect.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharStatusEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharStatusEffect> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharStatusEffect Dummy;
    
    UMdMapCharStatusEffect();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharStatusEffect GetMd(const FString& InId) const;
    
};

