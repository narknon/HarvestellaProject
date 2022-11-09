#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdMiniMap.h"
#include "MdMapMiniMap.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapMiniMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdMiniMap> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdMiniMap Dummy;
    
    UMdMapMiniMap();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdMiniMap GetMd(const FString& InId) const;
    
};

