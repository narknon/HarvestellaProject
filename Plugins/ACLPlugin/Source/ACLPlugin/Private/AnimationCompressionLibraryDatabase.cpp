#include "AnimationCompressionLibraryDatabase.h"

class UObject;
class UAnimationCompressionLibraryDatabase;

void UAnimationCompressionLibraryDatabase::SetVisualFidelity(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UAnimationCompressionLibraryDatabase* DatabaseAsset, ACLVisualFidelityChangeResult& Result, ACLVisualFidelity VisualFidelity) {
}

ACLVisualFidelity UAnimationCompressionLibraryDatabase::GetVisualFidelity(UAnimationCompressionLibraryDatabase* DatabaseAsset) {
    return ACLVisualFidelity::Highest;
}

UAnimationCompressionLibraryDatabase::UAnimationCompressionLibraryDatabase() {
    this->MaxStreamRequestSizeKB = 1024;
}

