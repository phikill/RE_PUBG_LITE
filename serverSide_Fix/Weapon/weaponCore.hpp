#ifndef WAEPONCORE_HPP
#define WEAPONCORE_HPP


#include"SDK/Engine_classes.hpp"
#include"SDK/Engine_structs.hpp"
#include"SDK/ShadowTrackerExtra_classes.hpp"

void OGBG_FlushServerNotifyHitList(SDK::UTslBallisticsComp* self, UC::TArray<SDK::FServerNotifyHitArgs> HitArgsList);
void OGBG_FlushServerNotifyHitList_NonPlayerCharacter(SDK::UTslBallisticsComp* self, UC::TArray<SDK::FServerNotifyHitArgs_NonPlayerCharacter> HitArgsList);

float GetArmorReduction(int id);


float GetDurabilityFactor(int id);



#endif /* WEAPONCORE_HPP */
