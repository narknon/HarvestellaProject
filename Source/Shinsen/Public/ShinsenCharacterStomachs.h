#pragma once
#include "CoreMinimal.h"
#include "ShinsenCharacterStomach.h"
#include "ShinsenCharacterStomachs.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenCharacterStomachs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShinsenCharacterStomach> Stomachs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RateS32;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateF32;
    
    FShinsenCharacterStomachs();
};

