#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtStoryTitle.h"
#include "MdMapTxtStoryTitle.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtStoryTitle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtStoryTitle> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtStoryTitle Dummy;
    
    UMdMapTxtStoryTitle();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtStoryTitle GetMd(const FString& InId) const;
    
};

