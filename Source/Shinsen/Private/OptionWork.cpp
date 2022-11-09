#include "OptionWork.h"

FOptionWork::FOptionWork() {
    this->SoundVolumeMaster = 0;
    this->SoundVolumeBgm = 0;
    this->SoundVolumeSe = 0;
    this->SoundVolumeVoice = 0;
    this->bEnableVibration = false;
    this->bCameraReverseV = false;
    this->bCameraReverseH = false;
    this->CameraRotSpeedLevelV = 0;
    this->CameraRotSpeedLevelH = 0;
    this->LanguageText = ELanguage::ja;
    this->LanguageVoice = ELanguage::ja;
    this->bClockDisplay12H = false;
    this->bEnableMinimapRotate = false;
    this->bToggleDecideButton = false;
    this->WindowType = EAppWindowType::Window;
    this->Resolution = EResolution::Size1280x720;
    this->bVSyncEnable = false;
    this->Brightness = 0;
    this->RenderingResolution = ERenderingResolution::Low;
    this->AntiAlias = EAntiAlias::Off;
    this->FpsLimit = EFpsLimit::Limit30;
}

