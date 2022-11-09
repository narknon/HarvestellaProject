#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTreasureBox.h"
#include "MdMapTreasureBox.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTreasureBox : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTreasureBox> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTreasureBox Dummy;
    
    UMdMapTreasureBox();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTreasureBox GetMd(const FString& InId) const;
    
};

