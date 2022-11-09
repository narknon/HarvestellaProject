#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADSurfaceNameTable.generated.h"

UCLASS(Blueprintable)
class SQEXSEADUTILS_API USQEXSEADSurfaceNameTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName names[63];
    
    USQEXSEADSurfaceNameTable();
};

