#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESQEXSEADLayoutType.h"
#include "SQEXSEADLayoutSound.generated.h"

class USQEXSEADLayoutSoundComponent;

UCLASS(Blueprintable, MinimalAPI)
class ASQEXSEADLayoutSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ESQEXSEADLayoutType::Type> LayoutType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADLayoutSoundComponent* LayoutSoundComponent;
    
    ASQEXSEADLayoutSound();
};

