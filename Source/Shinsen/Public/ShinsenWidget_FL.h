#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "ShinsenWidget_FL.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenWidget_FL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShinsenWidget_FL();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor White();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor Red();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor Green();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor Gray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTransitionTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTransitionSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture2D* GetKeyTexture(FKey Key, int32 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetKeyFontCode(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static FString ConvertTxtKeyCode(const FString& String);
    
};

