#pragma once
#include "CoreMinimal.h"
#include "ShinsenWidgetBase.h"
#include "ECharacterJobType.h"
#include "ShinsenWidgetJobTree.generated.h"

class UShinsenWidgetJobTreeItem;
class UCanvasPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SHINSEN_API UShinsenWidgetJobTree : public UShinsenWidgetBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateJobBoard);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterJobType JobType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RootPanelID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShinsenWidgetJobTreeItem*> PanelArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShinsenWidgetJobTreeItem*> LineArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShinsenWidgetJobTreeItem*> StartIconArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UShinsenWidgetJobTreeItem*> LockArray;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateJobBoard OnUpdateJobBoard;
    
    UShinsenWidgetJobTree();
    UFUNCTION(BlueprintCallable)
    UCanvasPanel* GetStartIconParent(int32 inRank);
    
    UFUNCTION(BlueprintCallable)
    UShinsenWidgetJobTreeItem* GetStartIcon(const FString& InId);
    
    UFUNCTION(BlueprintCallable)
    TArray<UShinsenWidgetJobTreeItem*> GetPanels(int32 inRank);
    
    UFUNCTION(BlueprintCallable)
    UCanvasPanel* GetPanelParent(int32 inRank);
    
    UFUNCTION(BlueprintCallable)
    UShinsenWidgetJobTreeItem* GetPanel(const FString& InId);
    
    UFUNCTION(BlueprintCallable)
    UShinsenWidgetJobTreeItem* GetLock(int32 inRank);
    
    UFUNCTION(BlueprintCallable)
    UCanvasPanel* GetLineParent(int32 inRank);
    
    UFUNCTION(BlueprintCallable)
    UShinsenWidgetJobTreeItem* GetLine(const FString& InId);
    
    UFUNCTION(BlueprintCallable)
    void ClearArrays();
    
    UFUNCTION(BlueprintCallable)
    void AddJobTreeItem(UCanvasPanel* inPanelParent, UCanvasPanel* inLineParent, UCanvasPanel* inStartIconParent, UShinsenWidgetJobTreeItem* inLock);
    
};

