#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShinsenWidgetField3dGaugeChild.generated.h"

class UImage;
class UProgressBar;
class UTextBlock;
class AShinsenCharacter;
class UShinsenWidgetFieldStatusEffectIcons;
class UShinsenWidgetFieldWeakAttrIcons;

UCLASS(Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetField3dGaugeChild : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_Hp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_HpDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Frane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetFieldStatusEffectIcons* FieldEnemyStatusEffectIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShinsenWidgetFieldWeakAttrIcons* WBP_FieldWeakAttrIcons;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AShinsenCharacter* Character;
    
public:
    UShinsenWidgetField3dGaugeChild();
};

