#pragma once
#include "CoreMinimal.h"
#include "LwSysHUD.h"
#include "ShinsenInterface_Schedule.h"
#include "ShinsenInterface_HUD.h"
#include "ShinsenHUD.generated.h"

class ULwSysDebugScreenWidget;
class AActor;

UCLASS(Blueprintable, NonTransient)
class SHINSEN_API AShinsenHUD : public ALwSysHUD, public IShinsenInterface_HUD, public IShinsenInterface_Schedule {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ULwSysDebugScreenWidget> WidgetClassDebugScreenMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysDebugScreenWidget* WidgetDebugScreenMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DebugSpawnedCharacters;
    
public:
    AShinsenHUD();
    UFUNCTION(BlueprintCallable)
    void inputPauseMenuUp();
    
    UFUNCTION(BlueprintCallable)
    void inputPauseMenuRight();
    
    UFUNCTION(BlueprintCallable)
    void inputPauseMenuLeft();
    
    UFUNCTION(BlueprintCallable)
    void inputPauseMenuDown();
    
    UFUNCTION(BlueprintCallable)
    void inputPauseMenuDecide();
    
    UFUNCTION(BlueprintCallable)
    void inputPauseMenuCancel();
    
    UFUNCTION(BlueprintCallable)
    void debugInputPauseMenuValueInit();
    
    UFUNCTION(BlueprintCallable)
    void debugInputPauseMenuValueFastR();
    
    UFUNCTION(BlueprintCallable)
    void debugInputPauseMenuValueFastL();
    
    UFUNCTION(BlueprintCallable)
    void debugInputPauseMenuShortcut1();
    
    UFUNCTION(BlueprintCallable)
    void debugInputPauseMenuPagePrev();
    
    UFUNCTION(BlueprintCallable)
    void debugInputPauseMenuPageNext();
    
    UFUNCTION(BlueprintCallable)
    void debugInputPauseMenuOn();
    
    
    // Fix for true pure virtual functions not being implemented
};

