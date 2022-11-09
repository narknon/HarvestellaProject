#pragma once
#include "CoreMinimal.h"
#include "EWeather.generated.h"

UENUM(BlueprintType)
enum class EWeather : uint8 {
    Sunny,
    Cloudy,
    Rainy,
    Max,
};

