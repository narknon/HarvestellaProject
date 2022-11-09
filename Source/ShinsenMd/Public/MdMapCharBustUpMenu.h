#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdCharBustUpMenu.h"
#include "MdMapCharBustUpMenu.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharBustUpMenu : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharBustUpMenu> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharBustUpMenu Dummy;
    
    UMdMapCharBustUpMenu();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharBustUpMenu GetMd(const FString& InId) const;
    
};

