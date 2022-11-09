#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdAreaWarpWorld.h"
#include "MdMapAreaWarpWorld.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapAreaWarpWorld : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdAreaWarpWorld> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdAreaWarpWorld Dummy;
    
    UMdMapAreaWarpWorld();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdAreaWarpWorld GetMd(const FString& InId) const;
    
};

