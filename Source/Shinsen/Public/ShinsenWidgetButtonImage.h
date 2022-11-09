#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EKeySettings.h"
#include "ShinsenWidgetButtonImage.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetButtonImage : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeySettings SettingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ImageButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDispSubKey;
    
    UShinsenWidgetButtonImage();
    UFUNCTION(BlueprintCallable)
    void UpdateImage();
    
};

