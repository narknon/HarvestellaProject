#pragma once
#include "CoreMinimal.h"
#include "DIKeyMapInfo.h"
#include "DIPadKeyMaps.generated.h"

USTRUCT(BlueprintType)
struct FDIPadKeyMaps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDIKeyMapInfo> aMapInfo_;
    
    DIRECTINPUTPADPLUGIN_API FDIPadKeyMaps();
};

