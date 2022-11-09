#pragma once
#include "CoreMinimal.h"
#include "MdTxtAccessoryEffectType.h"
#include "UObject/Object.h"
#include "MdMapTxtAccessoryEffectType.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtAccessoryEffectType : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtAccessoryEffectType> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtAccessoryEffectType Dummy;
    
    UMdMapTxtAccessoryEffectType();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtAccessoryEffectType GetMd(const FString& InId) const;
    
};

