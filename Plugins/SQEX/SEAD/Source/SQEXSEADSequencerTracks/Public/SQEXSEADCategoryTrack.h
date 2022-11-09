#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNameableTrack.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "SQEXSEADCategoryTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class SQEXSEADSEQUENCERTRACKS_API USQEXSEADCategoryTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> CategorySections;
    
public:
    USQEXSEADCategoryTrack();
    
    // Fix for true pure virtual functions not being implemented

    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
};

