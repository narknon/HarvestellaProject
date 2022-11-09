// Copyright 2020 Yijie Shi. All Rights Reserved.

#include "ParticleWidget.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Engine.h"
#include "UIParticleComponent.h"


DECLARE_CYCLE_STAT(TEXT("UIParticles Genreate Sprite Vertices GT"), STAT_UIParticles_Generate_Sprite_Vert_GT, STATGROUP_UIParticles);

#define LOCTEXT_NAMESPACE "UMG"

UParticleSystemWidget::UParticleSystemWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
    , bAutoActivate(true)
{
	WorldParticleActor = nullptr;
	WorldParticleComponent = nullptr;
}

void UParticleSystemWidget::InitParticleSystem()
{
	check(MyParticleWidget.IsValid());

	if (GetOuter())
	{
		UWorld* World = GEngine->GetWorldFromContextObject(GetOuter(), EGetWorldErrorMode::ReturnNull);

		if (World && World->PersistentLevel)
		{
			AUIParticleActor* Actor = World->SpawnActor<AUIParticleActor>();
			UUIParticleComponent* ParticleComponent = Actor->Emit();
			ParticleComponent->SetTemplate(ParticleSystemTemplate);
			WorldParticleComponent = ParticleComponent;
			WorldParticleActor = Actor;
			MyParticleWidget->ParticleInScene = static_cast<UUIParticleComponent*>(WorldParticleComponent);
            ParticleComponent->SetActivateState(bAutoActivate);
		}
	}
}

TSharedRef<SWidget> UParticleSystemWidget::RebuildWidget()
{
    MyParticleWidget =
        SNew(SParticle);

	InitParticleSystem();

    return MyParticleWidget.ToSharedRef();
}

void UParticleSystemWidget::SynchronizeProperties()
{
    auto OldTemplate = ParticleSystemTemplate;
    UWidget::SynchronizeProperties();
    if( MyParticleWidget.IsValid() )
    { 
        if (!WorldParticleActor || OldTemplate != ParticleSystemTemplate)
        {
			InitParticleSystem();
        }
        ActivateParticles(bAutoActivate, true);
    }
}

void UParticleSystemWidget::ActivateParticles(bool bEnableParticles, bool bReset)
{
    if (!WorldParticleComponent)
    {
        return;
    }

	check(IsValid(WorldParticleComponent) && WorldParticleComponent->IsValidLowLevel());
    if (bReset)
    {
        WorldParticleComponent->ResetParticles(true);
    }
    
    WorldParticleComponent->SetActivateState(bEnableParticles);

}

void UParticleSystemWidget::SetReactivate(bool bActivateAndReset)
{
    ActivateParticles(true,bActivateAndReset);
    bReactivate = bActivateAndReset;
}

void UParticleSystemWidget::ReleaseSlateResources(bool bReleaseChildren)
{
    MyParticleWidget.Reset();
    if (WorldParticleActor)
    {
        WorldParticleActor->Destroy();
    }
    Super::ReleaseSlateResources(bReleaseChildren);
}

#if WITH_EDITOR
void UParticleSystemWidget::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	FName PropertyName;
	if (PropertyChangedEvent.Property)
	{
		PropertyName = PropertyChangedEvent.Property->GetFName();
	}
}
const FText UParticleSystemWidget::GetPaletteCategory()
{
	return LOCTEXT("SpecialFX", "Special Effects");
}

#endif

void UParticleSystemWidget::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
}

UParticleSystemComponent* UParticleSystemWidget::GetParticleComponent() const
{
	return this->WorldParticleComponent;
}

#undef LOCTEXT_NAMESPACE
