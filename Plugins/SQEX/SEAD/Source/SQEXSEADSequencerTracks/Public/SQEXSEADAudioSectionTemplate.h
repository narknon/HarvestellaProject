#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAudioSection.h"
#include "SQEXSEADAudioTrack.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SQEXSEADAudioSectionTemplate.generated.h"



USTRUCT(BlueprintType)
struct FSQEXSEADAudioSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    const USQEXSEADAudioSection* AudioSection;
    
    SQEXSEADSEQUENCERTRACKS_API FSQEXSEADAudioSectionTemplate();
    
    FSQEXSEADAudioSectionTemplate(const USQEXSEADAudioSection& Section, const USQEXSEADAudioTrack& Track);

    /*/** Template is copied after being created. We need to re-link property storage to property handler#1#
    FSQEXSEADAudioSectionTemplate(const FSQEXSEADAudioSectionTemplate& InOther);*/


    virtual ~FSQEXSEADAudioSectionTemplate() = default;
};

