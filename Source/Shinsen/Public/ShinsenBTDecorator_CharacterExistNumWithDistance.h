#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EShinsenBTDecorator_CharacterExistNumWithDistanceSearchType.h"
#include "EShinsenBTDecorator_CharacterExistNumWithDistanceConditions.h"
#include "ShinsenBTDecorator_CharacterExistNumWithDistance.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_CharacterExistNumWithDistance : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_CharacterExistNumWithDistanceSearchType SearchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_CharacterExistNumWithDistanceConditions NumConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_CharacterExistNumWithDistanceConditions DistanceConditions;
    
    UShinsenBTDecorator_CharacterExistNumWithDistance();
};

