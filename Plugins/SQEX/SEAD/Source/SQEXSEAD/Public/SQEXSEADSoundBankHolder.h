#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SQEXSEADSoundBankHolder.generated.h"

class USQEXSEADSoundBank;

UCLASS(Blueprintable, Transient)
class USQEXSEADSoundBankHolder : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USQEXSEADSoundBank*> LiveBanks;
    
public:
    USQEXSEADSoundBankHolder();
};

