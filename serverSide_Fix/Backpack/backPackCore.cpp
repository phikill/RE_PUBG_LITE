
#include"backPackCore.hpp"


bool SpawnAndGiveItem(SDK::UBackpackComponent* Backpack,
                    SDK::EBackpackItemType ItemType,
                    int32_t SpecificID,
                    int32_t Count,
                    bool bAutoEquip,
                    uint64_t CustomInstanceID)
{
    if (!Backpack) return false;

    //SDK::UWorld* World = SDK::UWorld::GetWorld();

    SDK::UWorld* World = World_GetWorld_();
    SDK::AActor* Player = Backpack->GetOwner();
    if (!World || !Player) return false;

    SDK::UClass* WrapperClass = SDK::APickUpWrapperActor::StaticClass();
    if (!WrapperClass) return false;

    // 1. Defines Spawn Position
    SDK::FTransform SpawnTransform = Player->GetTransform();
    SpawnTransform.Translation.X += 150.0f; // 1.5 meters ahead
    SpawnTransform.Translation.Z += 20.0f;  // Lightly suspended

    // 2. Starts Delayed Spawn on the map
    SDK::AActor* GenericActor = SDK::UGameplayStatics::BeginDeferredActorSpawnFromClass(World,
        WrapperClass,
        SpawnTransform,
        SDK::ESpawnActorCollisionHandlingMethod::AlwaysSpawn, Player);

    if (!GenericActor) return false;

    // 3. Configures the physical floor wrapper.
    SDK::APickUpWrapperActor* PickupItem = reinterpret_cast<SDK::APickUpWrapperActor*>(GenericActor);

    SDK::FItemDefineID ItemID{};
    ItemID.Type = (int32_t)ItemType;
    ItemID.TypeSpecificID = SpecificID;
    ItemID.AvatarID = 0;
    ItemID.bValidItem = true;
    ItemID.bValidInstance = true;
    ItemID.InstanceID = CustomInstanceID;

    PickupItem->DefineID = ItemID;
    PickupItem->Count = Count;
    PickupItem->bDropedByPlayer = true;

    // 4. Physical Spawn completes
    SDK::UGameplayStatics::FinishSpawningActor(PickupItem, SpawnTransform);

    // 5. Prepare the backpack collection structure.
    SDK::FBattleItemPickupInfo PickupInfo{};
    PickupInfo.Source = PickupItem;
    PickupInfo.Count = Count;
    PickupInfo.bAutoEquip = bAutoEquip;

    // 6. Force the backpack to suck the item into the inventory.
    bool bCollected = Backpack->PickupItem(ItemID, PickupInfo, SDK::EBattleItemPickupReason::AutoPickup);
    if (bCollected)
    {
        Backpack->NotifyItemListUpdated();
        return true;
    }

    return false;
}

bool GiveVirtualItem(SDK::UBackpackComponent* Backpack, 
                     SDK::EBackpackItemType ItemType,
                     int32_t SpecificID,
                     int32_t Count,
                     bool bAutoEquip,
                     uint64_t CustomInstanceID)
{



        SDK::FItemDefineID virtualItem{};
        virtualItem.Type = (int32_t)ItemType;
        virtualItem.TypeSpecificID = SpecificID;
        virtualItem.AvatarID = 0;
        virtualItem.bValidItem = true;
        virtualItem.bValidInstance = true;

        virtualItem.InstanceID = CustomInstanceID;

       


        SDK::UItemHandleBase* HandleVirtual = Backpack->CreateItemHandle(virtualItem);
        if(HandleVirtual)
        {
            Backpack->ModifyItemHandleCount(HandleVirtual, 90); // Define a quantidade
            Backpack->AddItemHandle(virtualItem, HandleVirtual);

            Backpack->NotifyItemListUpdated();

            return 1;
        }
        else
        {
            return 0;
        }
    
}


