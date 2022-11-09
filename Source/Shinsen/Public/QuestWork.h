#pragma once
#include "CoreMinimal.h"
#include "EQuestIDType.h"
#include "EQuestStepPhase.h"
#include "QuestStepFinishWork.h"
#include "QuestWork.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FQuestWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestIDType IDType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestStepPhase StepPhase;
    
    UPROPERTY(EditAnywhere)
    uint8 DelayDays;
    
    UPROPERTY(EditAnywhere)
    uint8 Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubStepBit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubStepCompleteBit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GuideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCharaWaitStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StepID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FQuestStepFinishWork> StepFinishWorkMap;
    
    FQuestWork();
};

