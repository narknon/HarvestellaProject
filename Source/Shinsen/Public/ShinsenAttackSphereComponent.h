#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "ShinsenInterface_Collision.h"
#include "ShinsenAttackShapeWork.h"
#include "ShinsenAttackSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenAttackSphereComponent : public USphereComponent, public IShinsenInterface_Collision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenAttackShapeWork AttackShapeWork;
    
    UShinsenAttackSphereComponent();
    
    // Fix for true pure virtual functions not being implemented
};

