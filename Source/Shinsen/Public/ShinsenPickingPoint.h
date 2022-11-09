#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenPickingPoint.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API AShinsenPickingPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PointID;
    
    AShinsenPickingPoint();
};

