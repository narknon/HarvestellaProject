#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTutorial.h"
#include "MdMapTutorial.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTutorial : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTutorial> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTutorial Dummy;
    
    UMdMapTutorial();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTutorial GetMd(const FString& InId) const;
    
};

