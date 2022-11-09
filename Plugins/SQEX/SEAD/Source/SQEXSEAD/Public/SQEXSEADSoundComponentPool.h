#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEADSoundComponentPool.generated.h"

class USQEXSEADSoundComponent;

UCLASS(Blueprintable, Transient)
class USQEXSEADSoundComponentPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USQEXSEADSoundComponent*> Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USQEXSEADSoundComponent*> FreeComponents;
    
public:
    USQEXSEADSoundComponentPool();
};

