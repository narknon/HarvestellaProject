#pragma once
#include "CoreMinimal.h"
#include "EOptionItemType.generated.h"

UENUM(BlueprintType)
enum class EOptionItemType : uint8 {
    LANG_TEXT,
    LANG_VOICE,
    SOUND_VOL_MAIN,
    SOUND_VOL_BGM,
    SOUND_VOL_SE,
    SOUND_VOL_VOICE,
    CAMERA_CONTROL_V,
    CAMERA_CONTROL_H,
    CAMERA_ROT_SPEED_V,
    CAMERA_ROT_SPEED_H,
    VIBRATION_ENABLE,
    MINIMAP_ROT,
    WINDOW_MODE,
    DISPLAY_RESOLUTION,
    VSYNC,
    BRIGHTNESS,
    RENDER_RESOLUTION,
    QUALITY,
    ANTI_ALIAS,
    SHADOW,
    TEXTURE,
    FPS_LIMIT,
    TOGGLE_DECIDE,
};

