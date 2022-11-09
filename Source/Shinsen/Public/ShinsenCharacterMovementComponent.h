#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ShinsenCharacterMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHINSEN_API UShinsenCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSprintSpeed;
    
public:
    UShinsenCharacterMovementComponent();
    UFUNCTION(BlueprintCallable)
    void setJumpZVelocity(float InVelocity);
    
    UFUNCTION(BlueprintCallable)
    void setGravityScale(float InScale);
    
    UFUNCTION(BlueprintCallable)
    void resetMaxWalkSpeed();
    
    UFUNCTION(BlueprintCallable)
    void resetJumpZVelocity();
    
    UFUNCTION(BlueprintCallable)
    void resetGravityScale();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float getSaveMaxWalkSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float getSaveJumpZVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float getSaveGravityScale() const;
    
};

