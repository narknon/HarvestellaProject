#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdCharJobBoardPanel.h"
#include "MdMapCharJobBoardPanel.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharJobBoardPanel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharJobBoardPanel> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharJobBoardPanel Dummy;
    
    UMdMapCharJobBoardPanel();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharJobBoardPanel GetMd(const FString& InId) const;
    
};

