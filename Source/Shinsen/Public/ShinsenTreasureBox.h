#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenInterface_MapObject.h"
#include "ShinsenInterface_MiniMap.h"
#include "MdTreasureBox.h"
#include "ShinsenTreasureBox.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenTreasureBox : public AActor, public IShinsenInterface_MapObject, public IShinsenInterface_MiniMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TreeasureBoxID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpened;
    
    AShinsenTreasureBox();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AddTreasureBoxItems(const FMdTreasureBox& MasterData);
    
    
    // Fix for true pure virtual functions not being implemented
};

