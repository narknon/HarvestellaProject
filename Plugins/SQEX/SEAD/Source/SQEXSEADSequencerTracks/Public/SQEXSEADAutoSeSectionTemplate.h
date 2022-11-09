#pragma once
#include "CoreMinimal.h"
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
};

