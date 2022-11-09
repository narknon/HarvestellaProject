#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdDropAccessoryEffect.h"
#include "MdMapDropAccessoryEffect.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapDropAccessoryEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdDropAccessoryEffect> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdDropAccessoryEffect Dummy;
    
    UMdMapDropAccessoryEffect();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdDropAccessoryEffect GetMd(const FString& InId) const;
    
};

