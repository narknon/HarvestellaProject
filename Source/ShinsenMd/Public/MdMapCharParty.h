#pragma once
#include "CoreMinimal.h"
#include "MdCharParty.h"
#include "UObject/Object.h"
#include "MdMapCharParty.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharParty : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharParty> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharParty Dummy;
    
    UMdMapCharParty();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharParty GetMd(const FString& InId) const;
    
};

