#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SQEXSEADCategorySectionTemplate.generated.h"

class USQEXSEADCategorySection;

USTRUCT(BlueprintType)
struct FSQEXSEADCategorySectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEXSEADCategorySection* CategorySection;
    
    SQEXSEADSEQUENCERTRACKS_API FSQEXSEADCategorySectionTemplate();
};

