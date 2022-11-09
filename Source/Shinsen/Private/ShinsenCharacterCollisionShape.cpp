#include "ShinsenCharacterCollisionShape.h"

FShinsenCharacterCollisionShape::FShinsenCharacterCollisionShape() {
    this->CollisionShape = ECharacterCollisionShape::Sphere;
    this->bIgnoreParentScale = false;
    this->Radius = 0.00f;
    this->HalfHeight = 0.00f;
}

