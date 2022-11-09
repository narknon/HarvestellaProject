#include "SQEXSEADCategoryTrack.h"
#include "SQEXSEADCategorySection.h"
#include "SQEXSEADCategorySectionTemplate.h"

USQEXSEADCategoryTrack::USQEXSEADCategoryTrack() {
}



FMovieSceneEvalTemplatePtr USQEXSEADCategoryTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FSQEXSEADCategorySectionTemplate(*CastChecked<const USQEXSEADCategorySection>(&InSection), *this);
}