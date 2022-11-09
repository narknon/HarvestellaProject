#pragma once
#include "CoreMinimal.h"
#include "ShinsenInterface_Farm.h"
#include "GameFramework/Actor.h"
#include "ShinsenInterface_MapObject.h"
#include "ShinsenFarm_MachineBase.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenFarm_MachineBase : public AActor, public IShinsenInterface_MapObject, public IShinsenInterface_Farm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MachineID;
    
    AShinsenFarm_MachineBase();
    
    // Fix for true pure virtual functions not being implemented
};

