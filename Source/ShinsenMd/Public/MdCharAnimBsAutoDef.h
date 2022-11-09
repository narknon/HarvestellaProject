#pragma once
#include "CoreMinimal.h"
#include "MdCharAnimBsAutoDef.generated.h"

USTRUCT(BlueprintType)
struct SHINSENMD_API FMdCharAnimBsAutoDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BsPath;
    
    FMdCharAnimBsAutoDef();
};

