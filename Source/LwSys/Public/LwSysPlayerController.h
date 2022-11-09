#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LwSysInterface_PlayerController.h"
#include "LwSysPlayerController.generated.h"

class ULwSysInputAction;
class ULwSysInputAxis;

UCLASS(Blueprintable)
class LWSYS_API ALwSysPlayerController : public APlayerController, public ILwSysInterface_PlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMenuDecide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMenuCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMenuUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMenuDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMenuLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMenuRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMenuLT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMenuRT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMenuLB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMenuRB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAction* InputActionMenuPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAxis* InputAxisCharacterMoveForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULwSysInputAxis* InputAxisCharacterMoveRight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULwSysInputAction*> InputActionArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULwSysInputAxis*> InputAxisArray;
    
public:
    ALwSysPlayerController();
    
    // Fix for true pure virtual functions not being implemented
};

