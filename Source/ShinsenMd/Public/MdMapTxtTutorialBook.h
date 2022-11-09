#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtTutorialBook.h"
#include "MdMapTxtTutorialBook.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtTutorialBook : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtTutorialBook> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtTutorialBook Dummy;
    
    UMdMapTxtTutorialBook();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtTutorialBook GetMd(const FString& InId) const;
    
};

