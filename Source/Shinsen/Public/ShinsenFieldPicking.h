#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenInterface_MapObject.h"
#include "ShinsenInterface_FieldPicking.h"
#include "ShinsenInterface_MiniMap.h"
#include "EPickingType.h"
#include "MdPicking.h"
#include "ShinsenFieldPicking.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API AShinsenFieldPicking : public AActor, public IShinsenInterface_FieldPicking, public IShinsenInterface_MiniMap, public IShinsenInterface_MapObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PickingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdPicking MdPicking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPickingType PickingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DropLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DropGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DropNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDispMiniMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MiniMapSubID;
    
    AShinsenFieldPicking();
    
    // Fix for true pure virtual functions not being implemented
};

