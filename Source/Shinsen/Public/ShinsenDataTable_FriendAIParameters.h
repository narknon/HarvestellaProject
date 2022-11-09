#pragma once
#include "CoreMinimal.h"
#include "ShinsenDataTable_CharacterAIParameters.h"
#include "ShinsenTableRow_FriendAIParameters.h"
#include "ShinsenDataTable_FriendAIParameters.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenDataTable_FriendAIParameters : public UShinsenDataTable_CharacterAIParameters {
    GENERATED_BODY()
public:
    UShinsenDataTable_FriendAIParameters();
    UFUNCTION(BlueprintCallable)
    TArray<FShinsenTableRow_FriendAIParameters> GetParametersFromCharacterID(const FString& CharacterID);
    
    UFUNCTION(BlueprintCallable)
    void GetParameterFromCharacterID(const FString& CharacterID, FShinsenTableRow_FriendAIParameters& AIParameters, bool& bFound);
    
};

