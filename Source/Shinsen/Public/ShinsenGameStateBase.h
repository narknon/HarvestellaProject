#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ShinsenInterface_GameState.h"
#include "ShinsenFlags.h"
#include "ShinsenGameStateBase.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API AShinsenGameStateBase : public AGameStateBase, public IShinsenInterface_GameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GlobalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenFlags ShinsenFlags;
    
    AShinsenGameStateBase();
    
    // Fix for true pure virtual functions not being implemented
};

