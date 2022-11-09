#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenMapGimmick.h"
#include "ShinsenMapGimmickLaserTrap.generated.h"

class USQEXSEADSoundBank;
class ASQEXSEADLayoutSound;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenMapGimmickLaserTrap : public AShinsenMapGimmick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SealControlTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LinkTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnemyGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ActiveEnemyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEXSEADLayoutSound* ChildSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundBank* LaserSoundBank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserSoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaserSoundAudibleRangeScale;
    
    AShinsenMapGimmickLaserTrap();
    UFUNCTION(BlueprintCallable)
    void UpdateChildLayoutSound(FVector BaseLocation, FVector PointOffset);
    
    UFUNCTION(BlueprintCallable)
    void StopLaserSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void SetChildLayoutSoundVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void PlayLaserSound(float LaserLength, USceneComponent* AttatchTo);
    
    UFUNCTION(BlueprintCallable)
    bool IsMonitoringEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HitPlayer();
    
    UFUNCTION(BlueprintCallable)
    void AddActiveEnemyGroup(const FString& NewEnemyGroup);
    
    UFUNCTION(BlueprintCallable)
    void ActiveEnemyGroup();
    
};

