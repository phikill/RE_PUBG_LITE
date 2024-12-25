// Copyright (c) 2006-2016 Audiokinetic Inc. / All Rights Reserved

#pragma once

#include "KeyframeTrackEditor.h"
#include "MovieSceneAkAudioRTPCTrack.h"
#include "MovieSceneAkAudioRTPCSection.h"


/**
 * Tools for AkAudioRTPC tracks
 */
class FMovieSceneAkAudioRTPCTrackEditor
	: public FKeyframeTrackEditor<UMovieSceneAkAudioRTPCTrack, UMovieSceneAkAudioRTPCSection, float>
{
public:

	/**
	* Constructor
	*
	* @param InSequencer	The sequencer instance to be used by this tool
	*/
	FMovieSceneAkAudioRTPCTrackEditor(TSharedRef<ISequencer> InSequencer);

	/**
	* Creates an instance of this class.  Called by a sequencer
	*
	* @param OwningSequencer The sequencer instance to be used by this tool
	* @return The new instance of this class
	*/
	static TSharedRef<ISequencerTrackEditor> CreateTrackEditor(TSharedRef<ISequencer> OwningSequencer);

public:

	// ISequencerTrackEditor interface

	virtual void BuildObjectBindingTrackMenu(FMenuBuilder& MenuBuilder, const FGuid& ObjectBinding, const UClass* ObjectClass) override;
	virtual void BuildAddTrackMenu(FMenuBuilder& MenuBuilder) override;

	virtual TSharedRef<ISequencerSection> MakeSectionInterface(UMovieSceneSection& SectionObject, UMovieSceneTrack& Track, FGuid ObjectBinding) override;

	virtual void BuildTrackContextMenu(FMenuBuilder& MenuBuilder, UMovieSceneTrack* Track) override;

	virtual const FSlateBrush* GetIconBrush() const override;

private:

	DECLARE_DELEGATE_RetVal_OneParam(UMovieSceneAkAudioRTPCTrack*, FCreateAkAudioRTPCTrack, UMovieScene*);

	void TryAddAkAudioRTPCTrack(FCreateAkAudioRTPCTrack DoCreateAkAudioRTPCTrack);
};
