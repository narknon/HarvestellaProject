#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShinsenSchedule_FL.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenSchedule_FL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShinsenSchedule_FL();
    UFUNCTION(BlueprintCallable)
    static void CreateProcess(const FString& Path, const FString& args);
    
};

