#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenWidgetBase.h"
#include "MiniMapIconInfo.h"
#include "UObject/NoExportTypes.h"
#include "EMapIconListKind.h"
#include "EMapIconType.h"
#include "MiniMapFearInfo.h"
#include "ShinsenWidgetMinimap.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetMinimap : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableUpdateOpenArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> OpenArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AreaMaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AreaMaskTextureCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AreaMaskLookupTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AreaCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> AreaMaskTextureArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AreaMaskWideTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* AreaMaskWideTextureCopy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AreaCenterWide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaSizeWide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> AreaMaskWideTextureArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMapIconListKind> DisplayIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EMapIconListKind> CurrentIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRotate;
    
    UShinsenWidgetMinimap();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTexture();
    
    UFUNCTION(BlueprintCallable)
    int32 UpdateOpenArea();
    
    UFUNCTION(BlueprintCallable)
    void SetMiniMapOpened(const FString& MinimapID);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEnableRotate(bool bEnable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNeedUpdateIconList() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsEnableRotate();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugDisp() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void InitAreaMask();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideOtherUI(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    bool GetMiniMapOpened(const FString& MinimapID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIconListKindText(EMapIconListKind Kind) const;
    
    UFUNCTION(BlueprintCallable)
    EMapIconListKind GetIconListKind(EMapIconType InType);
    
    UFUNCTION(BlueprintCallable)
    void GetFearInfo(int32 SubID, bool bOtherFloor, TArray<FMiniMapFearInfo>& Info);
    
    UFUNCTION(BlueprintCallable)
    void GetDispIconInfo(int32 SubID, bool bOtherFloor, TArray<FMiniMapIconInfo>& Info);
    
    UFUNCTION(BlueprintCallable)
    void GetAreaOpenFlagFromSave();
    
    UFUNCTION(BlueprintCallable)
    void CopyAreaMaskWideTextureToArray();
    
    UFUNCTION(BlueprintCallable)
    void CopyAreaMaskTextureToArray();
    
    UFUNCTION(BlueprintCallable)
    void ClearAreaMaskWideTextureArray();
    
    UFUNCTION(BlueprintCallable)
    void ClearAreaMaskTextureArray();
    
};

