#pragma once
#include "CoreMinimal.h"
#include "ShinsenObject_CharacterAIParameters.h"
#include "ShinsenObject_EnemyAIParameters.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenObject_EnemyAIParameters : public UShinsenObject_CharacterAIParameters {
    GENERATED_BODY()
public:
    UShinsenObject_EnemyAIParameters();
};

