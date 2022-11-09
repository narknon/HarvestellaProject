#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "EShinsenPlayerStatus.h"
#include "ShinsenPlayerState.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API AShinsenPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EShinsenPlayerStatus State;
    
    AShinsenPlayerState();
};

