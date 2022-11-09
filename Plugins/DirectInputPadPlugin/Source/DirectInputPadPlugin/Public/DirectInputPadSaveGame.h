#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "DIPadKeyMaps.h"
#include "DirectInputPadSaveGame.generated.h"

UCLASS(Blueprintable)
class DIRECTINPUTPADPLUGIN_API UDirectInputPadSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDIPadKeyMaps> DIPadKeyMaps;
    
    UDirectInputPadSaveGame();
};

