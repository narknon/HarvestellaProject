#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdMapScript.h"
#include "MdMapMapScript.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapMapScript : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdMapScript> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdMapScript Dummy;
    
    UMdMapMapScript();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdMapScript GetMd(const FString& InId) const;
    
};

