#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtQuestSynopsis.h"
#include "MdMapTxtQuestSynopsis.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtQuestSynopsis : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtQuestSynopsis> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtQuestSynopsis Dummy;
    
    UMdMapTxtQuestSynopsis();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtQuestSynopsis GetMd(const FString& InId) const;
    
};

