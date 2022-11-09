#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SQEXSEADAudioSectionTemplate.generated.h"

class USQEXSEADAudioSection;

USTRUCT(BlueprintType)
struct FSQEXSEADAudioSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADAudioSection* AudioSection;
    
    SQEXSEADSEQUENCERTRACKS_API FSQEXSEADAudioSectionTemplate();
};

