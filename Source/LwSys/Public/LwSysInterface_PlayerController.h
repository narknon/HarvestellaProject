#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LwSysInterface_PlayerController.generated.h"

class ULwSysInputAxis;
class ULwSysInputAction;

UINTERFACE(Blueprintable)
class LWSYS_API ULwSysInterface_PlayerController : public UInterface {
    GENERATED_BODY()
};

class LWSYS_API ILwSysInterface_PlayerController : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPauseOn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPauseOff();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAxis* GetInputAxisCharacterMoveRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAxis* GetInputAxisCharacterMoveForward() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMenuUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMenuRT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMenuRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMenuRB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMenuPause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMenuLT() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMenuLeft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMenuLB() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMenuDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMenuDecide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULwSysInputAction* GetInputActionMenuCancel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Dump(bool bSortActionMappings);
    
};

