#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdMapGimmickRepair.h"
#include "MdMapMapGimmickRepair.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapMapGimmickRepair : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdMapGimmickRepair> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdMapGimmickRepair Dummy;
    
    UMdMapMapGimmickRepair();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdMapGimmickRepair GetMd(const FString& InId) const;
    
};

