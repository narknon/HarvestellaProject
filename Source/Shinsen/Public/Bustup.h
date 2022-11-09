#pragma once
#include "CoreMinimal.h"
#include "Bustup.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FBustup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* tex;
    
    SHINSEN_API FBustup();
};

