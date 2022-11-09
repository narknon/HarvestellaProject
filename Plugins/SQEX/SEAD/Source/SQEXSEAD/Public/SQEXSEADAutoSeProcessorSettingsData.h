#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEADAutoSeProcessorSettingsData.generated.h"

class UAssetImportData;

UCLASS(Blueprintable, MinimalAPI)
class USQEXSEADAutoSeProcessorSettingsData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAssetImportData* AssetImportData;
    
    USQEXSEADAutoSeProcessorSettingsData();
};

