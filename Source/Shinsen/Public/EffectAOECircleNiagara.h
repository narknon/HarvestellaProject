#pragma once
#include "CoreMinimal.h"
#include "EffectAOECircleEffectSpawnParam.h"
#include "EffectAOECircleNiagara.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct SHINSEN_API FEffectAOECircleNiagara {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Niagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectAOECircleEffectSpawnParam SpawnParam;
    
    FEffectAOECircleNiagara();
};

