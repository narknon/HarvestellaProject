#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtItemFlavor.h"
#include "MdMapTxtItemFlavor.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtItemFlavor : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtItemFlavor> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtItemFlavor Dummy;
    
    UMdMapTxtItemFlavor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtItemFlavor GetMd(const FString& InId) const;
    
};

