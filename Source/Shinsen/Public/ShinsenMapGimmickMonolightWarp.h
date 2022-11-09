#pragma once
#include "CoreMinimal.h"
#include "ShinsenMapGimmick.h"
#include "MdAreaWarp.h"
#include "UObject/NoExportTypes.h"
#include "ShinsenMapGimmickMonolightWarp.generated.h"

UCLASS(Abstract, Blueprintable)
class SHINSEN_API AShinsenMapGimmickMonolightWarp : public AShinsenMapGimmick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActive;
    
    AShinsenMapGimmickMonolightWarp();
    UFUNCTION(BlueprintCallable)
    static void GetAvailablePoints(const FString& currentPointID, TArray<FMdAreaWarp>& Points);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetAppearPoint(FTransform& Transform);
    
};

