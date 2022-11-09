#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTutorialBook.h"
#include "MdMapTutorialBook.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTutorialBook : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTutorialBook> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTutorialBook Dummy;
    
    UMdMapTutorialBook();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTutorialBook GetMd(const FString& InId) const;
    
};

