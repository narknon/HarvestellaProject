#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdCharJobBoard.h"
#include "MdMapCharJobBoard.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharJobBoard : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharJobBoard> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharJobBoard Dummy;
    
    UMdMapCharJobBoard();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharJobBoard GetMd(const FString& InId) const;
    
};

