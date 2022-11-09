#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtLetter.h"
#include "MdMapTxtLetter.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtLetter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtLetter> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtLetter Dummy;
    
    UMdMapTxtLetter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtLetter GetMd(const FString& InId) const;
    
};

