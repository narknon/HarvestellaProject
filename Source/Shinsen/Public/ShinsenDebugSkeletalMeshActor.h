#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "ShinsenDebugSkeletalMeshActorParam.h"
#include "ShinsenDebugSkeletalMeshActor.generated.h"

class APawn;
class AShinsenDebugSkeletalMeshActor;

UCLASS(Blueprintable)
class SHINSEN_API AShinsenDebugSkeletalMeshActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShinsenDebugSkeletalMeshActorParam Param;
    
    AShinsenDebugSkeletalMeshActor();
    UFUNCTION(BlueprintCallable)
    static AShinsenDebugSkeletalMeshActor* SpawnDebugSkeletalMeshActor(APawn* InPlayer, FShinsenDebugSkeletalMeshActorParam InParam);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyDebugSkeletalMeshActor();
    
};

