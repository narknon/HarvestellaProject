#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EShinsenBTDecorator_CheckOtherEnemyBlackboardValueValueTypes.h"
#include "EShinsenBTDecorator_CheckOtherEnemyBlackboardValueEnemyTypes.h"
#include "EShinsenBTDecorator_CheckOtherEnemyBlackboardValueConditions.h"
#include "ShinsenBTDecorator_CheckOtherEnemyBlackboardValue.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_CheckOtherEnemyBlackboardValue : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_CheckOtherEnemyBlackboardValueEnemyTypes EnemyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnemyPositionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_CheckOtherEnemyBlackboardValueValueTypes ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueS32;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueF32;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValueBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_CheckOtherEnemyBlackboardValueConditions Conditions;
    
    UShinsenBTDecorator_CheckOtherEnemyBlackboardValue();
};

