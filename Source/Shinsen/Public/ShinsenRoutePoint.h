#pragma once
#include "CoreMinimal.h"
#include "ShinsenInterface_RoutePoint.h"
#include "GameFramework/Actor.h"
#include "ShinsenRoutePoint.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class SHINSEN_API AShinsenRoutePoint : public AActor, public IShinsenInterface_RoutePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderRadiusMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WanderRadiusMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* EditMarker;
    
    AShinsenRoutePoint();
    
    // Fix for true pure virtual functions not being implemented
};

