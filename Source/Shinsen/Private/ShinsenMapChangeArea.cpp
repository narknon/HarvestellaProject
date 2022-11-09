#include "ShinsenMapChangeArea.h"

class AActor;


void AShinsenMapChangeArea::PlayMapChangeSe() {
}

void AShinsenMapChangeArea::OnOverlapEnd_Implementation(AActor* OverlappedActor, AActor* OtherActor) {
}

void AShinsenMapChangeArea::OnOverlapBegin_Implementation(AActor* OverlappedActor, AActor* OtherActor) {
}

bool AShinsenMapChangeArea::IsExecutableQuestStep() const {
    return false;
}


void AShinsenMapChangeArea::GetNextMapNameText(FString& Text) const {
}

void AShinsenMapChangeArea::AdjustSplineTransform_Implementation() {
}

AShinsenMapChangeArea::AShinsenMapChangeArea() {
    this->bUseButton = false;
    this->Se = NULL;
    this->MiniMapSubID = -1;
    this->bHiddenMinimapIcon = false;
}

