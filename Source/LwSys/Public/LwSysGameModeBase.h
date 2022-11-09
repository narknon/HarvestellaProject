#pragma once
#include "CoreMinimal.h"
#include "LwSysInterface_GameMode.h"
#include "GameFramework/GameModeBase.h"
#include "LwSysGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class LWSYS_API ALwSysGameModeBase : public AGameModeBase, public ILwSysInterface_GameMode {
    GENERATED_BODY()
public:
    ALwSysGameModeBase();
    UFUNCTION(BlueprintCallable, Exec)
    void LwSys_DumpPlayerControllerSortKey();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LwSys_DumpPlayerController();
    
    
    // Fix for true pure virtual functions not being implemented
};

