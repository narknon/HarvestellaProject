#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdMemo.h"
#include "MdMapMemo.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapMemo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdMemo> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdMemo Dummy;
    
    UMdMapMemo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdMemo GetMd(const FString& InId) const;
    
};

