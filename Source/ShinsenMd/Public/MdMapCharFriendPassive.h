#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdCharFriendPassive.h"
#include "MdMapCharFriendPassive.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapCharFriendPassive : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdCharFriendPassive> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdCharFriendPassive Dummy;
    
    UMdMapCharFriendPassive();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdCharFriendPassive GetMd(const FString& InId) const;
    
};

