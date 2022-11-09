#pragma once
#include "CoreMinimal.h"
#include "ShinsenMapGimmick.h"
#include "ShinsenMapGimmickAutomaticDoor.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenMapGimmickAutomaticDoor : public AShinsenMapGimmick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FoundFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnlockFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepaired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RepairedFlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LockControlTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SealControlTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSealed;
    
    AShinsenMapGimmickAutomaticDoor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnsealDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnlockDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSealDoor(bool bSeal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLockDoor(bool bLock);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SealDoor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LockDoor();
    
};

