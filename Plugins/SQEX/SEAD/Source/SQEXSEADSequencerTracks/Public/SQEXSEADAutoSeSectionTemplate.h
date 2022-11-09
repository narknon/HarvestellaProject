#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SQEXSEADAutoSeSectionTemplate.generated.h"

class USQEXSEADAutoSeSection;

USTRUCT(BlueprintType)
struct FSQEXSEADAutoSeSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADAutoSeSection* AutoSeSection;
    
    SQEXSEADSEQUENCERTRACKS_API FSQEXSEADAutoSeSectionTemplate();

    FSQEXSEADAutoSeSectionTemplate(const USQEXSEADAutoSeSection& Section, const USQEXSEADAutoSeTrack& Track);

    /*/** Template is copied after being created. We need to re-link property storage to property handler#1#
    FSQEXSEADAudioSectionTemplate(const FSQEXSEADAudioSectionTemplate& InOther);*/


    virtual ~FSQEXSEADAutoSeSectionTemplate() = default;
};

