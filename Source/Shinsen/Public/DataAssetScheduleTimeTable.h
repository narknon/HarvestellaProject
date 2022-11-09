#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScheduleTimeTableRow.h"
#include "DataAssetScheduleTimeTable.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UDataAssetScheduleTimeTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FScheduleTimeTableRow> Data;
    
    UDataAssetScheduleTimeTable();
    UFUNCTION(BlueprintCallable)
    void ImportAfterDatatableReimport();
    
    UFUNCTION(BlueprintCallable)
    void Import();
    
};

