#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "SQEXSEADCategoryEntry.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "SQEXSEADCategorySection.generated.h"

UCLASS(Blueprintable)
class SQEXSEADSEQUENCERTRACKS_API USQEXSEADCategorySection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSQEXSEADCategoryEntry Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel CategoryVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel CategoryPitch;
    
public:
    USQEXSEADCategorySection();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCategoryName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCategoryLayerName() const;
    
};

