#include "SQEXSEADAutoSeTrack.h"

#include "SQEXSEADAutoSeSection.h"
#include "SQEXSEADAutoSeSectionTemplate.h"

USQEXSEADAutoSeTrack::USQEXSEADAutoSeTrack() {
}

FMovieSceneEvalTemplatePtr USQEXSEADAutoSeTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FSQEXSEADAutoSeSectionTemplate(*CastChecked<const USQEXSEADAutoSeSection>(&InSection), *this);
}