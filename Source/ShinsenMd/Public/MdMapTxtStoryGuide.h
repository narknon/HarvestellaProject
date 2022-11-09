#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtStoryGuide.h"
#include "MdMapTxtStoryGuide.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtStoryGuide : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtStoryGuide> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtStoryGuide Dummy;
    
    UMdMapTxtStoryGuide();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtStoryGuide GetMd(const FString& InId) const;
    
};

