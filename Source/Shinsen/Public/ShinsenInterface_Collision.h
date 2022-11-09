#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShinsenCharacterCollisionParam.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenInterface_Collision.generated.h"

class AShinsenCharacter;
class AActor;
class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_Collision : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_Collision : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MapHit(const FShinsenCharacterCollisionParam& InParam, AActor* InOtherActor, UPrimitiveComponent* InOtherComp, FVector InNormalImpulse, const FHitResult& InHit);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCollisionDefenseId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AShinsenCharacter* GetCollisionCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCollisionAttackId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DamageHit(const FShinsenCharacterCollisionParam& InParam, AActor* InAttacker);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AttackHit(const FShinsenCharacterCollisionParam& InParam, AActor* InDefender);
    
};