/*
                                    SDK::TArray<SDK::FBattleItemData> itens = BackPackComponent->GetAllItemList();

                                    //printf("--- Inventario (%d itens) ---\n", itens.Num());

                                    if(itemADDED == 0)
                                    {
                                        //itemADDED = 1;

                                        // 1. Criando a identidade da UMP9 baseada no seu dump
                                        SDK::FItemDefineID ID_UMP9{};
                                        ID_UMP9.Type = 1;                     // Categoria: Arma
                                        ID_UMP9.TypeSpecificID = 102002;      // ID do modelo: UMP9
                                        ID_UMP9.AvatarID = 0;
                                        ID_UMP9.bValidItem = true;
                                        ID_UMP9.bValidInstance = true;

                                        // ATENÇÃO ao InstanceID: No modo multiplayer, o servidor costuma gerar esse número.
                                        // Se você estiver testando localmente, pode tentar gerar um número aleatório alto
                                        // ou um contador para não colidir com itens existentes (ex: 9991, 9992...)
                                        ID_UMP9.InstanceID = 8888;

                                        // 2. Criando a identidade da Munição 9mm
                                        SDK::FItemDefineID ID_9mm{};
                                        ID_9mm.Type = 3;                      // Categoria: Munição/Consumível
                                        ID_9mm.TypeSpecificID = 301001;       // ID do modelo: Balas 9mm
                                        ID_9mm.bValidItem = true;
                                        ID_9mm.bValidInstance = true;
                                        ID_9mm.InstanceID = 9998;



                                        SDK::FItemDefineID HEADSET{};
                                        HEADSET.Type = 5;
                                        HEADSET.TypeSpecificID = 401061;
                                        HEADSET.AvatarID = 0;
                                        HEADSET.bValidItem = true;
                                        HEADSET.bValidInstance = true;
                                        HEADSET.InstanceID = 4444;


                                        SDK::UItemHandleBase* HandleBalas = BackPackComponent->CreateItemHandle(ID_9mm);
                                        if (HandleBalas)
                                        {
                                            BackPackComponent->ModifyItemHandleCount(HandleBalas, 90); // Define a quantidade
                                            BackPackComponent->AddItemHandle(ID_9mm, HandleBalas);

                                            // Avisa a interface gráfica do jogo para se redesenhar com o novo item na tela
                                            BackPackComponent->NotifyItemListUpdated();

                                            //printf("[Sucesso] Injetado 90x munições de 9mm diretamente na mochila!\n");
                                        }
                                        else
                                        {
                                            printf("\n HandleBalas is NULL \n");
                                        }

                                        /*
                                        SDK::UItemHandleBase* Handle_UMP9 = BackPackComponent->CreateItemHandle(ID_UMP9);
                                        if(Handle_UMP9)
                                        {
                                            BackPackComponent->ModifyItemHandleCount(Handle_UMP9, 1);
                                            BackPackComponent->AddItemHandle(ID_UMP9, Handle_UMP9);

                                            BackPackComponent->NotifyItemListUpdated();
                                        }

                                        /*
                                            [2] Military Vest (Lv.3) x1 [EQUIPADO]
                                            Type: 5
                                            TypeSpecificID: 503003
                                            AvatarID: 0
                                            bValidItem: 1
                                            bValidInstance: 1
                                            InstanceID: 36

                                        */

                                        /*
                                        SDK::UItemHandleBase* Handle_HEADSET = BackPackComponent->CreateItemHandle(HEADSET);
                                        if(Handle_HEADSET)
                                        {
                                            BackPackComponent->ModifyItemHandleCount(Handle_HEADSET, 1);
                                            BackPackComponent->AddItemHandle(HEADSET, Handle_HEADSET);

                                            BackPackComponent->NotifyItemListUpdated();
                                        }
                                        else
                                        {
                                            printf("\n Handle_HEADSET is NULL! \n");
                                        }
                                    }*/

