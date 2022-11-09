#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdCharStatusEffectType.h"
#include "MdMapCharStatusEffectType.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharStatusEffectType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharStatusEffectType> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharStatusEffectType Dummy;
    
    UMdMapCharStatusEffectType();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharStatusEffectType GetMd(const FString& InId) const;
    
};

