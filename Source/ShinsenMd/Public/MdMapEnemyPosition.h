#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdEnemyPosition.h"
#include "MdMapEnemyPosition.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapEnemyPosition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdEnemyPosition> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdEnemyPosition Dummy;
    
    UMdMapEnemyPosition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdEnemyPosition GetMd(const FString& InId) const;
    
};

