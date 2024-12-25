// Copyright (c) 2006-2012 Audiokinetic Inc. / All Rights Reserved

/*------------------------------------------------------------------------------------
	AkAudioBankGenerationHelpers.h: Wwise Helpers to generate banks from the editor and when cooking.
------------------------------------------------------------------------------------*/
#pragma once

#include "AkAudioClasses.h"

namespace WwiseBnkGenHelper
{
	/**
	 * Dump the bank definition to file
	 *
	 * @param in_DefinitionFileContent	Banks to include in file
	 */
	FString DumpBankContentString(TMap<FString, TSet<UAkAudioEvent*> >& in_DefinitionFileContent);
	FString DumpBankContentString(TMap<FString, TSet<UAkAuxBus*> >& in_DefinitionFileContent );
	
	/**
	 * Generate the Wwise soundbanks
	 *
	 * @param in_rBankNames				Names of the banks
	 * @param in_bImportDefinitionFile	Use an import definition file
	 */
	int32 GenerateSoundBanks( TArray< TSharedPtr<FString> >& in_rBankNames, TArray< TSharedPtr<FString> >& in_PlatformNames, bool in_bImportDefinitionFile );

	FString GetBankGenerationFullDirectory( const TCHAR * in_szPlatformDir );

	FString GetLinkedProjectPath();

	FString GetDefaultSBDefinitionFilePath();

	FString GetProjectDirectory();
};
