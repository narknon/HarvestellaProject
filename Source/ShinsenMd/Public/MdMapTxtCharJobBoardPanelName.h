#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtCharJobBoardPanelName.h"
#include "MdMapTxtCharJobBoardPanelName.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtCharJobBoardPanelName : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtCharJobBoardPanelName> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtCharJobBoardPanelName Dummy;
    
    UMdMapTxtCharJobBoardPanelName();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtCharJobBoardPanelName GetMd(const FString& InId) const;
    
};

