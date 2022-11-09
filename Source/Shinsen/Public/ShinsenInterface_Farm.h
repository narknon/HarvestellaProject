#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EFarmAction.h"
#include "EFarmTargetMode.h"
#include "UObject/NoExportTypes.h"
#include "EFarmFieldType.h"
#include "EFarmFacilityType.h"
#include "Item.h"
#include "ShinsenInterface_Farm.generated.h"

class AActor;
class AShinsenCharacter;

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_Farm : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_Farm : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchPlayerRollLock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchCursorVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopSprinkle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartSprinkle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SprinkleAllBlocks();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SowSeedAllBlocks(int32 Pattern);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTargetMode(EFarmTargetMode Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlacingMode(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFieldVisible(bool bVisible, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetExpandLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorPos(FVector Pos, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorParam(FVector Pos, float Dir, int32 Type, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAutoCursorUpdate(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActionTargetMode(EFarmAction Action, EFarmTargetMode Mode, int32 ChargeLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetField();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetFarmFairy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlacingFacilityPreviewRotate(bool bRight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlacingMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInFarmActionArea(AShinsenCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InstallProcessingMachine(FVector Pos, float Dir, const FString& Type, bool& bSuccess, FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InstallFarmFacility(FVector Pos, float Dir, const FString& ItemId, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitLocalWork();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EFarmTargetMode GetTargetMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetPlayerRollLock(bool& bEnabed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetGridPos(FVector Pos, bool& bSuccess, FVector& GridPos);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetFieldType(FVector Pos, bool& bSuccess, EFarmFieldType& Status);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EFarmFacilityType GetFacilityType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetFacilityID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetFacilityActor(const FString& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetExpandLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCursorVisible(bool& bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCurrentBlockYaw(bool& Valid, float& Yaw);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceGrowth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecGrowth();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecFarmAction(EFarmAction Action, int32 ChargeLevel, FVector Pos, const FString& Param, bool& bSuccess, int32& SuccessNum, TArray<FItem>& Items, bool& bFailDestruct);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestructFacility(const FString& ID, bool& bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugRemoveAllFacility();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DebugPreviewCropMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CopyLocalWorkToGameWork();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CopyGameWorkToLocalWork();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CanSprinkle(FVector Pos, bool& bReturn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CanSow(FVector Pos, const FString& ItemId, bool& bReturn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CanPlow(FVector Pos, bool& bReturn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CanInstall(FVector Pos, const FString& ItemId, bool& bReturn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CanHarvest(FVector Pos, bool& bReturn, FString& ID, int32& Num);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CanDestruct(FVector Pos, bool& bReturn, bool bDispError);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ArableAllBlocks();
    
};

