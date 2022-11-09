#pragma once
#include "CoreMinimal.h"
#include "ScriptMessageSizePerLine.h"
#include "ScriptTag.h"
#include "ScriptMessage.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FScriptMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MainArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RubyArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptTag> TagArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScriptMessageSizePerLine SizePerLine;
    
    FScriptMessage();
};

