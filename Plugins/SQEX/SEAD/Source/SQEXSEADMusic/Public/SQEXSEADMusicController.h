#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEADMusicLabelData.h"
#include "SQEXSEADMusicController.generated.h"

class USQEXSEADMusicLayer;

UCLASS(Blueprintable)
class SQEXSEADMUSIC_API USQEXSEADMusicController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USQEXSEADMusicLayer*> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USQEXSEADMusicLayer*> LayerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSQEXSEADMusicLabelData> LabelMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADMusicLayer* ActiveLayer;
    
public:
    USQEXSEADMusicController();
};

