#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdBgm.h"
#include "MdMapBgm.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapBgm : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdBgm> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdBgm Dummy;
    
    UMdMapBgm();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdBgm GetMd(const FString& InId) const;
    
};

