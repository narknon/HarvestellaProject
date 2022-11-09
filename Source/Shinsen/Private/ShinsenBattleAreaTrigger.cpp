#include "ShinsenBattleAreaTrigger.h"
#include "Components/SceneComponent.h"
#include "Components/TextRenderComponent.h"

class AActor;



FString AShinsenBattleAreaTrigger::GetEditorText() {
    return TEXT("");
}

void AShinsenBattleAreaTrigger::EndOverlap(AActor* InActor) {
}

void AShinsenBattleAreaTrigger::BeginOverlap(AActor* InActor) {
}

void AShinsenBattleAreaTrigger::AddId(const FString& InId) {
}

AShinsenBattleAreaTrigger::AShinsenBattleAreaTrigger() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->TextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Text"));
}

