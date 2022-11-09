#pragma once
#include "CoreMinimal.h"
#include "ShinsenObject_CharacterAIParameters.h"
#include "ShinsenObject_AttackedCharacterInfo.h"
#include "ShinsenTableRow_FriendAIParameters.h"
#include "ShinsenObject_FriendAIParameters.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenObject_FriendAIParameters : public UShinsenObject_CharacterAIParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenTableRow_FriendAIParameters FriendAIParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenObject_AttackedCharacterInfo AttackedCharacter;
    
public:
    UShinsenObject_FriendAIParameters();
};

