#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdLetter.h"
#include "MdMapLetter.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapLetter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdLetter> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdLetter Dummy;
    
    UMdMapLetter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdLetter GetMd(const FString& InId) const;
    
};

