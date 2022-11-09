#pragma once
#include "CoreMinimal.h"
#include "EFarmFieldType.h"
#include "FarmFieldStatus.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FFarmFieldStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFarmFieldType Status;
    
    FFarmFieldStatus();
};

