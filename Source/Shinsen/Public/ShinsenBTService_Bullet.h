#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BehaviorTree/BTService.h"
#include "ShinsenBTService_Bullet.generated.h"

class AShinsenBullet;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTService_Bullet : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AShinsenBullet> Bullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BattleSkillID;
    
    UShinsenBTService_Bullet();
};

