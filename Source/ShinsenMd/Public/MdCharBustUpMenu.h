#pragma once
#include "CoreMinimal.h"
#include "MdCharBustUpMenu.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdCharBustUpMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    FMdCharBustUpMenu();
};

