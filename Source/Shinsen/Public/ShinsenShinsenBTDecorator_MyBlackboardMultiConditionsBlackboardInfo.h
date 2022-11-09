#pragma once
#include "CoreMinimal.h"
#include "EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsValueTypes.h"
#include "EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsConditions.h"
#include "ShinsenShinsenBTDecorator_MyBlackboardMultiConditionsBlackboardInfo.generated.h"

USTRUCT(BlueprintType)
struct FShinsenShinsenBTDecorator_MyBlackboardMultiConditionsBlackboardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsValueTypes ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueS32;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueF32;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValueBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenShinsenBTDecorator_MyBlackboardMultiConditionsConditions Conditions;
    
    SHINSEN_API FShinsenShinsenBTDecorator_MyBlackboardMultiConditionsBlackboardInfo();
};

