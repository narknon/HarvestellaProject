#pragma once
#include "CoreMinimal.h"
#include "MdKeyConfigMenu.h"
#include "UObject/Object.h"
#include "MdMapKeyConfigMenu.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapKeyConfigMenu : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdKeyConfigMenu> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdKeyConfigMenu Dummy;
    
    UMdMapKeyConfigMenu();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdKeyConfigMenu GetMd(const FString& InId) const;
    
};

