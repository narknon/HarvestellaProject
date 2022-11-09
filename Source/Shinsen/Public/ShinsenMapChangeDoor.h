#pragma once
#include "CoreMinimal.h"
#include "ShinsenMapChangeArea.h"
#include "ShinsenInterface_MapObject.h"
#include "ShinsenMapChangeDoor.generated.h"

UCLASS(Blueprintable)
class SHINSEN_API AShinsenMapChangeDoor : public AShinsenMapChangeArea, public IShinsenInterface_MapObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionRadiusOfffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDispWidthLine;
    
public:
    AShinsenMapChangeDoor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAreaChange();
    
    
    // Fix for true pure virtual functions not being implemented
};

