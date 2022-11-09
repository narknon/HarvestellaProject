#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdTxtTutorial.h"
#include "MdMapTxtTutorial.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapTxtTutorial : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdTxtTutorial> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdTxtTutorial Dummy;
    
    UMdMapTxtTutorial();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdTxtTutorial GetMd(const FString& InId) const;
    
};

