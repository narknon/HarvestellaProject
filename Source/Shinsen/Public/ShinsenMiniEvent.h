#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenInterface_MapObject.h"
#include "ShinsenInterface_MiniMap.h"
#include "ShinsenMiniEvent.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenMiniEvent : public AActor, public IShinsenInterface_MapObject, public IShinsenInterface_MiniMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisableFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubID;
    
    AShinsenMiniEvent();
    
    // Fix for true pure virtual functions not being implemented
};

