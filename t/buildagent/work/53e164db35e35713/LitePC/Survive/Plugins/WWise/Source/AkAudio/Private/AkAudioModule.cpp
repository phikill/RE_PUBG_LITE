// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

#include "AkAudioDevice.h"
#include "AkAudioModule.h"
#include "Misc/CoreDelegates.h"

IMPLEMENT_MODULE( FAkAudioModule, AkAudio )
FAkAudioModule* FAkAudioModule::AkAudioModuleIntance = nullptr;

void FAkAudioModule::StartupModule()
{
	if (AkAudioModuleIntance)
	{
		return;
	}
	AkAudioModuleIntance = this;
	AkAudioDevice = new FAkAudioDevice;

	if (!AkAudioDevice)
		return;

	if (!AkAudioDevice->Init())
	{
		delete AkAudioDevice;
		AkAudioDevice = NULL;
		return;
	}

	OnTick = FTickerDelegate::CreateRaw( AkAudioDevice, &FAkAudioDevice::Update);
	TickDelegateHandle = FTicker::GetCoreTicker().AddTicker( OnTick );

	FCoreDelegates::OnPreExit.AddLambda([]{FAkAudioDevice::SetEngineExiting(true);});

}

void FAkAudioModule::ShutdownModule()
{
	FTicker::GetCoreTicker().RemoveTicker(TickDelegateHandle);

	if (AkAudioDevice) 
	{
		AkAudioDevice->Teardown();
		delete AkAudioDevice;
		AkAudioDevice = NULL;
	}

	AkAudioModuleIntance = nullptr;
}

FAkAudioDevice * FAkAudioModule::GetAkAudioDevice()
{ 
	return AkAudioDevice;
}
