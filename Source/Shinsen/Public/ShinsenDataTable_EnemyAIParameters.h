#pragma once
#include "CoreMinimal.h"
#include "ShinsenDataTable_CharacterAIParameters.h"
#include "ShinsenTableRow_EnemyAIParameters.h"
#include "ShinsenDataTable_EnemyAIParameters.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenDataTable_EnemyAIParameters : public UShinsenDataTable_CharacterAIParameters {
    GENERATED_BODY()
public:
    UShinsenDataTable_EnemyAIParameters();
    UFUNCTION(BlueprintCallable)
    TArray<FShinsenTableRow_EnemyAIParameters> GetParametersFromCharacterID(const FString& CharacterID, const FString& MapID);
    
    UFUNCTION(BlueprintCallable)
    void GetParameterFromCharacterID(const FString& CharacterID, const FString& MapID, FShinsenTableRow_EnemyAIParameters& EnemyAIParameters, bool& bFound);
    
};

