#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MdDropTable.h"
#include "MdMapDropTable.generated.h"

UCLASS(Blueprintable)
class SHINSENMD_API UMdMapDropTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMdDropTable> MdMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMdDropTable Dummy;
    
    UMdMapDropTable();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMdDropTable GetMd(const FString& InId) const;
    
};

