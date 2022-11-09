#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShinsenBTTask_SetOtherEnemyBlackboardValueRandomEnemyTypes.h"
#include "EShinsenBTTask_SetOtherEnemyBlackboardValueRandomValueTypes.h"
#include "ShinsenBTTask_SetOtherEnemyBlackboardValueRandom.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTTask_SetOtherEnemyBlackboardValueRandom : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ShinsenBTTask_SetOtherEnemyBlackboardValueRandomEnemyTypes EnemyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnemyPositionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTTask_SetOtherEnemyBlackboardValueRandomValueTypes ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueS32Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueS32Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueF32Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueF32Max;
    
    UShinsenBTTask_SetOtherEnemyBlackboardValueRandom();
};

