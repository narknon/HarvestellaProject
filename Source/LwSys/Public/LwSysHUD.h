#pragma once
#include "CoreMinimal.h"
#include "LwSysInterface_HUD.h"
#include "GameFramework/HUD.h"
#include "LwSysHUD.generated.h"

class ULwSysDebugScreenWidget;

UCLASS(Blueprintable, NonTransient)
class LWSYS_API ALwSysHUD : public AHUD, public ILwSysInterface_HUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ULwSysDebugScreenWidget> WidgetClassDebugScreenInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysDebugScreenWidget* WidgetDebugScreenInfo;
    
public:
    ALwSysHUD();
    
    /*UFUNCTION(BlueprintCallable, BlueprintCosmetic)*/
    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    
    
    // Fix for true pure virtual functions not being implemented
};

