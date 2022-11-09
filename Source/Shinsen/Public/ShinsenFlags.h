#pragma once
#include "CoreMinimal.h"
#include "ShinsenFlags.generated.h"

USTRUCT(BlueprintType)
struct FShinsenFlags {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlagMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlagMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlagNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FlagArrayNum;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> FlagArray;
    
public:
    SHINSEN_API FShinsenFlags();
};

