#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdCharBustUp.h"
#include "MdMapCharBustUp.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharBustUp : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharBustUp> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharBustUp Dummy;
    
    UMdMapCharBustUp();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharBustUp GetMd(const FString& InId) const;
    
};

