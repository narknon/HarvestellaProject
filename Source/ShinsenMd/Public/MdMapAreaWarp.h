#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdAreaWarp.h"
#include "MdMapAreaWarp.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapAreaWarp : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdAreaWarp> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdAreaWarp Dummy;
    
    UMdMapAreaWarp();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdAreaWarp GetMd(const FString& InId) const;
    
};

