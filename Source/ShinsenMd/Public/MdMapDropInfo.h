#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdDropInfo.h"
#include "MdMapDropInfo.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapDropInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdDropInfo> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdDropInfo Dummy;
    
    UMdMapDropInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdDropInfo GetMd(const FString& InId) const;
    
};

