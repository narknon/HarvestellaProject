#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EFarmAction.h"
#include "ShinsenInterface_FarmFairyEffetct.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_FarmFairyEffetct : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_FarmFairyEffetct : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopFarmActionChargedFairy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartFarmActionChargedFairy(EFarmAction Action, bool isLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecFarmActionChargedFairy();
    
};

