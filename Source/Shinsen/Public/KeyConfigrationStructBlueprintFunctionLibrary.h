#pragma once
#include "CoreMinimal.h"
#include "KeyConfigration.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KeyConfigrationStructBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UKeyConfigrationStructBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKeyConfigrationStructBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareArray(const TArray<FKeyConfigration>& A, const TArray<FKeyConfigration>& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Compare(FKeyConfigration A, FKeyConfigration B);
    
};

