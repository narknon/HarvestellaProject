#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtMapName.h"
#include "MdMapTxtMapName.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtMapName : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtMapName> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtMapName Dummy;
    
    UMdMapTxtMapName();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtMapName GetMd(const FString& InId) const;
    
};

