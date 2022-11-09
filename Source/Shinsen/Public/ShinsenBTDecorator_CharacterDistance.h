#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EShinsenBTDecorator_CharacterDistanceConditions.h"
#include "EShinsenBTDecorator_CharacterDistanceSearchType.h"
#include "EShinsenBTDecorator_CharacterDistanceCheckType.h"
#include "ShinsenCharacterAIAttackType.h"
#include "ShinsenBTDecorator_CharacterDistance.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_CharacterDistance : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_CharacterDistanceSearchType SearchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnemyPositionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_CharacterDistanceCheckType CheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DistanceSkillID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenCharacterAIAttackType DistanceAttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_CharacterDistanceConditions DistanceConditions;
    
    UShinsenBTDecorator_CharacterDistance();
};

