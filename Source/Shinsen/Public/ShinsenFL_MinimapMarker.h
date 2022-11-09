#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMapIconType.h"
#include "ShinsenFL_MinimapMarker.generated.h"

class UObject;

UCLASS(Blueprintable)
class SHINSEN_API UShinsenFL_MinimapMarker : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShinsenFL_MinimapMarker();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMarkerAndTag(const FString& ID, bool bEnable, EMapIconType Type, FName Tag, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetMarker(const FString& ID, bool bEnable, EMapIconType Type, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FName> GetMarkerAssignedQuestIDs(const FString& ID, const UObject* WorldContextObject);
    
};

