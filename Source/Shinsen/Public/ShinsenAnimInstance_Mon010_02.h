#pragma once
#include "CoreMinimal.h"
#include "ShinsenAnimInstance.h"
#include "ShinsenAnimInstance_Mon010_02.generated.h"

class UShinsenAnimInstance_BasePose;

UCLASS(Blueprintable, NonTransient)
class SHINSEN_API UShinsenAnimInstance_Mon010_02 : public UShinsenAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendGroundToFlayPose;
    
    UShinsenAnimInstance_Mon010_02();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UShinsenAnimInstance_BasePose* GetAnimInstanceGroundPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UShinsenAnimInstance_BasePose* GetAnimInstanceFlyPose() const;
    
};

