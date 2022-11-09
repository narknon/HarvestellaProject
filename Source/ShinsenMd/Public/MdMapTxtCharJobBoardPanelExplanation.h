#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtCharJobBoardPanelExplanation.h"
#include "MdMapTxtCharJobBoardPanelExplanation.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtCharJobBoardPanelExplanation : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtCharJobBoardPanelExplanation> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtCharJobBoardPanelExplanation Dummy;
    
    UMdMapTxtCharJobBoardPanelExplanation();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtCharJobBoardPanelExplanation GetMd(const FString& InId) const;
    
};

