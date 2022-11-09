#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_Bullet.generated.h"

class AShinsenBullet;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_Bullet : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AShinsenBullet> Bullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BattleSkillID;
    
    UShinsenBTTask_Bullet();
};

