#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "DebugWork.h"
#include "OptionWork.h"
#include "ShinsenSaveGameSystem.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenSaveGameSystem : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugWork DebugWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptionWork OptionWork;
    
    UShinsenSaveGameSystem();
    UFUNCTION(BlueprintCallable)
    void SetDefaultValue();
    
};

