#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdCharParameter.h"
#include "MdMapCharParameter.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharParameter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharParameter> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharParameter Dummy;
    
    UMdMapCharParameter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharParameter GetMd(const FString& InId) const;
    
};

