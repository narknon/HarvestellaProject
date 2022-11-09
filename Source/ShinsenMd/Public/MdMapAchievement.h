#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdAchievement.h"
#include "MdMapAchievement.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapAchievement : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdAchievement> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdAchievement Dummy;
    
    UMdMapAchievement();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdAchievement GetMd(const FString& InId) const;
    
};

