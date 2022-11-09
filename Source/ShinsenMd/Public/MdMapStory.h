#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdStory.h"
#include "MdMapStory.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapStory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdStory> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdStory Dummy;
    
    UMdMapStory();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdStory GetMd(const FString& InId) const;
    
};

