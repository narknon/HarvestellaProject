#pragma once
#include "CoreMinimal.h"
#include "EScriptDataKind.h"
#include "ScriptParamData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SHINSEN_API FScriptParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScriptDataKind Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    FScriptParamData();
};

