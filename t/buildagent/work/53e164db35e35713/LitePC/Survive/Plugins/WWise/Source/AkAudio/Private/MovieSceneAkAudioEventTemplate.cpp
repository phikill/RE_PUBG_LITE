#include "AkAudioDevice.h"
#include "AkAudioClasses.h"

#include "MovieSceneAkAudioEventTemplate.h"
#include "MovieSceneAkAudioEventSection.h"

#include "MovieSceneExecutionToken.h"
#include "IMovieScenePlayer.h"

#if WITH_EDITOR
#include "UnrealEd.h"
#endif

struct FMovieSceneAkAudioEventSectionData
{
	FMovieSceneAkAudioEventSectionData(const UMovieSceneAkAudioEventSection& InSection)
		: EventName(InSection.GetEventName())
		, StartTime(InSection.GetStartTime())
		, StopAtSectionEnd(InSection.GetStopAtSectionEnd())
	{}

	void Update(const FMovieSceneContext& Context, const FMovieSceneEvaluationOperand& Operand, IMovieScenePlayer& Player, FAkAudioDevice* AudioDevice)
	{
		ensure(AudioDevice != nullptr);

		switch (Player.GetPlaybackStatus())
		{
		case EMovieScenePlayerStatus::Stopped:
			StopAllPlayingIDs(AudioDevice);
			break;

		case EMovieScenePlayerStatus::Playing:
			if (Context.GetDirection() == EPlayDirection::Forwards && !IsPlaying() && Context.GetTime() > StartTime && Context.GetPreviousTime() <= StartTime)
			{
				if (Operand.ObjectBindingID.IsValid())
				{	// Object binding audio track
					for (auto ObjectPtr : Player.FindBoundObjects(Operand))
					{
						auto Object = ObjectPtr.Get();
						auto PlayingID = PostEvent(Object, AudioDevice);
						TryAddPlayingID(PlayingID);
					}
				}
				else
				{	// Master audio track
					AActor* DummyActor = nullptr;
					auto PlayingID = AudioDevice->PostEvent(EventName, DummyActor);
					TryAddPlayingID(PlayingID);
				}
			}
			break;
		}
	}

	void StopAllPlayingIDs(FAkAudioDevice* AudioDevice)
	{
		if (AudioDevice)
		{
			for (auto PlayingID : PlayingIDs)
				AudioDevice->StopPlayingID(PlayingID);
		}
		PlayingIDs.Empty();
	}

	bool GetStopAtSectionEnd() const { return StopAtSectionEnd; }

private:
	AkPlayingID PostEvent(UObject* Object, FAkAudioDevice* AudioDevice)
	{
		ensure(AudioDevice != nullptr);

		if (Object)
		{
			auto AkComponent = Cast<UAkComponent>(Object);

			if (!IsValid(AkComponent))
			{
				auto Actor = CastChecked<AActor>(Object);
				if (IsValid(Actor))
					AkComponent = AudioDevice->GetAkComponent(Actor->GetRootComponent(), FName(), NULL, EAttachLocation::KeepRelativeOffset);
			}

			if (IsValid(AkComponent))
				return AkComponent->PostAkEventByName(EventName);
		}

		return AK_INVALID_PLAYING_ID;
	}

	void TryAddPlayingID(const AkPlayingID& PlayingID)
	{
		if (PlayingID != AK_INVALID_PLAYING_ID)
			PlayingIDs.Add(PlayingID);
	}

	bool IsPlaying() const { return PlayingIDs.Num() > 0; }

	FString EventName;
	float StartTime;
	bool StopAtSectionEnd;

	TArray<AkPlayingID> PlayingIDs;
};


struct FAkAudioEventEvaluationData : IPersistentEvaluationData
{
	TSharedPtr<FMovieSceneAkAudioEventSectionData> SectionData;
};


struct FAkAudioEventExecutionToken : IMovieSceneExecutionToken
{
	virtual void Execute(const FMovieSceneContext& Context, const FMovieSceneEvaluationOperand& Operand, FPersistentEvaluationData& PersistentData, IMovieScenePlayer& Player) override
	{
		auto AudioDevice = FAkAudioDevice::Get();
		if (!AudioDevice)
			return;

		TSharedPtr<FMovieSceneAkAudioEventSectionData> SectionData = PersistentData.GetSectionData<FAkAudioEventEvaluationData>().SectionData;
		if (SectionData.IsValid())
			SectionData->Update(Context, Operand, Player, AudioDevice);
	}
};


FMovieSceneAkAudioEventTemplate::FMovieSceneAkAudioEventTemplate(const UMovieSceneAkAudioEventSection* InSection)
	: Section(InSection)
{
}

void FMovieSceneAkAudioEventTemplate::Evaluate(const FMovieSceneEvaluationOperand& Operand, const FMovieSceneContext& Context, const FPersistentEvaluationData& PersistentData, FMovieSceneExecutionTokens& ExecutionTokens) const
{
	auto AudioDevice = FAkAudioDevice::Get();
	if (!AudioDevice)
		return;

	ExecutionTokens.Add(FAkAudioEventExecutionToken());
}

void FMovieSceneAkAudioEventTemplate::Setup(FPersistentEvaluationData& PersistentData, IMovieScenePlayer& Player) const
{
	auto AudioDevice = FAkAudioDevice::Get();
	if (!AudioDevice)
		return;

	if (Section)
		PersistentData.AddSectionData<FAkAudioEventEvaluationData>().SectionData = MakeShareable(new FMovieSceneAkAudioEventSectionData(*Section));
}

void FMovieSceneAkAudioEventTemplate::TearDown(FPersistentEvaluationData& PersistentData, IMovieScenePlayer& Player) const
{
	auto AudioDevice = FAkAudioDevice::Get();
	if (!AudioDevice)
		return;

	TSharedPtr<FMovieSceneAkAudioEventSectionData> SectionData = PersistentData.GetSectionData<FAkAudioEventEvaluationData>().SectionData;
	if (SectionData.IsValid() && SectionData->GetStopAtSectionEnd())
		SectionData->StopAllPlayingIDs(AudioDevice);
}
