#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EShinsenBTDecorator_EnemyExistNumConditions.h"
#include "ShinsenBTDecorator_EnemyExistNum.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_EnemyExistNum : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_EnemyExistNumConditions Conditions;
    
    UShinsenBTDecorator_EnemyExistNum();
};

