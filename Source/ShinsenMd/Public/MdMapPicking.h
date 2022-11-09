#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdPicking.h"
#include "MdMapPicking.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapPicking : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdPicking> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdPicking Dummy;
    
    UMdMapPicking();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdPicking GetMd(const FString& InId) const;
    
};

