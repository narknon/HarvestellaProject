#pragma once
#include "CoreMinimal.h"
#include "MdMapObj.h"
#include "UObject/Object.h"
#include "MdMapMapObj.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapMapObj : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdMapObj> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdMapObj Dummy;
    
    UMdMapMapObj();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdMapObj GetMd(const FString& InId) const;
    
};

