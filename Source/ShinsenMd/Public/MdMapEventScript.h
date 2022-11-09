#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdEventScript.h"
#include "MdMapEventScript.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapEventScript : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdEventScript> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdEventScript Dummy;
    
    UMdMapEventScript();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdEventScript GetMd(const FString& InId) const;
    
};

