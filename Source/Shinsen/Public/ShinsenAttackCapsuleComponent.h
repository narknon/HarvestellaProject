#pragma once
#include "CoreMinimal.h"
#include "ShinsenInterface_Collision.h"
#include "Components/CapsuleComponent.h"
#include "ShinsenAttackShapeWork.h"
#include "ShinsenAttackCapsuleComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenAttackCapsuleComponent : public UCapsuleComponent, public IShinsenInterface_Collision {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenAttackShapeWork AttackShapeWork;
    
    UShinsenAttackCapsuleComponent();
    
    // Fix for true pure virtual functions not being implemented
};

