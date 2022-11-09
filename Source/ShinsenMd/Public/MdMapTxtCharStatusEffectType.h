#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtCharStatusEffectType.h"
#include "MdMapTxtCharStatusEffectType.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtCharStatusEffectType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtCharStatusEffectType> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtCharStatusEffectType Dummy;
    
    UMdMapTxtCharStatusEffectType();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtCharStatusEffectType GetMd(const FString& InId) const;
    
};

