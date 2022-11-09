#pragma once
#include "CoreMinimal.h"
#include "CharacterGreetFlag.generated.h"

USTRUCT(BlueprintType)
struct FCharacterGreetFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMorning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMidday;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNight;
    
    SHINSEN_API FCharacterGreetFlag();
};

