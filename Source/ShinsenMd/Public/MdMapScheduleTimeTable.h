#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdScheduleTimeTable.h"
#include "MdMapScheduleTimeTable.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapScheduleTimeTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdScheduleTimeTable> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdScheduleTimeTable Dummy;
    
    UMdMapScheduleTimeTable();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdScheduleTimeTable GetMd(const FString& InId) const;
    
};

