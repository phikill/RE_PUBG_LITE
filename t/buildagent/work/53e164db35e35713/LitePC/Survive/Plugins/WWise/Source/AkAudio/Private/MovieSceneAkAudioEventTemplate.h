// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Evaluation/MovieSceneEvalTemplate.h"

#include "MovieSceneAkAudioEventTemplate.generated.h"

class UMovieSceneAkAudioEventSection;

USTRUCT()
struct AKAUDIO_API FMovieSceneAkAudioEventTemplate
	: public FMovieSceneEvalTemplate
{
	GENERATED_BODY()

	FMovieSceneAkAudioEventTemplate() {}

	FMovieSceneAkAudioEventTemplate(const UMovieSceneAkAudioEventSection* InSection);

	virtual void Evaluate(const FMovieSceneEvaluationOperand& Operand, const FMovieSceneContext& Context, const FPersistentEvaluationData& PersistentData, FMovieSceneExecutionTokens& ExecutionTokens) const override;

	virtual UScriptStruct& GetScriptStructImpl() const override { return *StaticStruct(); }

	virtual void Setup(FPersistentEvaluationData& PersistentData, IMovieScenePlayer& Player) const override;
	virtual void TearDown(FPersistentEvaluationData& PersistentData, IMovieScenePlayer& Player) const override;
	virtual void SetupOverrides() override { EnableOverrides(RequiresSetupFlag | RequiresTearDownFlag); }

	UPROPERTY()
	const UMovieSceneAkAudioEventSection* Section = nullptr;
};
