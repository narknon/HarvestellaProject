#pragma once
#include "CoreMinimal.h"
#include "ShinsenGameWork.h"
#include "GameFramework/SaveGame.h"
#include "ShinsenFlags.h"
#include "ShinsenSaveGameGame.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenSaveGameGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenFlags ShinsenFlagsWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenGameWork GameWork;
    
    UShinsenSaveGameGame();
    UFUNCTION(BlueprintCallable)
    void SetDefaultValue();
    
};

