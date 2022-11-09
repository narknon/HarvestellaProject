#pragma once
#include "CoreMinimal.h"
#include "ScriptParam.h"
#include "ScriptDecoderDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FScriptDecoder, const FScriptParam&, Param);

