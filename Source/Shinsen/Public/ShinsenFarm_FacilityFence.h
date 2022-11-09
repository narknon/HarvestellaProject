#pragma once
#include "CoreMinimal.h"
#include "ShinsenFarm_MachineBase.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenFarm_FacilityFence.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenFarm_FacilityFence : public AShinsenFarm_MachineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FenceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint GridIndex;
    
    AShinsenFarm_FacilityFence();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateConnectMesh();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void GetConnectTypeAndRotation(int32& Type, float& Rot);
    
};

