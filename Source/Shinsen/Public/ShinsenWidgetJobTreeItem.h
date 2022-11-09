#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "ECharacterJobType.h"
#include "ShinsenWidgetJobTreeItem.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetJobTreeItem : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterJobType JobType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JobTreeItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenedItem OnOpenedItem;
    
    UShinsenWidgetJobTreeItem();
};

