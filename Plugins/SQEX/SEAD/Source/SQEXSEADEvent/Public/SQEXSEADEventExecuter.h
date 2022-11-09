#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADEventLabelData.h"
#include "UObject/Object.h"
#include "SQEXSEADEventExecuter.generated.h"

class USQEXSEADEventCallbackObject;

UCLASS(Blueprintable)
class USQEXSEADEventExecuter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADEventLabelData Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADEventCallbackObject* BeginEventCallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADEventCallbackObject* EndEventCallback;
    
public:
    USQEXSEADEventExecuter();
};

