#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtStorySynopsis.h"
#include "MdMapTxtStorySynopsis.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtStorySynopsis : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtStorySynopsis> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtStorySynopsis Dummy;
    
    UMdMapTxtStorySynopsis();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtStorySynopsis GetMd(const FString& InId) const;
    
};

