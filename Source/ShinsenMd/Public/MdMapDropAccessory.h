#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdDropAccessory.h"
#include "MdMapDropAccessory.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapDropAccessory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdDropAccessory> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdDropAccessory Dummy;
    
    UMdMapDropAccessory();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdDropAccessory GetMd(const FString& InId) const;
    
};

