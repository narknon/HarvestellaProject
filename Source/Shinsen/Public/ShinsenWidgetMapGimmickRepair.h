#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "EMapGimmicType.h"
#include "ShinsenWidgetCreateSystemSaveWindow.h"
#include "ShinsenWidgetMapGimmickRepair.generated.h"



UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetMapGimmickRepair : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RepairID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapGimmicType Type;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndWidgetSignature OnEndWidget;
    
    UShinsenWidgetMapGimmickRepair();
};

