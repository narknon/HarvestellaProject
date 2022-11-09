#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "ShinsenInterface_FarmFairyEffetct.h"
#include "ShinsenFarmEffectFairyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenFarmEffectFairyComponent : public USkeletalMeshComponent, public IShinsenInterface_FarmFairyEffetct {
    GENERATED_BODY()
public:
    UShinsenFarmEffectFairyComponent();
    
    // Fix for true pure virtual functions not being implemented
};

