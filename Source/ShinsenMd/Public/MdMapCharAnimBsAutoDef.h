#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdCharAnimBsAutoDef.h"
#include "MdMapCharAnimBsAutoDef.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharAnimBsAutoDef : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharAnimBsAutoDef> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharAnimBsAutoDef Dummy;
    
    UMdMapCharAnimBsAutoDef();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharAnimBsAutoDef GetMd(const FString& InId) const;
    
};

