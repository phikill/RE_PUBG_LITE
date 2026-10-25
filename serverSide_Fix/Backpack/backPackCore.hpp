
#ifndef BACKPACKCORE_HPP
#define BACKPACKCORE_HPP

#include<stdint.h>
#include"SDK/Gameplay_classes.hpp"
#include"SDK/ShadowTrackerExtra_classes.hpp"
#include"serverSide_Fix/general_utils.hpp"

bool SpawnAndGiveItem(SDK::UBackpackComponent* Backpack,
                        SDK::EBackpackItemType ItemType,
                        int32_t SpecificID,
                        int32_t Count,
                        bool bAutoEquip,
                        uint64_t CustomInstanceID);

bool GiveVirtualItem(SDK::UBackpackComponent* Backpack,
                    SDK::EBackpackItemType ItemType,
                    int32_t SpecificID,
                    int32_t Count,
                    bool bAutoEquip,
                    uint64_t CustomInstanceID);

#endif /* BACKPACKCORE_HPP */

