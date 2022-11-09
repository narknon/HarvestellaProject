#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Item.h"
#include "ItemStructBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UItemStructBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UItemStructBlueprintFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void Sort(UPARAM(Ref) TArray<FItem>& ItemArray, int32 Mode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEmpty(UPARAM(Ref) FItem& Item);
    
};

