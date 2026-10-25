
#include"../general_utils.hpp"

#include"weaponCore.hpp"
//#include"serverSide_Fix/General_Utilities.hpp"

#define PRINT_VEC3(name, v) \
    printf(name " = (X: %.3f Y: %.3f Z: %.3f)\n", v.X, v.Y, v.Z);

#define PRINT_IVEC3(name, v) \
    printf(name " = (X: %d Y: %d Z: %d)\n", v.X, v.Y, v.Z);

void DumpIntArray(const char* name, SDK::TArray<int32_t>& arr)
{
    printf("%s (Num: %d): ", name, arr.Num());

    for (int i = 0; i < arr.Num(); i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}


float GetArmorReduction(int id)
{
    switch(id)
    {
        case 502001: return 0.30f;
        case 502002: return 0.40f;
        case 502003: return 0.55f;

        case 503001: return 0.30f;
        case 503002: return 0.40f;
        case 503003: return 0.55f;
    }

    return 0.f;
}

float GetDurabilityFactor(int id)
{
    switch (id)
    {
        // Helmet
    case 502001: return 0.40f;
    case 502002: return 0.45f;
    case 502003: return 0.50f;

        // Armor
    case 503001: return 0.65f;
    case 503002: return 0.70f;
    case 503003: return 0.75f;

    default: return 0.6f;
    }
}

/*

    NOTE!

    This function is a custom implementation because we couldn't find its original address.

    This function receives the hit data sent by the client.

    It applies to things like vehicles and characters; it does not apply to doors.
*/
void OGBG_FlushServerNotifyHitList(SDK::UTslBallisticsComp* self, UC::TArray<SDK::FServerNotifyHitArgs> HitArgsList)
{

    SDK::AActor* owner = self->GetOwner();
    if(owner->IsA(SDK::ASTExtraShootWeapon::StaticClass()))
    {
        SDK::ASTExtraShootWeapon* InstigatorWeapon = (SDK::ASTExtraShootWeapon*)owner;
        if(InstigatorWeapon)
        {


            //std::cerr << "NUM: " << (int)HitArgsList.Num() << std::endl;
            

            
            for(int i = 0; i < HitArgsList.Num(); ++i)
            {
                SDK::FServerNotifyHitArgs HitArgs = HitArgsList[i];

                SDK::AActor* ActorHit = HitArgs.OptimizedHitResult.HitActor.Get();
                if(ActorHit)
                {
                    if(ActorHit->IsA(SDK::ASTExtraBaseCharacter::StaticClass()))
                    {
                        SDK::UShootWeaponEntity* shootweaponentitycomp = InstigatorWeapon->GetShootWeaponEntityComponent();

                        SDK::ASTExtraBaseCharacter* HitCharacter = (SDK::ASTExtraBaseCharacter*)ActorHit;
                        if(HitCharacter)
                        {

                            //printf("\n Shoot a Character \n");
                            
                            SDK::UBackpackComponent* BackPackComponent = NULL; // Backpack to check armor

                            if(HitCharacter->Controller)
                            {
                                if (HitCharacter->Controller->IsA(SDK::ASTExtraPlayerController::StaticClass()))
                                {
                                    SDK::ASTExtraPlayerController* STExtraPlayerController = (SDK::ASTExtraPlayerController*)HitCharacter->Controller;
                                    if(STExtraPlayerController)
                                    {
                                        BackPackComponent = STExtraPlayerController->BackpackComponent;
                                    }
                                    else
                                    {
                                        printf("\n HitActor STExtraPlayerController is NULL !\n");
                                    }

                                }
                                else if(HitCharacter->Controller->IsA(SDK::AFakePlayerAIController::StaticClass()))
                                {
                                    SDK::AFakePlayerAIController* FakePlayerAIController = (SDK::AFakePlayerAIController*)HitCharacter->Controller;
                                    if(FakePlayerAIController)
                                    {
                                        BackPackComponent = FakePlayerAIController->BackpackComponent;
                                    }
                                    else
                                    {
                                        printf("\n HitActor FakePlayerAIController is NULL !\n");
                                    }

                                }
                            }
                            else if(HitCharacter->CurrentVehicle)
                            {
                                if(HitCharacter->CurrentVehicle)
                                {
                                    //printf("\n Character is in Vehicle \n");
                                    // 
                                    SDK::ASTExtraVehicleBase* CurrentVehicle = HitCharacter->GetCurrentVehicle();

                                    //SDK::ASTExtraVehicleBase* CurrentVehicle = HitCharacter->CurrentVehicle;


                                    if(IsValidPtr(CurrentVehicle)) // i fuckking anyways check pointers LOL 
                                    {
                                        SDK::AController* Controller = CurrentVehicle->GetController();
                                        if(IsValidPtr(Controller))
                                        {
                                            if(Controller->IsA(SDK::ASTExtraPlayerController::StaticClass()))
                                            {
                                                SDK::ASTExtraPlayerController* STExtraPlayerController = (SDK::ASTExtraPlayerController*)Controller;
                                                if(STExtraPlayerController)
                                                {
                                                    if(STExtraPlayerController->BackpackComponent)
                                                    {
                                                        printf("\n Have BackPackComponent Inside Vehicle \n");
                                                        BackPackComponent = STExtraPlayerController->BackpackComponent;
                                                    }
                                                }
                                            }
                                        }
                                        else
                                        {
                                            printf("\n Dont Have a Valid PlayerController in Vehicle \n");
                                        }
                                    }
                                }
                            }
                            else
                            {
                                printf("\n Dont Have a Valid PlayerController \n");
                            }

                            

                            

                            // SDK::USkeletalMeshComponent* CharacterMesh = HitCharacter->Mesh;
                            SDK::USkeletalMeshComponent* CharacterMesh = (SDK::USkeletalMeshComponent*)HitCharacter->GetComponentByClass(SDK::USkeletalMeshComponent::StaticClass());
                            if(CharacterMesh)
                            {
                                //printf("\n Have a valid Mesh \n");
                            }
                            else
                            {
                                //printf("\n Mesh Is NULL \n");
                            }

                            bool bIsHeadShot = 0;
                            bool bIsUpperBody = 0;

                            float WeaponDamage = InstigatorWeapon->ShootWeaponEntityComp->BaseImpactDamage;
                            printf("\n Weapon Base ImpactDamage %f \n", WeaponDamage);

                            float finalDamage = 0.0f; // Final damage calculation
                            float HitCoefficient = 0.0f; // damage multiplier value by body part
                            float rawDamage = 0.0f;

                            // Damage Multiplier
                            SDK::FWeaponHitPartCoff WeaponHitPartCoff = InstigatorWeapon->ShootWeaponEntityComp->WeaponHitPartCoff;

                            if(HitArgs.OptimizedHitResult.BoneName.ToString() == "Head")
                            {
                                printf("\n Shoot At Head \n");
                                HitCoefficient = WeaponHitPartCoff.Head;
                                bIsHeadShot = 1;
                            }

                            if (HitArgs.OptimizedHitResult.BoneName.ToString() == "neck_01")
                            {
                                printf("\n Shoot At neck_01 \n");
                                HitCoefficient = WeaponHitPartCoff.Head;
                                bIsHeadShot = 1;
                            }

                            if (HitArgs.OptimizedHitResult.BoneName.ToString() == "clavicle_r" ||
                                HitArgs.OptimizedHitResult.BoneName.ToString() == "clavicle_l")
                            {
                                printf("\n Shoot At clavicle_ \n");

                                HitCoefficient = WeaponHitPartCoff.UpperBody;
                                bIsUpperBody = 1;
                            }

                            if (HitArgs.OptimizedHitResult.BoneName.ToString() == "spine_03")
                            {
                                printf("\n Shoot At Spine_03\n");

                                HitCoefficient = WeaponHitPartCoff.UpperBody;
                                bIsUpperBody = 1;
                            }

                            if (HitArgs.OptimizedHitResult.BoneName.ToString() == "spine_02")
                            {
                                printf("\n Shoot At Spine_02\n");

                                HitCoefficient = WeaponHitPartCoff.UpperBody;
                                bIsUpperBody = 1;
                            }

                            if(HitArgs.OptimizedHitResult.BoneName.ToString() == "spine_01")
                            {
                                printf("\n Shoot At Spine_01\n");

                                HitCoefficient = WeaponHitPartCoff.UpperBody;
                                bIsUpperBody = 1;
                            }

                            if (HitArgs.OptimizedHitResult.BoneName.ToString() == "pelvis")
                            {
                                printf("\n Shoot At pelvis\n");

                                HitCoefficient = WeaponHitPartCoff.LowerBody;
                            }

                            if (HitArgs.OptimizedHitResult.BoneName.ToString() == "thigh_r" ||
                                HitArgs.OptimizedHitResult.BoneName.ToString() == "thigh_l")
                            {
                                printf("\n Shoot At thing_\n");

                                HitCoefficient = WeaponHitPartCoff.Legs;
                            }

                            if (HitArgs.OptimizedHitResult.BoneName.ToString() == "calf_r" ||
                                HitArgs.OptimizedHitResult.BoneName.ToString() == "calf_l")
                            {
                                printf("\n Shoot At calf_\n");

                                HitCoefficient = WeaponHitPartCoff.Legs;
                            }

                            if (HitArgs.OptimizedHitResult.BoneName.ToString() == "foot_r" ||
                                HitArgs.OptimizedHitResult.BoneName.ToString() == "foot_l")
                            {
                                printf("\n Shoot At foot_\n");

                                HitCoefficient = WeaponHitPartCoff.Foot;
                            }

                            if (HitArgs.OptimizedHitResult.BoneName.ToString() == "upperarm_r" ||
                                HitArgs.OptimizedHitResult.BoneName.ToString() == "upperarm_l")
                            {
                                printf("\n Shoot At upperarm_\n");

                                HitCoefficient = WeaponHitPartCoff.Arms;
                            }

                            if (HitArgs.OptimizedHitResult.BoneName.ToString() == "lowerarm_r" ||
                                HitArgs.OptimizedHitResult.BoneName.ToString() == "lowerarm_l")
                            {
                                printf("\n Shoot At lowerarm_\n");

                                HitCoefficient = WeaponHitPartCoff.Arms;
                            }

                            if (HitArgs.OptimizedHitResult.BoneName.ToString() == "hand_r" ||
                                HitArgs.OptimizedHitResult.BoneName.ToString() == "hand_l")
                            {
                                printf("\n Shoot At hand_\n");

                                HitCoefficient = WeaponHitPartCoff.Hand;
                            }

                            printf("\n BoneName: [%s] \n", HitArgs.OptimizedHitResult.BoneName.ToString().c_str());

                            //printf("\n RangeModifier : %f \n", self->TrajectoryConfig.RangeModifier);
                            //printf("\n RefenceDistance : %f \n", self->TrajectoryConfig.ReferenceDistance);

                            float equipmentDamageReduction = 0.0f;

                            float efalloff = 0;

                            //float multiplier = pow(self->TrajectoryConfig.RangeModifier, HitArgs.ClientOriginImpact.Distance / self->TrajectoryConfig.ReferenceDistance);

                            float multiplier = pow(shootweaponentitycomp->RangeModifier, HitArgs.travelDistance / shootweaponentitycomp->ReferenceDistance);

                            efalloff = WeaponDamage * multiplier;

                            rawDamage = efalloff * HitCoefficient;

                            if(IsValidPtr(BackPackComponent))
                            {

                                UC::TArray<SDK::FBattleItemData> items = BackPackComponent->ItemList;

                                for(int i = 0; i < items.Num(); i++)
                                {
                                    SDK::FBattleItemData& item = items[i];

                                    if(item.bEquipping)
                                    {
                                        int id = item.DefineID.TypeSpecificID;
                                        printf("\n TypeSpecicID: %i \n", id);

                                        if(bIsHeadShot == 1)
                                        {
                                            // Helmet
                                            if(id == 502001)
                                            {
                                                printf("\n Helmet (Lv.1)\n"); // max life : 80
                                                
                                                float factor = GetDurabilityFactor(502001);

                                                for (int j = 0; j < item.AdditionalData.Num(); j++)
                                                {
                                                    SDK::FBattleItemAdditionalData& BattleItemAdditionalData = item.AdditionalData[j];

                                                    std::string name = BattleItemAdditionalData.Name.ToString();

                                                    if (name == "RemainingDuability")
                                                    {
                                                        float loss = rawDamage * factor;

                                                        if (BattleItemAdditionalData.FloatData <= 0.f)
                                                        {
                                                            equipmentDamageReduction = 0.f;
                                                        }
                                                        else
                                                        {
                                                            equipmentDamageReduction = GetArmorReduction(502001);
                                                            BattleItemAdditionalData.FloatData -= loss;
                                                        }
                                                    }
                                                }

                                                break;
                                            }
                                                    
                                            if(id == 502002)
                                            {
                                                printf("\n Helmet (Lv.2)\n"); // max life : 150

                                                float factor = GetDurabilityFactor(502002);

                                                for (int j = 0; j < item.AdditionalData.Num(); j++)
                                                {
                                                    SDK::FBattleItemAdditionalData& BattleItemAdditionalData = item.AdditionalData[j];

                                                    std::string name = BattleItemAdditionalData.Name.ToString();

                                                    if (name == "RemainingDuability")
                                                    {
                                                        float loss = rawDamage * factor;

                                                        if (BattleItemAdditionalData.FloatData <= 0.f)
                                                        {
                                                            equipmentDamageReduction = 0.f;
                                                        }
                                                        else
                                                        {
                                                            equipmentDamageReduction = GetArmorReduction(502002);
                                                            BattleItemAdditionalData.FloatData -= loss;
                                                        }
                                                    }
                                                }

                                                break;
                                            }
                                             
                                            if(id == 502003)
                                            {
                                                printf("\n Helmet (Lv.3) \n"); // max life : 230
                                               
                                                float factor = GetDurabilityFactor(502003);

                                                for(int j = 0; j < item.AdditionalData.Num(); j++)
                                                {
                                                    SDK::FBattleItemAdditionalData& BattleItemAdditionalData = item.AdditionalData[j];

                                                    std::string name = BattleItemAdditionalData.Name.ToString();

                                                    if(name == "RemainingDuability")
                                                    {
                                                        float loss = rawDamage * factor;

                                                        if(BattleItemAdditionalData.FloatData <= 0.f)
                                                        {
                                                            equipmentDamageReduction = 0.f;
                                                        }
                                                        else
                                                        {
                                                            equipmentDamageReduction = GetArmorReduction(502003);
                                                            BattleItemAdditionalData.FloatData -= loss;
                                                        }
                                                    }
                                                }

                                                break;
                                            }   
                                        }

                                        if(bIsUpperBody == 1)
                                        {
                                            // Armor
                                            if(id == 503001)
                                            {
                                                printf("\n Armor (Lv.1)\n"); // max life : 200
                                               
                                                float factor = GetDurabilityFactor(503001);

                                                for (int j = 0; j < item.AdditionalData.Num(); j++)
                                                {
                                                    SDK::FBattleItemAdditionalData& BattleItemAdditionalData = item.AdditionalData[j];

                                                    std::string name = BattleItemAdditionalData.Name.ToString();

                                                    if (name == "RemainingDuability")
                                                    {
                                                        float loss = rawDamage * factor;

                                                        if (BattleItemAdditionalData.FloatData <= 0.f)
                                                        {
                                                            equipmentDamageReduction = 0.f;
                                                        }
                                                        else
                                                        {
                                                            equipmentDamageReduction = GetArmorReduction(503001);
                                                            BattleItemAdditionalData.FloatData -= loss;
                                                        }
                                                    }
                                                }

                                                break;
                                            }

                                            if(id == 503002)
                                            {
                                                printf("\n Armor (Lv.2)\n"); // max life : 220
                                                
                                                float factor = GetDurabilityFactor(503002);

                                                for (int j = 0; j < item.AdditionalData.Num(); j++)
                                                {
                                                    SDK::FBattleItemAdditionalData& BattleItemAdditionalData = item.AdditionalData[j];

                                                    std::string name = BattleItemAdditionalData.Name.ToString();

                                                    if (name == "RemainingDuability")
                                                    {
                                                        float loss = rawDamage * factor;

                                                        if (BattleItemAdditionalData.FloatData <= 0.f)
                                                        {
                                                            equipmentDamageReduction = 0.f;
                                                        }
                                                        else
                                                        {
                                                            equipmentDamageReduction = GetArmorReduction(503002);
                                                            BattleItemAdditionalData.FloatData -= loss;
                                                        }
                                                    }
                                                }

                                                break;
                                            }

                                            if(id == 503003)
                                            {
                                                printf("\n Armor (Lv.3) \n"); // max life : 250
                                                
                                                float factor = GetDurabilityFactor(503003);

                                                for (int j = 0; j < item.AdditionalData.Num(); j++)
                                                {
                                                    SDK::FBattleItemAdditionalData& BattleItemAdditionalData = item.AdditionalData[j];

                                                    std::string name = BattleItemAdditionalData.Name.ToString();

                                                    if (name == "RemainingDuability")
                                                    {
                                                        float loss = rawDamage * factor;

                                                        if (BattleItemAdditionalData.FloatData <= 0.f)
                                                        {
                                                            equipmentDamageReduction = 0.f;
                                                        }
                                                        else
                                                        {
                                                            equipmentDamageReduction = GetArmorReduction(503003);
                                                            BattleItemAdditionalData.FloatData -= loss;
                                                        }
                                                    }
                                                }


                                                break;
                                            }

                                        }


                                      

                                       
                                    }
                                }
                            }

                            

                            finalDamage = rawDamage * (1.0f - equipmentDamageReduction);

                            SDK::USTExtraGameplayStatics::STApplyPointDamage(HitArgs.OptimizedHitResult.HitActor.Get(),
                                                                            finalDamage,
                                                                            HitArgs.ClientOriginAmmoStartLoc,
                                                                            SDK::FHitResult(),
                                                                            InstigatorWeapon->GetOwnerController(),
                                                                            InstigatorWeapon,
                                                                            InstigatorWeapon->ShootWeaponComponent->ShootWeaponEntityComponent->DamageType);

                            printf("\n equipmentDamageReduction: %f \n", equipmentDamageReduction);

                            printf("\n FinalDamage Test: %f \n", finalDamage);

                        }
                        else
                        {
                            printf("\n HitCharacter is NULL \n");
                        }


                        
                    }
                    else if (ActorHit->IsA(SDK::ASTExtraVehicleBase::StaticClass()))
                    {
                        printf("\n Shoot a Vehicle \n");
                    }
                }
                else
                {
                    printf("\n HitActor is NULL !\n");
                }

                


                printf("========================================\n\n");
            }
        }
    }

    
}

void OGBG_FlushServerNotifyHitList_NonPlayerCharacter(SDK::UTslBallisticsComp* self, UC::TArray<SDK::FServerNotifyHitArgs_NonPlayerCharacter> HitArgsList)
{
    printf("\n FlushServerNotifyHitList_NonPlayerCharacter() \n");

    for (int i = 0; i < HitArgsList.Num(); ++i)
    {
        SDK::FServerNotifyHitArgs_NonPlayerCharacter HitArgs = HitArgsList[i];

        SDK::AActor* ActorHit = HitArgs.ServerOriginImpact.Actor.Get();
        if (ActorHit)
        {
            printf("\n ActorHit Name : %s \n", ActorHit->GetFullName().c_str());

            SDK::APlayerController* LocalController = SDK::UGameplayStatics::GetPlayerController(World_GetWorld_(), 0);
            if (LocalController)
            {
                SDK::AActor* HostViewTarget = LocalController->GetViewTarget();

                float DistancefromViewTarget = ActorHit->GetDistanceTo(HostViewTarget);
                printf("\n DistancefromViewTarget: [%f] \n ", DistancefromViewTarget);

                float SqDistance = ActorHit->GetSquaredDistanceTo(HostViewTarget);
                printf("\n SqDistance: [%f] \n ", SqDistance);


                float HorizontalDistance = ActorHit->GetHorizontalDistanceTo(HostViewTarget);
                printf("\n HorizontalDistance: [%f] \n ", HorizontalDistance);
            }

            SDK::FVector Origin = SDK::FVector();
            SDK::FVector Extent = SDK::FVector();

            ActorHit->GetActorBounds(false, &Origin, &Extent);

            printf("\n ActorBounds: Origin: X=[%f] Y=[%f] Z=[%f] |\n Extent: X=[%f] Y=[%f] Z=[%f]\n",
                Origin.X, Origin.Y, Origin.Z, Extent.X, Extent.Y, Extent.Z);

            SDK::USceneComponent* Root = ActorHit->K2_GetRootComponent();
            if (Root)
            {
                printf("Root: %s\n", Root->GetName().c_str());
                printf("Class: %s\n", Root->GetClass()->GetName().c_str());
            }

            SDK::UActorComponent* Component = ActorHit->GetComponentByClass(SDK::UStaticMeshComponent::StaticClass());
            if (Component)
            {
                printf("Component: %s \n", Component->GetName().c_str());
                printf("Class: %s \n", Component->GetClass()->GetName().c_str());
            }

            SDK::UClass* ActorClass = ActorHit->GetClass();
            if (ActorClass)
            {

                SDK::UStruct* Struct = (SDK::UStruct*)ActorHit->GetClass();
                while (Struct)
                {
                    printf("Class: %s\n", Struct->GetName().c_str());

                    Struct = Struct->Super;
                }
            }
        }
    }
}

