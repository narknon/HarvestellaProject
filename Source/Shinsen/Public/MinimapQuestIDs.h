#pragma once
#include "CoreMinimal.h"
#include "MinimapQuestIDs.generated.h"

USTRUCT(BlueprintType)
struct SHINSEN_API FMinimapQuestIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IDs;
    
    FMinimapQuestIDs();
};

