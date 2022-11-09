#pragma once
#include "CoreMinimal.h"
#include "ECharacterDamageKind.h"
#include "BehaviorTree/BTDecorator.h"
#include "EShinsenBTDecorator_CharacterDamageTypeSearchType.h"
#include "ShinsenBTDecorator_CharacterDamageType.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenBTDecorator_CharacterDamageType : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShinsenBTDecorator_CharacterDamageTypeSearchType SearchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnemyPositionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterDamageKind DamageType;
    
    UShinsenBTDecorator_CharacterDamageType();
};

