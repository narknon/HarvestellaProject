#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ShinsenDebugSkeletalMeshActorParam.generated.h"

class USkeletalMesh;
class UAnimationAsset;

USTRUCT(BlueprintType)
struct SHINSEN_API FShinsenDebugSkeletalMeshActorParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimationAsset> Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    FShinsenDebugSkeletalMeshActorParam();
};

