#pragma once
#include "CoreMinimal.h"
#include "ShinsenInterface_Farm.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "CropGrowthData.h"
#include "ShinsenInterface_MapObject.h"
#include "EFarmKind.h"
#include "UObject/NoExportTypes.h"
#include "FarmFieldStatus.h"
#include "Item.h"
#include "ShinsenFarmBlock.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenFarmBlock : public AActor, public IShinsenInterface_Farm, public IShinsenInterface_MapObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFarmKind Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FarmLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpandLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCropGrowthData> CropGrowthWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFarmFieldStatus> FieldStatus;
    
    AShinsenFarmBlock();
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnSprinkler(FTransform Transform, const FString& UniqueId);
    
    UFUNCTION(BlueprintCallable)
    void SpawnProcessingMachine(FTransform Transform, const FString& UniqueId, const FString& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void SpawnObstacleRock(FTransform Transform, const FString& UniqueId, const FString& ItemId);
    
    UFUNCTION(BlueprintCallable)
    void SpawnFence(FTransform Transform, const FString& UniqueId, FIntPoint GridIndex);
    
    UFUNCTION(BlueprintCallable)
    FString GetSeedItemIDFromFarmID(const FString& FarmID);
    
    UFUNCTION(BlueprintCallable)
    FIntPoint GetLinkedGridTopIndex(const FString& LinkID);
    
    UFUNCTION(BlueprintCallable)
    void GetGridCoordinateDir(float Dir, float& LocalDir);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFarmLevelFromFlag();
    
    UFUNCTION(BlueprintCallable)
    int32 GetExpandLevelFromFlag();
    
    UFUNCTION(BlueprintCallable)
    void CopyLinkedBlockGrowthWork(FCropGrowthData Data);
    
    UFUNCTION(BlueprintCallable)
    bool CanHaveReturnedFacilityItem(const FString& MachineID, TArray<FItem>& Items);
    
    
    // Fix for true pure virtual functions not being implemented
};

