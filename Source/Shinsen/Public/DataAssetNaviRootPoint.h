#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NaviRootPointRow.h"
#include "DataAssetNaviRootPoint.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UDataAssetNaviRootPoint : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNaviRootPointRow> Data;
    
    UDataAssetNaviRootPoint();
    UFUNCTION(BlueprintCallable)
    void ImportAfterDatatableReimport();
    
    UFUNCTION(BlueprintCallable)
    void Import();
    
};

