#pragma once
#include "CoreMinimal.h"
#include "ShinsenFarm_MachineBase.h"
#include "ShinsenFarm_MachineSprinkler.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenFarm_MachineSprinkler : public AShinsenFarm_MachineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    AShinsenFarm_MachineSprinkler();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateAnimation(float Delta);
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
};

