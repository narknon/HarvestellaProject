#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScheduleBehaviorRow.h"
#include "DataAssetScheduleBehavior.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UDataAssetScheduleBehavior : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FScheduleBehaviorRow> Data;
    
    UDataAssetScheduleBehavior();
    UFUNCTION(BlueprintCallable)
    void ImportAfterDatatableReimport();
    
    UFUNCTION(BlueprintCallable)
    void Import();
    
};

