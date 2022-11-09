#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdKeyWinIconF.h"
#include "MdMapKeyWinIconF.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapKeyWinIconF : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdKeyWinIconF> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdKeyWinIconF Dummy;
    
    UMdMapKeyWinIconF();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdKeyWinIconF GetMd(const FString& InId) const;
    
};

