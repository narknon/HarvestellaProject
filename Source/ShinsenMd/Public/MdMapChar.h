#pragma once
#include "CoreMinimal.h"
#include "MdChar.h"
#include "UObject/Object.h"
#include "MdMapChar.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapChar : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdChar> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdChar Dummy;
    
    UMdMapChar();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdChar GetMd(const FString& InId) const;
    
};

