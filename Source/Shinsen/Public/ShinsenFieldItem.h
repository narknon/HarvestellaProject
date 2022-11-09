#pragma once
#include "CoreMinimal.h"
#include "Accessory.h"
#include "GameFramework/Actor.h"
#include "ShinsenInterface_FieldItem.h"
#include "ShinsenFieldItem.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API AShinsenFieldItem : public AActor, public IShinsenInterface_FieldItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAccessory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccessory AccessoryParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlacedID;
    
    AShinsenFieldItem();
    
    // Fix for true pure virtual functions not being implemented
};

