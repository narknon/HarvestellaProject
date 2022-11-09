#pragma once
#include "CoreMinimal.h"
#include "MdItemTag.h"
#include "UObject/Object.h"
#include "MdMapItemTag.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapItemTag : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdItemTag> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdItemTag Dummy;
    
    UMdMapItemTag();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdItemTag GetMd(const FString& InId) const;
    
};

