#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADCategoryTrack.h"
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

    FSQEXSEADCategorySectionTemplate(const USQEXSEADCategorySection& Section, const USQEXSEADCategoryTrack& Track);

    /*/** Template is copied after being created. We need to re-link property storage to property handler#1#
    FSQEXSEADAudioSectionTemplate(const FSQEXSEADAudioSectionTemplate& InOther);*/


    virtual ~FSQEXSEADCategorySectionTemplate() = default;
};

