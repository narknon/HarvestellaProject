#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdRandomDungeon.h"
#include "MdMapRandomDungeon.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapRandomDungeon : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdRandomDungeon> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdRandomDungeon Dummy;
    
    UMdMapRandomDungeon();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdRandomDungeon GetMd(const FString& InId) const;
    
};

