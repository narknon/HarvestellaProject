#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScriptMessageSizePerLine.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FScriptMessageSizePerLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsConfirmed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    FScriptMessageSizePerLine();
};

