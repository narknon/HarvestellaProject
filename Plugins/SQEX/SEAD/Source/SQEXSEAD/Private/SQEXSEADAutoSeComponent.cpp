#include "SQEXSEADAutoSeComponent.h"
#include "SQEXSEADAutoSeComponentCallbackDefault.h"

USQEXSEADAutoSeComponent::USQEXSEADAutoSeComponent() {
    this->AutoSeCallback = CreateDefaultSubobject<USQEXSEADAutoSeComponentCallbackDefault>(TEXT("SQEXSEADAutoSeComponentCallbackDefault0"));
    this->SettingData = NULL;
    this->ProcessorSettingsData = NULL;
    this->bFollowMeshVisibility = true;
    this->OverrideAttenuationAsset = NULL;
    this->CachedMeshReference = NULL;
    this->CachedMovementComponent = NULL;
}

