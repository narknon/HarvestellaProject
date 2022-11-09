#include "ShinsenCollisionAttackComponent.h"

class UPrimitiveComponent;
class AActor;

void UShinsenCollisionAttackComponent::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UShinsenCollisionAttackComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UShinsenCollisionAttackComponent::UShinsenCollisionAttackComponent() {
    this->CollisionProfileName = TEXT("PlayerAttack");
}

