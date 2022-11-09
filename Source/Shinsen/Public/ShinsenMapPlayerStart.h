#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "ShinsenMapPlayerStart.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API AShinsenMapPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighPriority;
    
    AShinsenMapPlayerStart();
};

