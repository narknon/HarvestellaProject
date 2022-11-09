#include "SQEXSEADAudioTrack.h"

#include "SQEXSEADAudioSectionTemplate.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "SQEXSEADAudioSection.h"


USQEXSEADAudioTrack::USQEXSEADAudioTrack() {
}


FMovieSceneEvalTemplatePtr USQEXSEADAudioTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FSQEXSEADAudioSectionTemplate(*CastChecked<const USQEXSEADAudioSection>(&InSection), *this);
}