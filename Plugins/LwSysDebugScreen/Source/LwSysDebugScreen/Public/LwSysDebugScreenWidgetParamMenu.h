#pragma once
#include "CoreMinimal.h"
#include "LwSysDebugScreenWidgetParamMenu.generated.h"

USTRUCT(BlueprintType)
struct LWSYSDEBUGSCREEN_API FLwSysDebugScreenWidgetParamMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMenu2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSeparate;
    
    FLwSysDebugScreenWidgetParamMenu();
};

