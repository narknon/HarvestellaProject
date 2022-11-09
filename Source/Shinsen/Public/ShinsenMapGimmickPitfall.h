#pragma once
#include "CoreMinimal.h"
#include "ShinsenMapGimmick.h"
#include "ShinsenMapGimmickPitfall.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenMapGimmickPitfall : public AShinsenMapGimmick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FallFlagName;
    
    AShinsenMapGimmickPitfall();
};

