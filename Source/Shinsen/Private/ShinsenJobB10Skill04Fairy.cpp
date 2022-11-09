#include "ShinsenJobB10Skill04Fairy.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

AShinsenJobB10Skill04Fairy::AShinsenJobB10Skill04Fairy() {
    this->DefaultSeceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSeceneRoot"));
    this->SkeletalMeshRT = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshRT"));
    this->SkeletalMeshLT = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshLT"));
    this->SkeletalMeshRB = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshRB"));
    this->SkeletalMeshLB = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshLB"));
}

