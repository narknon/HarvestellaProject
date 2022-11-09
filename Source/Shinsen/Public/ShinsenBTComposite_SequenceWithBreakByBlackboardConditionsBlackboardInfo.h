#pragma once
#include "CoreMinimal.h"
#include "EShinsenBTComposite_SequenceWithBreakByBlackboardConditionsValueTypes.h"
#include "EShinsenBTComposite_SequenceWithBreakByBlackboardConditionsConditions.h"
#include "ShinsenBTComposite_SequenceWithBreakByBlackboardConditionsBlackboardInfo.generated.h"

USTRUCT(BlueprintType)
struct FShinsenBTComposite_SequenceWithBreakByBlackboardConditionsBlackboardInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTComposite_SequenceWithBreakByBlackboardConditionsValueTypes ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueS32;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueF32;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ValueBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTComposite_SequenceWithBreakByBlackboardConditionsConditions Conditions;
    
    SHINSEN_API FShinsenBTComposite_SequenceWithBreakByBlackboardConditionsBlackboardInfo();
};

