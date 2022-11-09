#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnLwSysInputAxisDelegate.h"
#include "LwSysInputAxis.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class LWSYS_API ULwSysInputAxis : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLwSysInputAxis OnInputAxis_PressedFirst;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLwSysInputAxis OnInputAxis_Pressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLwSysInputAxis OnInputAxis_Released;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalValue;
    
    ULwSysInputAxis();
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

