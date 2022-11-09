#pragma once
#include "CoreMinimal.h"
#include "EMapIconType.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenInterface_MiniMap.generated.h"

UINTERFACE(Blueprintable)
class SHINSEN_API UShinsenInterface_MiniMap : public UInterface {
    GENERATED_BODY()
};

class SHINSEN_API IShinsenInterface_MiniMap : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMiniMapSubID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMiniMapIconInfo(EMapIconType& IconType, FTransform& Transform, int32& SubID, FName& QuestID);
    
};

