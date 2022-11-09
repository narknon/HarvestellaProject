#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdQuest.h"
#include "MdMapQuest.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapQuest : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdQuest> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdQuest Dummy;
    
    UMdMapQuest();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdQuest GetMd(const FString& InId) const;
    
};

