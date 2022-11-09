#pragma once
#include "CoreMinimal.h"
#include "ShinsenInterface_Farm.h"
#include "GameFramework/Actor.h"
#include "EFarmKind.h"
#include "ShinsenFarm.generated.h"

class AShinsenFarmBlock;

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenFarm : public AActor, public IShinsenInterface_Farm {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFarmKind, AShinsenFarmBlock*> FarmBlocks;
    
    AShinsenFarm();
    
    // Fix for true pure virtual functions not being implemented
};

