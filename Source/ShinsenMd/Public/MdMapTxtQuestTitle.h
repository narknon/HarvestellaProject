#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtQuestTitle.h"
#include "MdMapTxtQuestTitle.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtQuestTitle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtQuestTitle> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtQuestTitle Dummy;
    
    UMdMapTxtQuestTitle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtQuestTitle GetMd(const FString& InId) const;
    
};

