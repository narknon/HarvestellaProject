#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdScheduleGroup.h"
#include "MdMapScheduleGroup.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapScheduleGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdScheduleGroup> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdScheduleGroup Dummy;
    
    UMdMapScheduleGroup();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdScheduleGroup GetMd(const FString& InId) const;
    
};

