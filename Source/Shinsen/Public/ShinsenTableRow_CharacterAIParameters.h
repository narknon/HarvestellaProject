#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ShinsenTableRow_CharacterAIParameters.generated.h"

USTRUCT(BlueprintType)
struct FShinsenTableRow_CharacterAIParameters : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkillIntervalMillisecond;
    
    SHINSEN_API FShinsenTableRow_CharacterAIParameters();
};

