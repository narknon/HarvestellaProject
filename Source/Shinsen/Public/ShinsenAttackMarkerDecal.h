#pragma once
#include "CoreMinimal.h"
#include "Engine/DecalActor.h"
#include "ShinsenAttackMakerSpawnParam.h"
#include "ShinsenAttackMarkerDecal.generated.h"

class AShinsenAttackMarkerDecal;
class AActor;

UCLASS(Blueprintable)
class SHINSEN_API AShinsenAttackMarkerDecal : public ADecalActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Parent;
    
    AShinsenAttackMarkerDecal();
    UFUNCTION(BlueprintCallable)
    static AShinsenAttackMarkerDecal* Spawn(AActor* InParent, float InLifeTime, const FShinsenAttackMakerSpawnParam& InSpawnParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AttackMarkerInitialize(const FShinsenAttackMakerSpawnParam& InSpawnParam);
    
};

