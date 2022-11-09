#pragma once
#include "CoreMinimal.h"
#include "Mes.generated.h"

USTRUCT(BlueprintType)
struct FMes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MesAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float wait;
    
    SHINSEN_API FMes();
};

