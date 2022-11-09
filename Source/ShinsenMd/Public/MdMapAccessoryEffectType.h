#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdAccessoryEffectType.h"
#include "MdMapAccessoryEffectType.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapAccessoryEffectType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdAccessoryEffectType> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdAccessoryEffectType Dummy;
    
    UMdMapAccessoryEffectType();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdAccessoryEffectType GetMd(const FString& InId) const;
    
};

