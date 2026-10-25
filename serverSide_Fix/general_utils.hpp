#ifndef GENERAL_UTILS_HPP
#define GENERAL_UTILS_HPP


#include"SDK/Engine_classes.hpp"


/*
	World_GetWorld_heavy();

	Obtain the UWorld pointer by loading all UObjects, 
		filtering for UWorld, 
		and verifying the UWorld pointers to ensure a valid pointer is retrieved.

		This method is more resource-intensive.
*/
SDK::UWorld* World_GetWorld_heavy();


/*
	World_GetWorld_();


	based on the original SDK.


	Here, 
	you directly access the UWorld pointer within UGameViewportClient—which is inside the main UEngine, 
		obtainable via SDK::UEngine::GetEngine().

	It's very light and lasts only a few milliseconds.

*/
SDK::UWorld* World_GetWorld_();





bool IsValidPtr(void* ptr);


void debugMulticastProperty(SDK::UMulticastDelegateProperty_ MultiCast);



#endif /* GENERAL_UTILS_HPP */
