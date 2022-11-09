#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenInterface_MapObject.h"
#include "ShinsenCoronelDoll.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API AShinsenCoronelDoll : public AActor, public IShinsenInterface_MapObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventId;
    
    AShinsenCoronelDoll();
    
    // Fix for true pure virtual functions not being implemented
};

