#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtQuestGuide.h"
#include "MdMapTxtQuestGuide.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtQuestGuide : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtQuestGuide> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtQuestGuide Dummy;
    
    UMdMapTxtQuestGuide();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtQuestGuide GetMd(const FString& InId) const;
    
};

