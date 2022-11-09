#pragma once
#include "CoreMinimal.h"
#include "EffectAOERectangleEffectSpawnParam.h"
#include "EffectAOERectangleNiagara.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct SHINSEN_API FEffectAOERectangleNiagara {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* Niagara;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEffectAOERectangleEffectSpawnParam SpawnParam;
    
    FEffectAOERectangleNiagara();
};

