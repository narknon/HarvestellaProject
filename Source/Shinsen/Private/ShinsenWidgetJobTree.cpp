#include "ShinsenWidgetJobTree.h"

class UCanvasPanel;
class UShinsenWidgetJobTreeItem;

UCanvasPanel* UShinsenWidgetJobTree::GetStartIconParent(int32 inRank) {
    return NULL;
}

UShinsenWidgetJobTreeItem* UShinsenWidgetJobTree::GetStartIcon(const FString& InId) {
    return NULL;
}

TArray<UShinsenWidgetJobTreeItem*> UShinsenWidgetJobTree::GetPanels(int32 inRank) {
    return TArray<UShinsenWidgetJobTreeItem*>();
}

UCanvasPanel* UShinsenWidgetJobTree::GetPanelParent(int32 inRank) {
    return NULL;
}

UShinsenWidgetJobTreeItem* UShinsenWidgetJobTree::GetPanel(const FString& InId) {
    return NULL;
}

UShinsenWidgetJobTreeItem* UShinsenWidgetJobTree::GetLock(int32 inRank) {
    return NULL;
}

UCanvasPanel* UShinsenWidgetJobTree::GetLineParent(int32 inRank) {
    return NULL;
}

UShinsenWidgetJobTreeItem* UShinsenWidgetJobTree::GetLine(const FString& InId) {
    return NULL;
}

void UShinsenWidgetJobTree::ClearArrays() {
}

void UShinsenWidgetJobTree::AddJobTreeItem(UCanvasPanel* inPanelParent, UCanvasPanel* inLineParent, UCanvasPanel* inStartIconParent, UShinsenWidgetJobTreeItem* inLock) {
}

UShinsenWidgetJobTree::UShinsenWidgetJobTree() {
    this->JobType = ECharacterJobType::B00;
}

