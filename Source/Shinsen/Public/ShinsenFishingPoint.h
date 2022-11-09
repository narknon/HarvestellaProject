#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenInterface_MiniMap.h"
#include "ShinsenInterface_Fishing.h"
#include "ShinsenInterface_MapObject.h"
#include "ShinsenFishingPoint.generated.h"

class UShinsenWidgetBase;

UCLASS(Blueprintable)
class SHINSEN_API AShinsenFishingPoint : public AActor, public IShinsenInterface_Fishing, public IShinsenInterface_MapObject, public IShinsenInterface_MiniMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PointID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiniMapSubID;
    
    AShinsenFishingPoint();
    UFUNCTION(BlueprintCallable)
    void SetupFishingFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugFishing() const;
    
    UFUNCTION(BlueprintCallable)
    UShinsenWidgetBase* CreateResultWidget(const FString& FishID, int32 Size, bool bDisableFising);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFishingTime() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

