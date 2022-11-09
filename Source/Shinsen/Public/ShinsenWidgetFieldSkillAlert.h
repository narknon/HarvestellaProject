#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ECharacterSkillNotAvaliableReason.h"
#include "ShinsenWidgetFieldSkillAlert.generated.h"

class UImage;
class UCanvasPanel;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetFieldSkillAlert : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* CanvasPanel_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_AlertTextWithIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_AlertTextNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispTime;
    
    UShinsenWidgetFieldSkillAlert();
    UFUNCTION(BlueprintCallable)
    void ShowAlert(ECharacterSkillNotAvaliableReason InType);
    
};

