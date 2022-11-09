#include "ShinsenEventMarker.h"
#include "Components/SceneComponent.h"

class USkeletalMesh;
class UAnimSequence;

void AShinsenEventMarker::SetOutlinerDisplayName(const FString& InName) {
}

void AShinsenEventMarker::CreatePreviewMesh(TSoftObjectPtr<USkeletalMesh> InSkeletalMesh, TSoftObjectPtr<UAnimSequence> InAnimSequence) {
}

AShinsenEventMarker::AShinsenEventMarker() {
    this->DefaultSeceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSeceneRoot"));
    this->IsUseFOV = false;
    this->FOV = 0.00f;
}

