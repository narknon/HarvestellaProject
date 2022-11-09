#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ShinsenCharacterInitParam.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShinsenCharacterFL.generated.h"

class AShinsenCharacter;
class APawn;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenCharacterFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShinsenCharacterFL();
    UFUNCTION(BlueprintCallable)
    static AShinsenCharacter* SpawnPlayerFromClass(const FShinsenCharacterInitParam& Param, TSubclassOf<APawn> PawnClass);
    
    UFUNCTION(BlueprintCallable)
    static AShinsenCharacter* Spawn(const FShinsenCharacterInitParam& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLearnSpAttackPoint();
    
};

