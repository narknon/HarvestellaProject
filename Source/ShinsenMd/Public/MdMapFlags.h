#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdFlags.h"
#include "MdMapFlags.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapFlags : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdFlags> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdFlags Dummy;
    
    UMdMapFlags();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdFlags GetMd(const FString& InId) const;
    
};

