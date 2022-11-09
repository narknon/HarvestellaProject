#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdSysFlags.h"
#include "MdMapSysFlags.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapSysFlags : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdSysFlags> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdSysFlags Dummy;
    
    UMdMapSysFlags();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdSysFlags GetMd(const FString& InId) const;
    
};

