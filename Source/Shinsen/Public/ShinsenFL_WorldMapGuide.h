#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShinsenFL_WorldMapGuide.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API UShinsenFL_WorldMapGuide : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UShinsenFL_WorldMapGuide();
    UFUNCTION(BlueprintCallable)
    static void UpdateWorldMapPetGuide(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    static void DispWorldMapGuideEnterArea(bool bDisp, bool bIsAirship);
    
    UFUNCTION(BlueprintCallable)
    static void DispWorldMapGuide(bool bDisp);
    
};

