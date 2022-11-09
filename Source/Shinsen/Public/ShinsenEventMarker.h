#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShinsenEventMarker.generated.h"

class UAnimSequence;
class USceneComponent;
class USkeletalMesh;

UCLASS(Blueprintable)
class SHINSEN_API AShinsenEventMarker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DefaultSeceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    AShinsenEventMarker();
    UFUNCTION(BlueprintCallable)
    void SetOutlinerDisplayName(const FString& InName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreatePreviewMesh(TSoftObjectPtr<USkeletalMesh> InSkeletalMesh, TSoftObjectPtr<UAnimSequence> InAnimSequence);
    
};

