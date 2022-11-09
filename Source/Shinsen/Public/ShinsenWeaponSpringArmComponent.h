#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpringArmComponent.h"
#include "ShinsenWeaponSpringArmComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenWeaponSpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
    UShinsenWeaponSpringArmComponent();
};

