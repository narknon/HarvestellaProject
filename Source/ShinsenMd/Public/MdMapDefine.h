#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdDefine.h"
#include "MdMapDefine.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapDefine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdDefine> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdDefine Dummy;
    
    UMdMapDefine();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdDefine GetMd(const FString& InId) const;
    
};

