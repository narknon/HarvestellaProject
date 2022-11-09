#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "ShinsenMapGimmick.h"
#include "EKarenoidWellType.h"
#include "ShinsenMapGimmickKarenoidWell.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenMapGimmickKarenoidWell : public AShinsenMapGimmick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChecked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKarenoidWellType WellType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NextMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EnemyGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItem WellItem;
    
    AShinsenMapGimmickKarenoidWell();
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnEnemyGroup();
    
    UFUNCTION(BlueprintCallable)
    void Setup();
    
};

