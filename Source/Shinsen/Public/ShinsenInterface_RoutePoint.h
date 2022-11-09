#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ShinsenInterface_RoutePoint.generated.h"

class USplineComponent;

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_RoutePoint : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_RoutePoint : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateEditMarker();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USplineComponent* GetSplineComponent();
    
};

