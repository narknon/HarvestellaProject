#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdCharAnimAutoDef.h"
#include "MdMapCharAnimAutoDef.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharAnimAutoDef : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharAnimAutoDef> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharAnimAutoDef Dummy;
    
    UMdMapCharAnimAutoDef();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharAnimAutoDef GetMd(const FString& InId) const;
    
};

