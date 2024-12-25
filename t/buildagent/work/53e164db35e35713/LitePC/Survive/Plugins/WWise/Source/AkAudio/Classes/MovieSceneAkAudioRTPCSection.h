// Copyright (c) 2006-2016 Audiokinetic Inc. / All Rights Reserved

#pragma once

#include "AkInclude.h"
#include "AkAudioEvent.h"
#include "Curves/RichCurve.h"
#include "MovieSceneSection.h"
#include "IKeyframeSection.h"

#include "MovieSceneAkAudioRTPCSection.generated.h"

/**
* A single floating point section
*/
UCLASS(MinimalAPI)
class UMovieSceneAkAudioRTPCSection
	: public UMovieSceneSection
	, public IKeyframeSection<float>
{
	GENERATED_BODY()

public:
	/**
	* Updates this section
	*
	* @param Position	The position in time within the movie scene
	*/
	AKAUDIO_API virtual float Eval(float Position) const;

	/**
	* @return The float curve on this section
	*/
	FRichCurve& GetFloatCurve() { return FloatCurve; }
	const FRichCurve& GetFloatCurve() const { return FloatCurve; }

public:

	//~ IKeyframeSection interface

	AKAUDIO_API void AddKey(float Time, const float& Value, EMovieSceneKeyInterpolation KeyInterpolation) override;
	AKAUDIO_API bool NewKeyIsNewData(float Time, const float& Value) const override;
	AKAUDIO_API bool HasKeys(const float& Value) const override;
	AKAUDIO_API void SetDefault(const float& Value) override;
	AKAUDIO_API virtual void ClearDefaults() override;

public:

	//~ UMovieSceneSection interface

	AKAUDIO_API virtual void MoveSection(float DeltaPosition, TSet<FKeyHandle>& KeyHandles) override;
	AKAUDIO_API virtual void DilateSection(float DilationFactor, float Origin, TSet<FKeyHandle>& KeyHandles) override;
	AKAUDIO_API virtual void GetKeyHandles(TSet<FKeyHandle>& OutKeyHandles, TRange<float> TimeRange) const override;
	AKAUDIO_API virtual TOptional<float> GetKeyTime(FKeyHandle KeyHandle) const override;
	AKAUDIO_API virtual void SetKeyTime(FKeyHandle KeyHandle, float Time) override;
	AKAUDIO_API virtual FMovieSceneEvalTemplatePtr GenerateTemplate() const override;

	/** @return the name of the RTPC being modified by this track */
	const FString& GetRTPCName() const { return Name; }

	/**
	* Sets the name of the RTPC being modified by this track
	*
	* @param InRTPCName The RTPC being modified
	*/
	void SetRTPCName(const FString& InRTPCName) { Name = InRTPCName; }

#if WITH_EDITOR
	virtual void PreEditChange(UProperty* PropertyAboutToChange) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

protected:

	/** Name of the RTPC to modify. */
	UPROPERTY(EditAnywhere, Category = "AkAudioRTPC", meta = (NoResetToDefault))
	FString Name;

	/** Curve data */
	UPROPERTY()
	FRichCurve FloatCurve;

private:
#if WITH_EDITOR
	bool IsRTPCNameValid();

	FString PreviousName;
#endif
};
