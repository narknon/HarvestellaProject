#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShinsenFL_Save.generated.h"

class USaveGame;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenFL_Save : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShinsenFL_Save();
    UFUNCTION(BlueprintCallable)
    static bool SaveGameToSlot(USaveGame* SaveGameObject, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static USaveGame* LoadGameFromSlot(const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesSaveGameExist(const FString& SlotName, const int32 UserIndex);
    
};

