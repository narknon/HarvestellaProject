#pragma once
#include "CoreMinimal.h"
#include "ShinsenInterface_Farm.h"
#include "GameFramework/Actor.h"
#include "ShinsenInterface_MapObject.h"
#include "FarmProcessingMachine.h"
#include "ShinsenFarm_ProcessingMachine.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenFarm_ProcessingMachine : public AActor, public IShinsenInterface_MapObject, public IShinsenInterface_Farm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MachineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFarmProcessingMachine Work;
    
    AShinsenFarm_ProcessingMachine();
    
    // Fix for true pure virtual functions not being implemented
};

