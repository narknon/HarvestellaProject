#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenEvent_MS0209.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenEvent_MS0209 : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bErasing;
    
    AShinsenEvent_MS0209();
};

