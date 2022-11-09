#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharaLightParameter.h"
#include "ShinsenCharaLightIndex.generated.h"

USTRUCT(BlueprintType)
struct FShinsenCharaLightIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharaLightParameter Light1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharaLightParameter Light2;
    
    SHINSEN_API FShinsenCharaLightIndex();
};

