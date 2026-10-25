
#ifndef NOMINMAX
#define NOMINMAX
#endif

#include <Windows.h>
#include <wininet.h>
#pragma comment(lib, "wininet.lib")


#include<algorithm>
#include<cctype>
#include<cfloat>
#include<chrono>
#include<cmath>
#include<cstring>
#include<ctime>
#include<fstream>
#include<iostream>
#include<mutex>
#include<random>
#include<unordered_map>
#include<vector>

#include"SDK.hpp"
#include<unordered_set>

#include"SDK/Engine_parameters.hpp"
#include"SDK/ShadowTrackerExtra_parameters.hpp"

#include"include/cJSON/cJSON.h"
#include"include/MinHook/MinHook.h"

#include"serverSide_Fix/general_utils.hpp"
#include"serverSide_Fix/Character/characterCore.hpp"
#include"serverSide_Fix/Weapon/weaponCore.hpp"
#include"serverSide_Fix/BackPack/backPackCore.hpp"


volatile int g_Running = 1; // thread running

#define MAX_PLAYERS     100

int GMapId = 0;
bool bIsTrainingMode = false;

enum ENetMode : int32_t
{
    NM_Standalone = 0,
    NM_DedicatedServer = 1,
    NM_ListenServer = 2,
    NM_Client = 3
};


// Code for definingand activating forced mode for level streaming.
SDK::UWorld* lastWorld = NULL;

bool isStreamingPlayable = false;
bool needLoadAllLevels = false;
bool allLevelsAreLoaded = false;

SDK::UBP_ItemGeneratorComponent_C* ItemGeneratorPointer = NULL;




void* GetVtableAdress(void* ptr, size_t byteOffset)
{
    if (!ptr) return 0;

    void** vtable = *(void***)ptr;
    return vtable[byteOffset / 8];
}

void DumpVTableEntries(void* Object, int NumEntries = 50)
{
    if (!Object) return;

    // Pega o ponteiro da vtable (primeiros 8 bytes do objeto)
    uintptr_t* VTable = *(uintptr_t**)Object;
    if (!VTable) return;

    printf("[VTable Dump] Object: %p | VTable pointer: %p\n", Object, VTable);

    for (int i = 0; i < NumEntries; i++)
    {
        uintptr_t FuncAddr = VTable[i];
        printf("  [%3d] offset %3d*8 = 0x%03X | addr: %p\n",
            i, i, i * 8, (void*)FuncAddr);

        // Opcional: tentar identificar se o endereço está dentro de um módulo conhecido
        // (ex: usando GetModuleHandle e GetProcAddress, mas normalmente funções virtuais não são exportadas)
    }
}

bool IsHostPlayer(SDK::APlayerState* PS, SDK::UWorld* World)
{
    if (!PS || !World)
    {
        return false;
    }

    SDK::APlayerController* LocalPC = SDK::UGameplayStatics::GetPlayerController(World, 0);
    if (!LocalPC)
    {
        return false;
    }

    return PS->GetOwner() == LocalPC;
}




void InitUEConsole()
{
    SDK::UEngine* Engine = SDK::UEngine::GetEngine();
    if(IsValidPtr(Engine))
    {
        SDK::UGameViewportClient* GameViewport = Engine->GameViewport;
        if(IsValidPtr(GameViewport))
        {
            // Configura a tecla F2 globalmente
            SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"F2");

            // Instancia o console com o GameViewport como Outer
            if(!GameViewport->ViewportConsole)
            {
                SDK::UObject* NewConsole = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, GameViewport);
                GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewConsole);
            }
        }
    }

    
}

int float_is_zero(float v)
{
    return fabs((double)v) < 1e-6;
}

void FixValue()
{
    SDK::UWorld* World = World_GetWorld_();
    std::cerr << "World: " << World->GetName() << std::endl;

    float* value1 = (float*)(World->Pad_200 + 0x68);
    float* value2 = (float*)(World->Pad_260 + 0xB4);
    //float* value3 = (float*)(World->Pad_200);

    *value1 = 100.0f;
    *value2 = 100.0f;
    //*value3 = 100.0f;

}

// Fix Crash : Drop Items, Doors, and specific Windows
void Fix_UWorld_ActorCrash(SDK::UWorld* World)
{
    //SDK::UWorld* World = SDK::UWorld::GetWorld();
    if (World)
    {
        float* value1 = (float*)(World->Pad_200 + 0x68);
        float* value2 = (float*)(World->Pad_260 + 0xB4);

        if (value1)
        {
            if (float_is_zero(*value1))
            {
                *value1 = FLT_MAX;
            }

        }
        if (value2)
        {
            if (float_is_zero(*value2))
            {
                *value2 = FLT_MAX;
            }

        }
    }
}



typedef enum EReqLevelBlock_ : int32_t
{
    /** Block load AlwaysLoaded levels. Otherwise Async load. */
    BlockAlwaysLoadedLevelsOnly, // 0x0
    /** Block all loads */
    AlwaysBlock,                 // 0x1
    /** Never block loads */
    NeverBlock,                  // 0x2
} EReqLevelBlock;


bool ULevelStreaming_RequestLevel(SDK::ULevelStreaming* self, SDK::UWorld* PersistentWorld, bool bAllowLevelLoadRequests, EReqLevelBlock BlockPolicy)
{ 
    printf("\n ULevelStreaming_RequestLevel Called \n");

    // 0x7ff79e916a90
    typedef bool(__fastcall* Fn)(SDK::ULevelStreaming*, SDK::UWorld*, bool, EReqLevelBlock);
    Fn fn = (Fn)((uintptr_t)GetModuleHandle(NULL) + 0x1386A90);


    return fn(self, PersistentWorld, bAllowLevelLoadRequests, BlockPolicy);
}






int32_t DisableCullingForStreamingLevels(SDK::UWorld* World)
{
    int i = 0;

    int32_t returnvalue = 0;

    if(!IsValidPtr(World))
    {
        printf("\n DisableCullingForStreamingLevels(): World is null.\n");
        return 0;
    }

    printf("\n DisableCullingForStreamingLevels(): World is valid, proceeding.\n");



    SDK::APlayerController* PlayerController = SDK::UGameplayStatics::GetPlayerController(World, 0);
    SDK::ASTExtraPlayerController* STExtraPlayerController = (SDK::ASTExtraPlayerController*)PlayerController;

    

    //Sleep(14400);

    for(i = 0; i < World->StreamingLevels.Num(); i++)
    {

        SDK::ULevelStreaming* StreamingLevel = World->StreamingLevels[i];
        if(StreamingLevel)
        {
            

            std::string LevelName = StreamingLevel->GetName();
            std::string PackageName = StreamingLevel->PackageNameToLoad.ToString().c_str();

            //printf("\n We are iterating the level: [%s]\n", LevelName.c_str());

            //printf("PACKAGE : [%s] \n", StreamingLevel->PackageNameToLoad.ToString().c_str());

            Sleep(50);

            if(LevelName.find("LevelStreamingAlwaysLoaded") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            if(PackageName.find("None") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            if(PackageName.find("FoggyRain") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            if(PackageName.find("Weather") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            if(PackageName.find("PC") != std::string::npos)
            {
                //printf("Skipping level: %s\n", LevelName.c_str());
                //continue;
            }

            if(PackageName.find("FX") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            if(PackageName.find("Avatar") != std::string::npos)
            {
                //printf("Skipping level: %s\n", LevelName.c_str());
                //continue;
            }

            if(PackageName.find("Temp") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            if(PackageName.find("Dark") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            if(PackageName.find("Fog") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            if(PackageName.find("Night") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            if(PackageName.find("RainyDay") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            if (PackageName.find("Shannon") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            /*
            if(PackageName.find("advertisement") != std::string::npos)
            {
                printf("Skipping level: %s\n", LevelName.c_str());
                continue;
            }*/


            if (PackageName.find("Fly") != std::string::npos)
            {
                //printf("\n     Skipping level: %s\n", LevelName.c_str());
                continue;
            }

            /*
            if (PackageName.find("Tree") != std::string::npos)
            {
                printf("Skipping level: %s\n", LevelName.c_str());
                continue;
            }*/


            //ULevelStreaming_RequestLevel(StreamingLevel, World, true, EReqLevelBlock::AlwaysBlock);
           
            

            
            

            /*
            if(PackageName.find("Building") != std::string::npos)
            {
                StreamingLevel->bShouldBeLoaded = true;
                StreamingLevel->bShouldBeVisible = true;
                StreamingLevel->bDisableDistanceStreaming = true;

                continue;
            }*/
            

            // Force load and visibility for other levels
            StreamingLevel->bShouldBeLoaded = true;
            StreamingLevel->bShouldBeVisible = true;
            StreamingLevel->bDisableDistanceStreaming = true;
            
            //StreamingLevel->bShouldBlockOnLoad = true;

            SDK::FLatentActionInfo LatentInfo = {0};
            LatentInfo.CallbackTarget = nullptr;
            LatentInfo.ExecutionFunction = SDK::FName();
            LatentInfo.Linkage = 0;
            LatentInfo.UUID = 0;

            SDK::UGameplayStatics::LoadStreamLevel(World,
                                                    StreamingLevel->PackageNameToLoad,
                                                    true,
                                                    true,
                                                    LatentInfo);

            
            /*
            while(!StreamingLevel->IsLevelLoaded())
            {
                Sleep(50);
                printf("\n waiting level to load : [%s] \n", PackageName.c_str());
            } */
            
            
            //printf("\n Level [%s] Loaded, moving on to the next one. \n", LevelName.c_str());

        }
        else
        {
            continue;
        }
    }

    if(IsValidPtr(STExtraPlayerController))
    {
        if(IsValidPtr(World->WorldComposition))
        {
            STExtraPlayerController->LoadAllLand(true);
        }

        STExtraPlayerController->bIsBattleOwner = true;
        //stpc->bIsGM = true;
    }

    

    return 1; // all levels are loaded
}


int32_t DisableCullingForStaticActors()
{
    int i = 0;

    printf("\n DisableCullingForStaticActors Called \n");

    for(i = 0; i < SDK::UObject::GObjects->Num(); i++)
    {
        SDK::UObject* Object = SDK::UObject::GObjects->GetByIndex(i);
        if(!Object)
        {
            continue;
        }
            
        if(Object->IsA(SDK::AActor::StaticClass()))
        {
            SDK::AActor* Actor = (SDK::AActor*)Object;

            if(Actor->IsA(SDK::AStaticMeshActor::StaticClass()))
            {
                printf("Actor: %s\n", Actor->GetFullName().c_str());

                Actor->bAlwaysRelevant = true;
                Actor->NetDormancy = SDK::ENetDormancy::DORM_Awake;

                Actor->NetUpdateFrequency = 60.0f;
                Actor->NetCullDistanceSquared = FLT_MAX;

                Actor->SetActorEnableCollision(true);
                Actor->SetNetDormancy(SDK::ENetDormancy::DORM_Awake);
            }

            if(Actor->IsA(SDK::AStaticMeshActorFM::StaticClass()))
            {
                printf("Actor: %s\n", Actor->GetFullName().c_str());

                Actor->bAlwaysRelevant = true;
                Actor->NetDormancy = SDK::ENetDormancy::DORM_Awake;

                Actor->NetUpdateFrequency = 60.0f;
                Actor->NetCullDistanceSquared = FLT_MAX;

                Actor->SetActorEnableCollision(true);
                Actor->SetNetDormancy(SDK::ENetDormancy::DORM_Awake);
            }

            if(Actor->IsA(SDK::AUAENetActor::StaticClass()))
            {
                printf("Actor: %s\n", Actor->GetFullName().c_str());

                Actor->bAlwaysRelevant = true;
                Actor->NetDormancy = SDK::ENetDormancy::DORM_Awake;

                Actor->NetUpdateFrequency = 60.0f;
                Actor->NetCullDistanceSquared = FLT_MAX;

                Actor->SetActorEnableCollision(true);
                Actor->SetNetDormancy(SDK::ENetDormancy::DORM_Awake);

                TArray<SDK::UActorComponent*> Components = Actor->GetComponentsByClass(SDK::UPrimitiveComponent::StaticClass());
                {
                    int i = 0;
                    for (i = 0; i < Components.Num(); i++)
                    {
                        SDK::UPrimitiveComponent* Comp = (SDK::UPrimitiveComponent*)Components[i];

                        if (!Comp)
                            continue;

                        printf("COMP[%d] %s\n", i, Comp->GetFullName().c_str());
                    }
                }
            }
                

            
            

        }
    }

    return 0;
}

ENetMode(*GetNetModeO)(SDK::UNetDriver* NetDriver);
ENetMode GetNetModeHook(SDK::UNetDriver* NetDriver)
{

    //printf("\n GetNetMode Called  \n");

    return ENetMode::NM_DedicatedServer;
    //return ENetMode::NM_ListenServer;
}

DWORD Hook_GetNetMode()
{
    // 

    {
        uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xCFD600); // 7ff79e28d600

        GetNetModeO = decltype(GetNetModeO)(func_Addr);
        MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, GetNetModeHook, reinterpret_cast <LPVOID*> (&GetNetModeO));
        const char* HookResultString = MH_StatusToString(HookResult);

        if (HookResult != MH_STATUS::MH_OK)
        {
            printf("\n Hook GetNetMode() CREATED FAILED WITH REASON : %s !\n", HookResultString);
        }
        else
        {
            if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
            {
                printf("\n GetNetMode() Hook ENABLE FAILED! \n");
            }
            else
            {
                printf("\n GetNetMode() Hook Enabled! \n");
            }
        }
    } // -------------------------------------------------------------------------------------------------------------------------



    return 0;
}


// 0x7ff79f3e83e0
ENetMode(*T_UActorComponent_InternalGetNetMode)(SDK::UActorComponent*);
ENetMode hk_UActorComponent_InternalGetNetMode(SDK::UActorComponent* self)
{
    //void* caller = _ReturnAddress();

    return ENetMode::NM_DedicatedServer;
}

DWORD Hook_UActorComponent_InternalGetNetMode()
{

    // 0x7ff79f3e83e0
    {
        uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0x1E583E0); // 0x

        T_UActorComponent_InternalGetNetMode = decltype(T_UActorComponent_InternalGetNetMode)(func_Addr);
        MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UActorComponent_InternalGetNetMode, reinterpret_cast <LPVOID*> (&T_UActorComponent_InternalGetNetMode));
        const char* HookResultString = MH_StatusToString(HookResult);

        if (HookResult != MH_STATUS::MH_OK)
        {
            printf("\n Hook UActorComponent::InternalGetNetMode() CREATED FAILED WITH REASON : %s !\n", HookResultString);
        }
        else
        {
            if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
            {
                printf("\n UActorComponent::InternalGetNetMode() Hook ENABLE FAILED! \n");
            }
            else
            {
                printf("\n UActorComponent::InternalGetNetMode() Hook Enabled! \n");
            }
        }
    } // -------------------------------------------------------------------------------------------------------------------------



    return 0;
}


// FUN_7ff79da40180 =  ENetMode AActor::InternalGetNetMode(AActor *this)
ENetMode(*T_AActor_InternalGetNetMode)(SDK::AActor*);
ENetMode hk_AActor_InternalGetNetMode(SDK::AActor* self)
{
    //void* caller = _ReturnAddress();


    return ENetMode::NM_DedicatedServer;
}

DWORD Hook_AActor_InternalGetNetMode()
{
    // 0x7ff79da40180

    {
        uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0x4B0180); // 0x4B0180

        T_AActor_InternalGetNetMode = decltype(T_AActor_InternalGetNetMode)(func_Addr);
        MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_AActor_InternalGetNetMode, reinterpret_cast <LPVOID*> (&T_AActor_InternalGetNetMode));
        const char* HookResultString = MH_StatusToString(HookResult);

        if (HookResult != MH_STATUS::MH_OK)
        {
            printf("\n Hook AActor::InternalGetNetMode() CREATED FAILED WITH REASON : %s !\n", HookResultString);
        }
        else
        {
            if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
            {
                printf("\n AActor::InternalGetNetMode() Hook ENABLE FAILED! \n");
            }
            else
            {
                printf("\n AActor::InternalGetNetMode() Hook Enabled! \n");
            }
        }
    } // -------------------------------------------------------------------------------------------------------------------------



    return 0;
}

__int64 (*UpdateStreamingStateO)(SDK::UWorldComposition*);
__int64 UpdateStreamingStateHook(SDK::UWorldComposition* self)
{
    //std::cerr << "UpdateStreamingState CALLED by " << a1->GetName() << std::endl; 
    return UpdateStreamingStateO(self);
}


__int64 (*T_UWorld_ProcessLevelStreamingVolumes)(SDK::UWorld*, __int64*, __int64);
__int64 hk_UWorld_ProcessLevelStreamingVolumes(SDK::UWorld* self, __int64* a2, __int64 a3)
{
    return T_UWorld_ProcessLevelStreamingVolumes(self, a2, a3);
}


DWORD Hook_ProcessLevelStreamingVolumesHook()
{
    // 
    {
        uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0x1381480);

        T_UWorld_ProcessLevelStreamingVolumes = decltype(T_UWorld_ProcessLevelStreamingVolumes)(func_Addr);
        MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UWorld_ProcessLevelStreamingVolumes, reinterpret_cast <LPVOID*> (&T_UWorld_ProcessLevelStreamingVolumes));
        const char* HookResultString = MH_StatusToString(HookResult);

        if (HookResult != MH_STATUS::MH_OK)
        {
            printf("\n Hook UWorld::ProcessLevelStreamingVolumes() CREATED FAILED WITH REASON : %s !\n", HookResultString);
        }
        else
        {
            if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
            {
                printf("\n UWorld::ProcessLevelStreamingVolumes() Hook ENABLE FAILED! \n");
            }
            else
            {
                printf("\n UWorld::ProcessLevelStreamingVolumes() Hook Enabled! \n");
            }
        }
    } // -------------------------------------------------------------------------------------------------------------------------



    return 0;
}



bool IsGameplayStreamingLevel(SDK::ULevelStreaming* level)
{
    if(!level->IsA(SDK::ULevelStreamingKismet::StaticClass()) /*  || level->GetName().find("3") != std::string::npos */ )
    {
        return false;
    }

    
    {
        std::string LevelName = level->GetName();
        std::string PackageName = level->PackageNameToLoad.ToString().c_str();

        //printf("PACKAGE : %s\n", level->PackageNameToLoad.ToString().c_str());
        if(PackageName.find("FoggyRain") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("Weather") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("PC") != std::string::npos)
        {
            return true;
        }

        if (PackageName.find("FX") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("Avatar") != std::string::npos)
        {
            return true;
        }

        /*
        if(PackageName.find("Temp") != std::string::npos)
        {
            return true;
        }*/

        if (PackageName.find("Dark") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("Fog") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("Night") != std::string::npos)
        {
            return false;
        }

        if(PackageName.find("RainyDay") != std::string::npos)
        {
            return false;
        }

        if(PackageName.find("Shannon") != std::string::npos)
        {
            return false;
        }
    }

    return true;
}

SDK::AActor;
SDK::AStaticMeshActorFM;


/*

    uint FUN_7ff79e919fe0(longlong param_1)
    {
      return *(uint *)(param_1 + 0xc4) >> 5 & 0xffffff01;
    }
*/ 
bool (*T_ShouldBeLoaded)(SDK::ULevelStreaming*);
bool  hk_ShouldBeLoaded(SDK::ULevelStreaming* level)
{

    //return IsGameplayStreamingLevel(level);

    if(isStreamingPlayable == false)
    {
        return T_ShouldBeLoaded(level);
    }


    

    std::string LevelName = level->GetName();
    std::string PackageName = level->PackageNameToLoad.ToString().c_str();

    bool finalResult = T_ShouldBeLoaded(level);
    //printf("\n ULevelStreaming::ShouldBeLoaded() : Package[%s] | Result %s \n", PackageName.c_str(), finalResult ? "true" : "false");

    if (!level->IsA(SDK::ULevelStreamingKismet::StaticClass()))
    {
        //printf("\n ULevelStreaming::ShouldBeLoaded() : Package[%s] | Result %s \n", PackageName.c_str(), finalResult ? "true" : "false");
    }

    /*
    if(IsGameplayStreamingLevel(level))
    {
        return true;
    }
    else
    {
        return T_ShouldBeLoaded(level);
    } */

    //return finalResult;

    {
        std::string LevelName = level->GetName();
        std::string PackageName = level->PackageNameToLoad.ToString().c_str();

        //printf("PACKAGE : %s\n", level->PackageNameToLoad.ToString().c_str());
        if (PackageName.find("FoggyRain") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("Weather") != std::string::npos)
        {
            return false;
        }
        
        /*
        if (PackageName.find("PC") != std::string::npos)
        {
            return true;
        } */

        /*
        if (PackageName.find("FX") != std::string::npos)
        {
            return false;
        } */

        /*
        if (PackageName.find("Avatar") != std::string::npos)
        {
            return true;
        } */

        /*
        if(PackageName.find("Temp") != std::string::npos)
        {
            return true;
        }*/

        if (PackageName.find("Dark") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("Fog") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("Night") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("RainyDay") != std::string::npos)
        {
            return false;
        }

        /*
        if (PackageName.find("Shannon") != std::string::npos)
        {
            return false;
        }*/

        return true;
    }


    //return T_ShouldBeLoaded(level);
}


DWORD Hook_ULevelStreaming_ShouldBeLoaded()
{
    // 0x7FF79E919FE0
    {
        uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0x1389FE0);

        T_ShouldBeLoaded = decltype(T_ShouldBeLoaded)(func_Addr);
        MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_ShouldBeLoaded, reinterpret_cast <LPVOID*> (&T_ShouldBeLoaded));
        const char* HookResultString = MH_StatusToString(HookResult);

        if (HookResult != MH_STATUS::MH_OK)
        {
            printf("\n Hook ULevelStreaming::ShouldBeLoaded() CREATED FAILED WITH REASON : %s !\n", HookResultString);
        }
        else
        {
            if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
            {
                printf("\n ULevelStreaming::ShouldBeLoaded() Hook ENABLE FAILED! \n");
            }
            else
            {
                printf("\n ULevelStreaming::ShouldBeLoaded() Hook Enabled! \n");
            }
        }
    } // -------------------------------------------------------------------------------------------------------------------------



    return 0;
}


/*

bool FUN_7ff79e919ff0(longlong *param_1)
{
  char cVar1;
  undefined8 uVar2;

  uVar2 = (**(code **)(*param_1 + 0x138))();
  cVar1 = FUN_7ff79e1ea210(uVar2);
  if (cVar1 == '\0')
  {
    return (bool)((byte)(*(uint *)((longlong)param_1 + 0xc4) >> 3) & 1);
  }
  if ((*(uint *)((longlong)param_1 + 0xc4) & 0x40) != 0)
  {
    cVar1 = (**(code **)(*param_1 + 0x230))(param_1);
    if (cVar1 != '\0')
    {
      return true;
    }
  }
  return false;
}

*/
bool (*T_ShouldBeVisible)(SDK::ULevelStreaming*);
bool  hk_ShouldBeVisible(SDK::ULevelStreaming* level)
{

    if(isStreamingPlayable == false)
    {
        return T_ShouldBeVisible(level);
    }


    //return IsGameplayStreamingLevel(level);


    
    std::string LevelName = level->GetName();
    std::string PackageName = level->PackageNameToLoad.ToString().c_str();

    bool finalResult = T_ShouldBeLoaded(level);
    //printf("\n ULevelStreaming::ShouldBeLoaded() : Package[%s] | Result %s \n", PackageName.c_str(), finalResult ? "true" : "false");

    if (!level->IsA(SDK::ULevelStreamingKismet::StaticClass()))
    {
        //printf("\n ULevelStreaming::ShouldBeLoaded() : Package[%s] | Result %s \n", PackageName.c_str(), finalResult ? "true" : "false");
    }

    {
        std::string LevelName = level->GetName();
        std::string PackageName = level->PackageNameToLoad.ToString().c_str();

        //printf("PACKAGE : %s\n", level->PackageNameToLoad.ToString().c_str());
        if (PackageName.find("FoggyRain") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("Weather") != std::string::npos)
        {
            return false;
        }

        /*
        if (PackageName.find("PC") != std::string::npos)
        {
            return true;
        } */

        
        if (PackageName.find("FX") != std::string::npos)
        {
            return false;
        }

        /*
        if (PackageName.find("Avatar") != std::string::npos)
        {
            return true;
        } */

        
        if(PackageName.find("Temp") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("Dark") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("Fog") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("Night") != std::string::npos)
        {
            return false;
        }

        if (PackageName.find("RainyDay") != std::string::npos)
        {
            return false;
        }

        /*
        if (PackageName.find("Shannon") != std::string::npos)
        {
            return false;
        }*/

        return true;
    }

    //return true;

    //return T_ShouldBeVisible(level);
}


DWORD Hook_ULevelStreaming_ShouldBeVisible()
{
    // 0x7ff79e919ff0
    {
        uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0x1389FF0);

        T_ShouldBeVisible = decltype(T_ShouldBeVisible)(func_Addr);
        MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_ShouldBeVisible, reinterpret_cast <LPVOID*> (&T_ShouldBeVisible));
        const char* HookResultString = MH_StatusToString(HookResult);

        if (HookResult != MH_STATUS::MH_OK)
        {
            printf("\n Hook ULevelStreaming::ShouldBeVisible() CREATED FAILED WITH REASON : %s !\n", HookResultString);
        }
        else
        {
            if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
            {
                printf("\n ULevelStreaming::ShouldBeVisible() Hook ENABLE FAILED! \n");
            }
            else
            {
                printf("\n ULevelStreaming::ShouldBeVisible() Hook Enabled! \n");
            }
        }
    } // -------------------------------------------------------------------------------------------------------------------------



    return 0;
}










// 
bool (*T_ULevelStreaming_RequestLevel)(SDK::ULevelStreaming*, SDK::UWorld*, bool, EReqLevelBlock);
bool  hk_ULevelStreaming_RequestLevel(SDK::ULevelStreaming* self, SDK::UWorld* PersistentWorld, bool bAllowLevelLoadRequests, EReqLevelBlock BlockPolicy)
{

    printf("\n ULevelStreaming::RequestLevel() \n");

    std::string PackageName = self->PackageNameToLoad.ToString().c_str();
    printf("\n Package: %s \n", PackageName.c_str());

    /*
    if(self)
    {
        if(self->IsA(SDK::ULevelStreaming::StaticClass()))
        {
            printf("\n hook ULevelStreaming_RequestLevel() Self is ULevelStreaming \n");
        }
    }

    if (PersistentWorld)
    {
        if (PersistentWorld->IsA(SDK::UWorld::StaticClass()))
        {
            printf("\n hook ULevelStreaming_RequestLevel() PersistentWorld is UWorld \n");
        }
    }
     */

    printf("\n bAllowLevelLoadRequests = %s \n", bAllowLevelLoadRequests ? "true" : "false");

    switch(BlockPolicy)
    {
        case EReqLevelBlock::BlockAlwaysLoadedLevelsOnly: printf("\n BlockAlwaysLoadedLevelsOnly\n"); break;
        case EReqLevelBlock::AlwaysBlock: printf("\n AlwaysBlock \n"); break;
        case EReqLevelBlock::NeverBlock: printf("\n NeverBlock \n"); break;
    }

    return T_ULevelStreaming_RequestLevel(self, PersistentWorld, true, EReqLevelBlock::AlwaysBlock);

    //return T_ULevelStreaming_RequestLevel(self, PersistentWorld, bAllowLevelLoadRequests, BlockPolicy);
}


DWORD Hook_ULevelStreaming_RequestLevel()
{
    // 0x7ff79e916a90
    {
        uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0x1386A90);

        T_ULevelStreaming_RequestLevel = decltype(T_ULevelStreaming_RequestLevel)(func_Addr);
        MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_ULevelStreaming_RequestLevel, reinterpret_cast <LPVOID*> (&T_ULevelStreaming_RequestLevel));
        const char* HookResultString = MH_StatusToString(HookResult);

        if (HookResult != MH_STATUS::MH_OK)
        {
            printf("\n Hook ULevelStreaming::RequestLevel() CREATED FAILED WITH REASON : %s !\n", HookResultString);
        }
        else
        {
            if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
            {
                printf("\n ULevelStreaming::RequestLevel() Hook ENABLE FAILED! \n");
            }
            else
            {
                printf("\n ULevelStreaming::RequestLevel() Hook Enabled! \n");
            }
        }
    } // -------------------------------------------------------------------------------------------------------------------------



    return 0;
}







/*

[VTable Dump] Object: 000000001252AD50 | VTable pointer: 00007FF79FD54A40
  [  0] offset   0*8 = 0x000 | addr: 00007FF79D88D140



  [ 37] offset  37*8 = 0x128 | addr: 00007FF79DA49BE0



  // [ 65] offset  65*8 = 0x208 | addr: 00007FF79DA29CC0


  [ 78] offset  78*8 = 0x270 | addr: 00007FF79DA49C90


  //[111] offset 111*8 = 0x378 | addr: 00007FF79DA27150


  //[165] offset 165*8 = 0x528 | addr: 00007FF79DA37180
  
  
  // [171] offset 171*8 = 0x558 | addr: 00007FF79DA51520





*/

// sus functions
// undefined FUN_7ff79da49be0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)
// byte FUN_7ff79da49c90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
// ulonglong FUN_7ff79da50c20(longlong *param_1,undefined8 param_2,undefined8 param_3, undefined8 param_4)
// undefined8 FUN_7ff79da40c00(longlong* param_1, undefined8 param_2, longlong* param_3, undefined8 param_4)
// void FUN_7ff79da2e860(longlong *param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4)
// undefined8 FUN_7ff79da51520(longlong* param_1, undefined8 param_2, longlong* param_3, longlong* param_4, undefined8 param_5)


// bool FUN_7ff79da40c00(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)
bool (*T_AActor_IsNetRelevantFor)(SDK::AActor*, SDK::AActor*, SDK::AActor*, SDK::FVector*);
bool  hk_AActor_IsNetRelevantFor(SDK::AActor* self, SDK::AActor* RealViewer, SDK::AActor* ViewTarget, SDK::FVector* SrcLocation)
{
    bool finalResult = 0;

    printf("\n AActor::IsNetRelevantFor() Called \n");

    if(self)
    {
        finalResult = T_AActor_IsNetRelevantFor(self, RealViewer, ViewTarget, SrcLocation);

        printf("\n Actor: [%s] Result: %s \n", self->GetName().c_str(), finalResult ? "true" : "false");
        
        /*
        if(self->IsA(SDK::AStaticMeshActor::StaticClass()))
        {
            printf("\n AStaticMeshActor finalResult = %s \n", finalResult ? "true" : "false");
        }

        if(self->IsA(SDK::AStaticMeshActorFM::StaticClass()))
        {
            printf("\n AStaticMeshActorFM finalResult = %s \n", finalResult ? "true" : "false");
        }

        if(self->IsA(SDK::AUAEHouseActor::StaticClass()))
        {
            printf("\n AUAEHouseActor finalResult = %s \n", finalResult ? "true" : "false");
        } */


    }

    /*
    if(RealViewer)
    {
        if(RealViewer->IsA(SDK::AActor::StaticClass()))
        {
            printf("\n RealViewer is a Actor \n");
        }
    }
    else
    {
        printf("\n RealViewer is NULL \n");
    }

    if(ViewTarget)
    {
        if(ViewTarget->IsA(SDK::AActor::StaticClass()))
        {
            printf("\n ViewTarget is a Actor \n");
        }
    }
    else
    {
        printf("\n ViewTarget is NULL \n");
    }

    if(SrcLocation)
    {
        printf("\n SrcLocation: X:%f / Y:%f / Z:%f \n", SrcLocation->X, SrcLocation->Y, SrcLocation->Z);
    } */

    finalResult = T_AActor_IsNetRelevantFor(self, RealViewer, ViewTarget, SrcLocation);

    //printf("\n finalResult = %s \n", finalResult ? "true" : "false");

    return finalResult;
}


DWORD Hook_AActor_IsNetRelevantFor()
{
    // 0x
    {
        uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0x4B0C00);

        T_AActor_IsNetRelevantFor = decltype(T_AActor_IsNetRelevantFor)(func_Addr);
        MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_AActor_IsNetRelevantFor, reinterpret_cast <LPVOID*> (&T_AActor_IsNetRelevantFor));
        const char* HookResultString = MH_StatusToString(HookResult);

        if (HookResult != MH_STATUS::MH_OK)
        {
            printf("\n Hook AActor::IsNetRelevantFor() CREATED FAILED WITH REASON : %s !\n", HookResultString);
        }
        else
        {
            if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
            {
                printf("\n AActor::IsNetRelevantFor( Hook ENABLE FAILED! \n");
            }
            else
            {
                printf("\n AActor::IsNetRelevantFor( Hook Enabled! \n");
            }
        }
    } // -------------------------------------------------------------------------------------------------------------------------



    return 0;
}

using IsDistanceDependentLevelFn = bool(__fastcall*)(SDK::UWorldComposition*, SDK::FName );
IsDistanceDependentLevelFn oIsDistanceDependentLevel = nullptr;

bool __fastcall hkIsDistanceDependentLevel(SDK::UWorldComposition* __this, SDK::FName a2)
{
    return false;
}

DWORD HookDistanceStreaming()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xC5A140); // 0x4B0180

    oIsDistanceDependentLevel = decltype(oIsDistanceDependentLevel)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hkIsDistanceDependentLevel, reinterpret_cast <LPVOID*> (&oIsDistanceDependentLevel));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook IsDistanceDependentLevel CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n IsDistanceDependentLevel Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n IsDistanceDependentLevel Hook Enabled! \n");
        }
    }

    return 0;
}


using IsTileVisibleFn = bool(__fastcall*)(void* WorldComposition, int TileIndex);

IsTileVisibleFn oIsTileVisible = nullptr;

bool __fastcall hkIsTileVisible(void* WorldComposition, int TileIndex)
{
    return true;
}

DWORD HookTileVisibility()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0x193BEB0);

    oIsTileVisible = decltype(oIsTileVisible)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hkIsTileVisible, reinterpret_cast <LPVOID*> (&oIsTileVisible));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook hkIsTileVisible CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n hkIsTileVisible Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n hkIsTileVisible Hook Enabled! \n");
        }
    }

    return 0;
}




__int64 (*ProcessLevelStreamingVolumesO)(__int64 a1, __int64* a2, __int64 a3);
__int64 ProcessLevelStreamingVolumesHook(__int64 a1, __int64* a2, __int64 a3)
{
    return 0;
    //return ProcessLevelStreamingVolumesO(a1, a2, a3);
}


DWORD Hook_ProcessLevelStreamingVolumes()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0x1381480);

    ProcessLevelStreamingVolumesO = decltype(ProcessLevelStreamingVolumesO)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, ProcessLevelStreamingVolumesHook, reinterpret_cast <LPVOID*> (&ProcessLevelStreamingVolumesO));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook ProcessLevelStreamingVolumes CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n ProcessLevelStreamingVolumes Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n ProcessLevelStreamingVolumes Hook Enabled! \n");
        }
    }

    return 0;
}

/*

=================

 GenerateSpots : [00007FF79D7B0910]

 RegisterGroupSpotComponent : [00007FF79E5077E0]

 RegisterSpotComponentToTick : [00007FF79E508790]

 RegisterWorldTileSpot : [00007FF79E508BE0]

 =================
*/


void (*T_UBaseGeneratorComponent_RegisterGroupSpotComponent)(SDK::UBaseGeneratorComponent*, SDK::UGroupSpotSceneComponent*);
void hk_UBaseGeneratorComponent_RegisterGroupSpotComponent(SDK::UBaseGeneratorComponent* self, SDK::UGroupSpotSceneComponent* GroupSpotComponent)
{
    printf("\n UBaseGeneratorComponent::RegisterGroupSpotComponent() called \n");

    printf("\n [%s] \n", self->GetName().c_str());

    return T_UBaseGeneratorComponent_RegisterGroupSpotComponent(self, GroupSpotComponent);
}


DWORD Hook_UBaseGeneratorComponent_RegisterGroupSpotComponent()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF78790);

    T_UBaseGeneratorComponent_RegisterGroupSpotComponent = decltype(T_UBaseGeneratorComponent_RegisterGroupSpotComponent)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UBaseGeneratorComponent_RegisterGroupSpotComponent, reinterpret_cast <LPVOID*> (&T_UBaseGeneratorComponent_RegisterGroupSpotComponent));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UBaseGeneratorComponent::RegisterGroupSpotComponent() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UBaseGeneratorComponent::RegisterGroupSpotComponent() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UBaseGeneratorComponent::RegisterGroupSpotComponent() Hook Enabled! \n");
        }
    }

    return 0;
}




void (*T_UBaseGeneratorComponent_RegisterSpotComponentToTick)(SDK::UBaseGeneratorComponent*, SDK::USpotSceneComponent*);
void hk_UBaseGeneratorComponent_RegisterSpotComponentToTick(SDK::UBaseGeneratorComponent* self, SDK::USpotSceneComponent* GroupSpotComponent)
{
    printf("\n UBaseGeneratorComponent::RegisterSpotComponentToTick() called \n");

    printf("\n [%s] \n", self->GetName().c_str());

    return T_UBaseGeneratorComponent_RegisterSpotComponentToTick(self, GroupSpotComponent);
}


DWORD Hook_UBaseGeneratorComponent_RegisterSpotComponentToTick()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF777E0);

    T_UBaseGeneratorComponent_RegisterSpotComponentToTick = decltype(T_UBaseGeneratorComponent_RegisterSpotComponentToTick)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UBaseGeneratorComponent_RegisterSpotComponentToTick, reinterpret_cast <LPVOID*> (&T_UBaseGeneratorComponent_RegisterSpotComponentToTick));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UBaseGeneratorComponent::RegisterSpotComponentToTick() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UBaseGeneratorComponent::RegisterSpotComponentToTick() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UBaseGeneratorComponent::RegisterSpotComponentToTick() Hook Enabled! \n");
        }
    }

    return 0;
}





void (*T_UBaseGeneratorComponent_RegisterWorldTileSpot)(SDK::UBaseGeneratorComponent*, SDK::USpotSceneComponent*);
void hk_UBaseGeneratorComponent_RegisterWorldTileSpot(SDK::UBaseGeneratorComponent* self, SDK::USpotSceneComponent* GroupSpotComponent)
{
    printf("\n UBaseGeneratorComponent::RegisterWorldTileSpot() called \n");

    printf("\n [%s] \n", self->GetName().c_str());

    return T_UBaseGeneratorComponent_RegisterWorldTileSpot(self, GroupSpotComponent);
}


DWORD Hook_UBaseGeneratorComponent_RegisterWorldTileSpot()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF78BE0);

    T_UBaseGeneratorComponent_RegisterWorldTileSpot = decltype(T_UBaseGeneratorComponent_RegisterWorldTileSpot)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UBaseGeneratorComponent_RegisterWorldTileSpot, reinterpret_cast <LPVOID*> (&T_UBaseGeneratorComponent_RegisterWorldTileSpot));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UBaseGeneratorComponent::RegisterWorldTileSpot() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UBaseGeneratorComponent::RegisterWorldTileSpot() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UBaseGeneratorComponent::RegisterWorldTileSpot() Hook Enabled! \n");
        }
    }

    return 0;
}
























void (*T_UItemGeneratorComponent_DeleteBornIslandItems)(SDK::UItemGeneratorComponent*);
void hk_UItemGeneratorComponent_DeleteBornIslandItems(SDK::UItemGeneratorComponent* self)
{
    printf("\n UItemGeneratorComponent::DeleteBornIslandItems() called \n");
    return T_UItemGeneratorComponent_DeleteBornIslandItems(self);
}


DWORD Hook_UItemGeneratorComponent_DeleteBornIslandItems()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF61B00);

    T_UItemGeneratorComponent_DeleteBornIslandItems = decltype(T_UItemGeneratorComponent_DeleteBornIslandItems)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_DeleteBornIslandItems, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_DeleteBornIslandItems));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent_DeleteBornIslandItems CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent_DeleteBornIslandItems Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent_DeleteBornIslandItems Hook Enabled! \n");
        }
    }

    return 0;
}

void (*T_UItemGeneratorComponent_DeleteValidGroups)(SDK::UItemGeneratorComponent*);
void hk_UItemGeneratorComponent_DeleteValidGroups(SDK::UItemGeneratorComponent* self)
{
    printf("\n UItemGeneratorComponent::DeleteValidGroups() called \n");
    return T_UItemGeneratorComponent_DeleteValidGroups(self);
}


DWORD Hook_UItemGeneratorComponent_DeleteValidGroups()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF61E40);

    T_UItemGeneratorComponent_DeleteValidGroups = decltype(T_UItemGeneratorComponent_DeleteValidGroups)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_DeleteValidGroups, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_DeleteValidGroups));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::DeleteValidGroups() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::DeleteValidGroups() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::DeleteValidGroups() Hook Enabled! \n");
        }
    }

    return 0;
}


void (*T_UItemGeneratorComponent_GenerateSpotOnTick)(SDK::UItemGeneratorComponent*);
void hk_UItemGeneratorComponent_GenerateSpotOnTick(SDK::UItemGeneratorComponent* self)
{
    printf("\n UItemGeneratorComponent::GenerateSpotOnTick() called \n");
    return T_UItemGeneratorComponent_GenerateSpotOnTick(self);
}


DWORD Hook_UItemGeneratorComponent_GenerateSpotOnTick()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF65F10);

    T_UItemGeneratorComponent_GenerateSpotOnTick = decltype(T_UItemGeneratorComponent_GenerateSpotOnTick)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_GenerateSpotOnTick, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_GenerateSpotOnTick));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::GenerateSpotOnTick() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::GenerateSpotOnTick() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::GenerateSpotOnTick() Hook Enabled! \n");
        }
    }

    return 0;
}

// 7ff79e4effd0 | void UBaseGeneratorComponent::CheckTileLevelsVisible(void *param_1)
// vtable + 0x3d8 | UBaseGeneratorComponent::GenerateSpots()
// 7ff79e4f61e0 | void UBaseGeneratorComponent::GeneratorWorldTileSpots(longlong *param_1,undefined4 *param_2)
// vtable + 0x3e0 | UBaseGeneratorComponent::RegisterGroupSpotComponent()
// vtable + 1000 | UBaseGeneratorComponent::RegisterSpotComponentToTick
// vtalbe + 0x3f0 | UBaseGeneratorComponent::RegisterWorldTileSpot()

float (*T_UItemGeneratorComponent_GetCatetoryRate)(SDK::UItemGeneratorComponent*, SDK::FString*);
float hk_UItemGeneratorComponent_GetCatetoryRate(SDK::UItemGeneratorComponent* self, SDK::FString* Catetory)
{
    printf("\n UItemGeneratorComponent::GetCatetoryRate() called \n");
    return T_UItemGeneratorComponent_GetCatetoryRate(self, Catetory);
}


DWORD Hook_UItemGeneratorComponent_GetCatetoryRate()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF66490);

    T_UItemGeneratorComponent_GetCatetoryRate = decltype(T_UItemGeneratorComponent_GetCatetoryRate)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_GetCatetoryRate, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_GetCatetoryRate));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::GetCatetoryRate() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::GetCatetoryRate() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::GetCatetoryRate() Hook Enabled! \n");
        }
    }

    return 0;
}



uint8_t (*T_UItemGeneratorComponent_GetRandomItemClassArray)(SDK::UItemGeneratorComponent*, SDK::FString*, SDK::FString*, SDK::TArray<SDK::FItemGenerateSpawnClass>*, uint8_t);
uint8_t hk_UItemGeneratorComponent_GetRandomItemClassArray(SDK::UItemGeneratorComponent* self,  
                                                           SDK::FString* Value, 
                                                           SDK::FString* Category,
                                                           SDK::TArray<SDK::FItemGenerateSpawnClass>* Results,
                                                           uint8_t RepeatGenerateItem)
{
    printf("\n UItemGeneratorComponent::GetRandomItemClassArray() called \n");
    return T_UItemGeneratorComponent_GetRandomItemClassArray(self, Value, Category, Results, RepeatGenerateItem);
}


DWORD Hook_UItemGeneratorComponent_GetRandomItemClassArray()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF69510);

    T_UItemGeneratorComponent_GetRandomItemClassArray = decltype(T_UItemGeneratorComponent_GetRandomItemClassArray)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_GetRandomItemClassArray, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_GetRandomItemClassArray));
    const char* HookResultString = MH_StatusToString(HookResult);

    if(HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::GetRandomItemClassArray() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::GetRandomItemClassArray() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::GetRandomItemClassArray() Hook Enabled! \n");
        }
    }

    return 0;
}



SDK::FSpotGroupProperty (*T_UItemGeneratorComponent_GetSpotGroupPropertyByGroupType)(SDK::UItemGeneratorComponent*, SDK::ESpotGroupType);
SDK::FSpotGroupProperty hk_UItemGeneratorComponent_GetSpotGroupPropertyByGroupType(SDK::UItemGeneratorComponent* self, SDK::ESpotGroupType SpotGroupType)
{
    printf("\n UItemGeneratorComponent::GetSpotGroupPropertyByGroupType() called \n");
    return T_UItemGeneratorComponent_GetSpotGroupPropertyByGroupType(self, SpotGroupType);
}


DWORD Hook_UItemGeneratorComponent_GetSpotGroupPropertyByGroupType()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF6A380);

    T_UItemGeneratorComponent_GetSpotGroupPropertyByGroupType = decltype(T_UItemGeneratorComponent_GetSpotGroupPropertyByGroupType)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_GetSpotGroupPropertyByGroupType, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_GetSpotGroupPropertyByGroupType));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::GetSpotGroupPropertyByGroupType() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::GetSpotGroupPropertyByGroupType() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::GetSpotGroupPropertyByGroupType() Hook Enabled! \n");
        }
    }

    return 0;
}



void (*T_UItemGeneratorComponent_InitCatetorys)(SDK::UItemGeneratorComponent*);
void hk_UItemGeneratorComponent_InitCatetorys(SDK::UItemGeneratorComponent* self)
{
    printf("\n UItemGeneratorComponent::InitCatetorys() called \n");
    return T_UItemGeneratorComponent_InitCatetorys(self);
}


DWORD Hook_UItemGeneratorComponent_InitCatetorys()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF6BFD0);

    T_UItemGeneratorComponent_InitCatetorys = decltype(T_UItemGeneratorComponent_InitCatetorys)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_InitCatetorys, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_InitCatetorys));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::InitCatetorys() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::InitCatetorys() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::InitCatetorys() Hook Enabled! \n");
        }
    }

    return 0;
}




uint8_t (*T_UItemGeneratorComponent_IsCatetoryEnabled)(SDK::UItemGeneratorComponent*);
uint8_t hk_UItemGeneratorComponent_IsCatetoryEnabled(SDK::UItemGeneratorComponent* self)
{
    printf("\n UItemGeneratorComponent::IsCatetoryEnabled() called \n");
    return T_UItemGeneratorComponent_IsCatetoryEnabled(self);
}


DWORD Hook_UItemGeneratorComponent_IsCatetoryEnabled()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF6D340);

    T_UItemGeneratorComponent_IsCatetoryEnabled = decltype(T_UItemGeneratorComponent_IsCatetoryEnabled)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_IsCatetoryEnabled, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_IsCatetoryEnabled));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::IsCatetoryEnabled() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::IsCatetoryEnabled() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::IsCatetoryEnabled() Hook Enabled! \n");
        }
    }

    return 0;
}



void (*T_UItemGeneratorComponent_LoadSpotGroupPropertyData)(SDK::UItemGeneratorComponent*);
void hk_UItemGeneratorComponent_LoadSpotGroupPropertyData(SDK::UItemGeneratorComponent* self)
{
    printf("\n UItemGeneratorComponent::LoadSpotGroupPropertyData() called \n");
    return T_UItemGeneratorComponent_LoadSpotGroupPropertyData(self);
}


DWORD Hook_UItemGeneratorComponent_LoadSpotGroupPropertyData()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF6DA70);

    T_UItemGeneratorComponent_LoadSpotGroupPropertyData = decltype(T_UItemGeneratorComponent_LoadSpotGroupPropertyData)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_LoadSpotGroupPropertyData, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_LoadSpotGroupPropertyData));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::LoadSpotGroupPropertyData() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::LoadSpotGroupPropertyData() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::LoadSpotGroupPropertyData() Hook Enabled! \n");
        }
    }

    return 0;
}


void (*T_UItemGeneratorComponent_RandomBornIslandGroups)(SDK::UItemGeneratorComponent*);
void hk_UItemGeneratorComponent_RandomBornIslandGroups(SDK::UItemGeneratorComponent* self)
{
    printf("\n UItemGeneratorComponent::RandomBornIslandGroups() called \n");
    return T_UItemGeneratorComponent_RandomBornIslandGroups(self);
}


DWORD Hook_UItemGeneratorComponent_RandomBornIslandGroups()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF73C10);

    T_UItemGeneratorComponent_RandomBornIslandGroups = decltype(T_UItemGeneratorComponent_RandomBornIslandGroups)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_RandomBornIslandGroups, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_RandomBornIslandGroups));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::RandomBornIslandGroups() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::RandomBornIslandGroups() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::RandomBornIslandGroups() Hook Enabled! \n");
        }
    }

    return 0;
}


void (*T_UItemGeneratorComponent_RandomGroups)(SDK::UItemGeneratorComponent*);
void hk_UItemGeneratorComponent_RandomGroups(SDK::UItemGeneratorComponent* self)
{
    printf("\n UItemGeneratorComponent::RandomGroups() called \n");
    return T_UItemGeneratorComponent_RandomGroups(self);
}


DWORD Hook_UItemGeneratorComponent_RandomGroups()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF74160);

    T_UItemGeneratorComponent_RandomGroups = decltype(T_UItemGeneratorComponent_RandomGroups)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_RandomGroups, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_RandomGroups));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::RandomGroups() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::RandomGroups() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::RandomGroups() Hook Enabled! \n");
        }
    }

    return 0;
}


void (*T_UItemGeneratorComponent_RandomGroupsByType)(SDK::UItemGeneratorComponent*, SDK::FSpotGroupProperty*);
void hk_UItemGeneratorComponent_RandomGroupsByType(SDK::UItemGeneratorComponent* self, SDK::FSpotGroupProperty* GroupProperty)
{
    printf("\n UItemGeneratorComponent::RandomGroupsByType() called \n");
    return T_UItemGeneratorComponent_RandomGroupsByType(self, GroupProperty);
}


DWORD Hook_UItemGeneratorComponent_RandomGroupsByType()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF74750);

    T_UItemGeneratorComponent_RandomGroupsByType = decltype(T_UItemGeneratorComponent_RandomGroupsByType)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_RandomGroupsByType, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_RandomGroupsByType));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::RandomGroupsByType() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::RandomGroupsByType() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::RandomGroupsByType() Hook Enabled! \n");
        }
    }

    return 0;
}


SDK::FItemGenerateSpawnData (*T_UItemGeneratorComponent_RandomItemGenerateSpawnData)(SDK::UItemGeneratorComponent*, UC::TArray<SDK::FItemGenerateSpawnData>*);
SDK::FItemGenerateSpawnData hk_UItemGeneratorComponent_RandomItemGenerateSpawnData(SDK::UItemGeneratorComponent* self, UC::TArray<SDK::FItemGenerateSpawnData>* Items)
{
    printf("\n UItemGeneratorComponent::RandomItemGenerateSpawnData() called \n");
    return T_UItemGeneratorComponent_RandomItemGenerateSpawnData(self, Items);
}


DWORD Hook_UItemGeneratorComponent_RandomItemGenerateSpawnData()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF74A30);

    T_UItemGeneratorComponent_RandomItemGenerateSpawnData = decltype(T_UItemGeneratorComponent_RandomItemGenerateSpawnData)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_RandomItemGenerateSpawnData, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_RandomItemGenerateSpawnData));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::RandomItemGenerateSpawnData() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::RandomItemGenerateSpawnData() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::RandomItemGenerateSpawnData() Hook Enabled! \n");
        }
    }

    return 0;
}


SDK::UItemGroupSpotSceneComponent* (*T_UItemGeneratorComponent_RandomSingleGroup)(SDK::UItemGeneratorComponent*, UC::TArray<SDK::UGroupSpotSceneComponent*>*, SDK::FSpotGroupProperty*);
SDK::UItemGroupSpotSceneComponent* hk_UItemGeneratorComponent_RandomSingleGroup(SDK::UItemGeneratorComponent* self, UC::TArray<SDK::UGroupSpotSceneComponent*>* Groups, SDK::FSpotGroupProperty* GroupProperty)
{
    printf("\n UItemGeneratorComponent::RandomSingleGroup() called \n");
    return T_UItemGeneratorComponent_RandomSingleGroup(self, Groups, GroupProperty);
}


DWORD Hook_UItemGeneratorComponent_RandomSingleGroup()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF74F30);

    T_UItemGeneratorComponent_RandomSingleGroup = decltype(T_UItemGeneratorComponent_RandomSingleGroup)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_RandomSingleGroup, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_RandomSingleGroup));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::RandomSingleGroup() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::RandomSingleGroup() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::RandomSingleGroup() Hook Enabled! \n");
        }
    }

    return 0;
}


void (*T_UItemGeneratorComponent_RegisterBornIslandItem)(SDK::UItemGeneratorComponent*, SDK::AActor*);
void hk_UItemGeneratorComponent_RegisterBornIslandItem(SDK::UItemGeneratorComponent* self, SDK::AActor* Item)
{
    printf("\n UItemGeneratorComponent::RegisterBornIslandItem() called \n");
    return T_UItemGeneratorComponent_RegisterBornIslandItem(self, Item);
}


DWORD Hook_UItemGeneratorComponent_RegisterBornIslandItem()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF77620);

    T_UItemGeneratorComponent_RegisterBornIslandItem = decltype(T_UItemGeneratorComponent_RegisterBornIslandItem)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_RegisterBornIslandItem, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_RegisterBornIslandItem));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::RegisterBornIslandItem() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::RegisterBornIslandItem() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::RegisterBornIslandItem() Hook Enabled! \n");
        }
    }

    return 0;
}



void (*T_UItemGeneratorComponent_RegisterItemGenerateSpawnData)(SDK::UItemGeneratorComponent*, SDK::FItemGenerateSpawnData*);
void hk_UItemGeneratorComponent_RegisterItemGenerateSpawnData(SDK::UItemGeneratorComponent* self, SDK::FItemGenerateSpawnData* Data)
{
    printf("\n UItemGeneratorComponent::RegisterItemGenerateSpawnData() called \n");
    return T_UItemGeneratorComponent_RegisterItemGenerateSpawnData(self, Data);
}


DWORD Hook_UItemGeneratorComponent_RegisterItemGenerateSpawnData()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF78010);

    T_UItemGeneratorComponent_RegisterItemGenerateSpawnData = decltype(T_UItemGeneratorComponent_RegisterItemGenerateSpawnData)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_RegisterItemGenerateSpawnData, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_RegisterItemGenerateSpawnData));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::RegisterItemGenerateSpawnData() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::RegisterItemGenerateSpawnData() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::RegisterItemGenerateSpawnData() Hook Enabled! \n");
        }
    }

    return 0;
}



void (*T_UItemGeneratorComponent_SaveSpotGroupPropertyData)(SDK::UItemGeneratorComponent*);
void hk_UItemGeneratorComponent_SaveSpotGroupPropertyData(SDK::UItemGeneratorComponent* self)
{
    printf("\n UItemGeneratorComponent::SaveSpotGroupPropertyData() called \n");
    return T_UItemGeneratorComponent_SaveSpotGroupPropertyData(self);
}


DWORD Hook_UItemGeneratorComponent_SaveSpotGroupPropertyData()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF7B610);

    T_UItemGeneratorComponent_SaveSpotGroupPropertyData = decltype(T_UItemGeneratorComponent_SaveSpotGroupPropertyData)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_SaveSpotGroupPropertyData, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_SaveSpotGroupPropertyData));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::SaveSpotGroupPropertyData() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::SaveSpotGroupPropertyData() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::SaveSpotGroupPropertyData() Hook Enabled! \n");
        }
    }

    return 0;
}


void (*T_UItemGeneratorComponent_SetCatetoryRate)(SDK::UItemGeneratorComponent*, SDK::TMap<SDK::FString, float>*);
void hk_UItemGeneratorComponent_SetCatetoryRate(SDK::UItemGeneratorComponent* self, SDK::TMap<SDK::FString, float>* Rates)
{
    printf("\n UItemGeneratorComponent::SetCatetoryRate() called \n");
    return T_UItemGeneratorComponent_SetCatetoryRate(self, Rates);
}


DWORD Hook_UItemGeneratorComponent_SetCatetoryRate()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF7BB40);

    T_UItemGeneratorComponent_SetCatetoryRate = decltype(T_UItemGeneratorComponent_SetCatetoryRate)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_SetCatetoryRate, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_SetCatetoryRate));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::SetCatetoryRate() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::SetCatetoryRate() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::SetCatetoryRate() Hook Enabled! \n");
        }
    }

    return 0;
}




void (*T_UItemGeneratorComponent_WriteAllStatisticsDatasToLog)(SDK::UItemGeneratorComponent*);
void hk_UItemGeneratorComponent_WriteAllStatisticsDatasToLog(SDK::UItemGeneratorComponent* self)
{
    printf("\n UItemGeneratorComponent::WriteAllStatisticsDatasToLog() called \n");
    return T_UItemGeneratorComponent_WriteAllStatisticsDatasToLog(self);
}


DWORD Hook_UItemGeneratorComponent_WriteAllStatisticsDatasToLog()
{
    uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + 0xF7EE80);

    T_UItemGeneratorComponent_WriteAllStatisticsDatasToLog = decltype(T_UItemGeneratorComponent_WriteAllStatisticsDatasToLog)(func_Addr);
    MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, hk_UItemGeneratorComponent_WriteAllStatisticsDatasToLog, reinterpret_cast <LPVOID*> (&T_UItemGeneratorComponent_WriteAllStatisticsDatasToLog));
    const char* HookResultString = MH_StatusToString(HookResult);

    if (HookResult != MH_STATUS::MH_OK)
    {
        printf("\n Hook UItemGeneratorComponent::WriteAllStatisticsDatasToLog() CREATED FAILED WITH REASON : %s !\n", HookResultString);
    }
    else
    {
        if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
        {
            printf("\n UItemGeneratorComponent::WriteAllStatisticsDatasToLog() Hook ENABLE FAILED! \n");
        }
        else
        {
            printf("\n UItemGeneratorComponent::WriteAllStatisticsDatasToLog() Hook Enabled! \n");
        }
    }

    return 0;
}















#include <wininet.h>
#pragma comment(lib, "wininet.lib")

#define STR(x) #x
#define XSTR(x) STR(x)

//#define COSMETIC_API_IP 217.199.220.41
#define COSMETIC_API_IP 127.0.0.1
#define COSMETIC_API_PORT 3000

typedef enum
{
    REQ_SUCCESS,   // 200 OK
    REQ_NOT_FOUND, // 404 Not Found
    REQ_CONN_ERROR // Connection Error / Timeout / Server Down
} HttpRequestResult;

// Generic helper function to perform a GET request and capture the status code.
static HttpRequestResult ExecuteHttpGet(const char* urlPath, char** outResponseData)
{
    HINTERNET hInternet = NULL;
    HINTERNET hConnect = NULL;
    HINTERNET hRequest = NULL;
    HttpRequestResult result = REQ_CONN_ERROR;

    // Short timeouts (2 seconds) to avoid blocking the Tick Thread if the API goes down.
    DWORD timeoutMs = 2000;

    hInternet = InternetOpenA("PUBG_Custom_Client/1.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, 0);
    if (!hInternet) return REQ_CONN_ERROR;

    // Configures session timeouts
    InternetSetOptionA(hInternet, INTERNET_OPTION_CONNECT_TIMEOUT, &timeoutMs, sizeof(timeoutMs));
    InternetSetOptionA(hInternet, INTERNET_OPTION_RECEIVE_TIMEOUT, &timeoutMs, sizeof(timeoutMs));

    hConnect = InternetConnectA(hInternet, XSTR(COSMETIC_API_IP), COSMETIC_API_PORT, NULL, NULL, INTERNET_SERVICE_HTTP, 0, 0);
    if (!hConnect)
    {
        InternetCloseHandle(hInternet);
        return REQ_CONN_ERROR;
    }

    // ---------------------------------------------------------------------------------
    // CRITICAL: INTERNET_FLAG_RELOAD and INTERNET_FLAG_NO_CACHE_WRITE kill the internal WinINet cache!
    // ---------------------------------------------------------------------------------
    DWORD flags = INTERNET_FLAG_RELOAD | INTERNET_FLAG_NO_CACHE_WRITE | INTERNET_FLAG_PRAGMA_NOCACHE;

    hRequest = HttpOpenRequestA(hConnect, "GET", urlPath, NULL, NULL, NULL, flags, 0);
    if (!hRequest)
    {
        InternetCloseHandle(hConnect);
        InternetCloseHandle(hInternet);
        return REQ_CONN_ERROR;
    }

    if (HttpSendRequestA(hRequest, NULL, 0, NULL, 0))
    {
        // 1. READS THE HTTP STATUS CODE (200, 404, 500, etc.)
        DWORD statusCode = 0;
        DWORD statusCodeLen = sizeof(statusCode);

        HttpQueryInfoA(hRequest, HTTP_QUERY_STATUS_CODE | HTTP_QUERY_FLAG_NUMBER,
            &statusCode, &statusCodeLen, NULL);

        if (statusCode == 200)
        {
            // Read the response body
            char buffer[1024];
            DWORD bytesRead = 0;
            char* responseData = NULL;
            size_t totalBytes = 0;

            while (InternetReadFile(hRequest, buffer, sizeof(buffer) - 1, &bytesRead) && bytesRead > 0)
            {
                buffer[bytesRead] = '\0';
                char* newMem = (char*)realloc(responseData, totalBytes + bytesRead + 1);
                if (!newMem) { free(responseData); responseData = NULL; break; }
                responseData = newMem;
                memcpy(responseData + totalBytes, buffer, bytesRead);
                totalBytes += bytesRead;
                responseData[totalBytes] = '\0';
            }

            *outResponseData = responseData;
            result = REQ_SUCCESS;
        }
        else if (statusCode == 404)
        {
            result = REQ_NOT_FOUND; // Returned a 404!
        }
        else
        {
            result = REQ_CONN_ERROR; // Another HTTP error (500, 502, etc.)
        }
    }
    else
    {
        result = REQ_CONN_ERROR; // Connection failure (Socket error)
    }

    if (hRequest) InternetCloseHandle(hRequest);
    if (hConnect) InternetCloseHandle(hConnect);
    if (hInternet) InternetCloseHandle(hInternet);

    return result;
}

typedef enum {
    FETCH_OK,          // Found and populated the cJSON
    FETCH_NOT_FOUND,   // Got a 404 on BOTH (Player and Guest).
    FETCH_RETRY_LATER  // A connection error occurred (You should try again in the Tick Thread)
} FetchStatus;

// Parses the cJSONand populates the player struct.
static bool ParseJsonToPlayer(const char* jsonStr, CharacterPlayerData* player)
{
    if (!jsonStr) return false;
    cJSON* json = cJSON_Parse(jsonStr);
    if (!json) return false;

    cJSON* item = cJSON_GetObjectItemCaseSensitive(json, "face_ID");
    if (cJSON_IsNumber(item)) player->appearenceData.face_ID = item->valueint;
    printf("\n ParseJsonToPlayer(): face_ID: %i\n", item->valueint);

    item = cJSON_GetObjectItemCaseSensitive(json, "hair_ID");
    if (cJSON_IsNumber(item)) player->appearenceData.hair_ID = item->valueint;
    printf("\n ParseJsonToPlayer(): hair_ID: %i\n", item->valueint);

    item = cJSON_GetObjectItemCaseSensitive(json, "gender_ID");
    if (cJSON_IsNumber(item)) player->appearenceData.gender_ID = item->valueint;
    printf("\n ParseJsonToPlayer(): gender_ID: %i\n", item->valueint);

    cJSON_Delete(json);
    return true;
}

// 2-LEVEL FALLBACK LOGIC
FetchStatus FetchPlayerAppearanceWithFallback(CharacterPlayerData* player)
{
    char urlPath[256];
    char* jsonResponse = NULL;

    printf("\n FetchPlayerAppearanceWithFallback() Called \n ");

    // -------------------------------------------------------------
    // PASSAGE 1: Registered Player Attempt (/api/player/...)
    // -------------------------------------------------------------
    snprintf(urlPath, sizeof(urlPath), "/api/player/%s/appearance", player->account_id);
    HttpRequestResult res1 = ExecuteHttpGet(urlPath, &jsonResponse);

    if (res1 == REQ_SUCCESS)
    {
        ParseJsonToPlayer(jsonResponse, player);
        free(jsonResponse);
        return FETCH_OK; // Player successfully registered!
    }
    else if (res1 == REQ_CONN_ERROR)
    {
        // If the Node.js API has crashed or timed out, there is no point in testing the Guest.
        // Returns immediately to retry in the next Tick Thread cycle.
        return FETCH_RETRY_LATER;
    }

    // -------------------------------------------------------------
    // STEP 2: If the Player returns a 404, try Guest (/api/guest_player/...)
    // -------------------------------------------------------------
    printf("[FALLBACK 404] %s not found in /player. Trying /guest_player...\n", player->account_id);

    printf("\n Guest_Request_NETID: [%s] \n", player->account_id);

    snprintf(urlPath, sizeof(urlPath), "/api/guest_player/%s/appearance", player->account_id);
    HttpRequestResult res2 = ExecuteHttpGet(urlPath, &jsonResponse);

    if (res2 == REQ_SUCCESS)
    {
        ParseJsonToPlayer(jsonResponse, player);
        free(jsonResponse);
        return FETCH_OK; // Guest Player Success!
    }
    else if (res2 == REQ_CONN_ERROR)
    {
        return FETCH_RETRY_LATER; // Network error on Guest -> Try again later
    }

    // -------------------------------------------------------------
    // PASSAGE 3: Got a 404 on BOTH (/player and /guest_player)
    // -------------------------------------------------------------
    printf("[404 FINAL] %s not registered in ANY database route!\n", player->account_id);
    return FETCH_NOT_FOUND;
}


std::string GetPUBGLiteNetID(SDK::APlayerState* TargetPlayerState)
{
    if (!TargetPlayerState)
        return "";

    // 1. Aponta para a struct UniqueId (FUniqueNetIdRepl)
    SDK::FUniqueNetIdRepl* repl = &TargetPlayerState->UniqueId;
    if (!repl)
        return "";

    // 2. Cast em nível de memória para interpretar os ponteiros internos (TSharedPtr)
    void** raw = (void**)repl;

    // raw[0] = VTable/Metadata no .text (0x14...)
    // raw[1] = Objeto FUniqueNetIdString alocado na Heap (0x27...)
    void* realUidObject = raw[1];

    if (!realUidObject)
        return "";

    // 3. Acessa a FString nativa que está gravada no offset 0x18 do objeto
    SDK::FString* netIdStr = (SDK::FString*)((uintptr_t)realUidObject + 0x18);

    if (netIdStr && netIdStr->IsValid())
    {
        return netIdStr->ToString();
    }

    return "";
}



static CharacterPlayerData g_Players[MAX_PLAYERS];
static CRITICAL_SECTION g_Lock;

// CONTADOR ULTRA LEVE: A Game Thread só lê esse valor no Tick!
static LONG g_PendingAppliesCount = 0;

void CCustomize_System_Init(void)
{
    InitializeCriticalSection(&g_Lock);
    memset(g_Players, 0, sizeof(g_Players));
    g_PendingAppliesCount = 0;
}

void OnPlayerLogoutByNetID(const char* net_id, void* controllerPtr)
{
    if ((!net_id || net_id[0] == '\0') && !controllerPtr) return;

    EnterCriticalSection(&g_Lock);

    for (int i = 0; i < MAX_PLAYERS; i++)
    {
        if (g_Players[i].status == STATUS_EMPTY) continue;

        bool isMatch = false;

        // 1. Checa por NetID se for válido
        if (net_id && net_id[0] != '\0' && strcmp(g_Players[i].account_id, net_id) == 0)
        {
            isMatch = true;
        }
        // 2. Fallback: Se o NetID veio vazio ou falhou, bate o ponteiro do Controller
        else if (controllerPtr && g_Players[i].Controller == controllerPtr)
        {
            isMatch = true;
        }

        if (isMatch)
        {
            printf("[CACHE] Removendo jogador slot %d (NetID: %s | Status: %d)\n",
                i, g_Players[i].account_id[0] ? g_Players[i].account_id : "N/A", g_Players[i].status);

            // Zera o slot completamente
            memset(&g_Players[i], 0, sizeof(CharacterPlayerData));
            g_Players[i].status = STATUS_EMPTY;

            break; // Já achou e removeu
        }
    }

    LeaveCriticalSection(&g_Lock);
}

bool client_character_change = 0;
bool UMP_SPAWN = 0;
bool cloth_spawn = 0;       



void* (*ProcessEventO)(SDK::UObject*, SDK::UFunction*, void*);
void* ProcessEventHook(SDK::UObject* self, SDK::UFunction* Function, void* Parms)
{
    if(IsValidPtr(self) && IsValidPtr(Function))
    {
        std::string FuncName;
        std::string ObjName;

        FuncName = Function->GetName();
        ObjName = self->GetName();

        std::string FullName = Function->GetFullName();
        std::string ObjFull = self->GetFullName();

        
        if(self->IsA(SDK::UItemGeneratorComponent::StaticClass()))
        {
            //printf("\n Object is A UItemGeneratorComponent \n");

            
            if(ItemGeneratorPointer == NULL)
            {
                ItemGeneratorPointer = (SDK::UBP_ItemGeneratorComponent_C*)self;
            }

            //void* funcAddr = GetVtableAdress(self, 0x420);
            //printf("\n ItemGenerator funcAddr: [%p] \n", funcAddr);

        }

        SDK::FScriptDelegate;
        SDK::UMulticastDelegateProperty_;

        
        if(self->IsA(SDK::UVehicleGeneratorComponent::StaticClass()))
        {
            /*
            if(FuncName == "OnGameModeEnterFlying")
            {
                if (IsValidPtr(ItemGeneratorPointer))
                {
                    printf("\n Calling OnGameModeEnterFlying from itemGenerator \n");
                    ItemGeneratorPointer->OnGameModeEnterFlying();
                }
                else
                {
                    printf("\n ItemGeneratorPointer is NULL \n");
                }


            } */
                
            /*
            if (FuncName == "LoadVehicleGenerateTable")
            {
                
                printf("\n[BLOCKED] %s::%s()\n",
                    ObjName.c_str(),
                    FuncName.c_str());

                if (Function)
                {
                    printf("Function: %s\n", Function->GetName().c_str());
                    printf("UFunction: 0x%llX\n", (uint64_t)Function);
                    printf("ExecFunction: 0x%llX\n", (uint64_t)Function->ExecFunction);

                    printf("FunctionFlags    : 0x%08X\n", *(uint32_t*)((uintptr_t)Function + 0x00C8));

                    printf("Native? %s\n",
                        (*(uint32_t*)((uintptr_t)Function + 0x00C8) & 0x00000400) ? "YES" : "NO");

                    printf("Flags & 0x400 = 0x%08X\n",
                        *(uint32_t*)((uintptr_t)Function + 0x00C8) & 0x00000400);
                }


                return NULL;
            } */

            //void* funcAddr = GetVtableAdress(self, 0x400);
            //printf("\n vehicle funcAddr: [%p] \n", funcAddr);
        }
        
        /*
        if(self->IsA(SDK::UBaseGeneratorComponent::StaticClass()))
        {
            if(FuncName == "ReceiveTick")
            {
            }
            else
            {
                printf("\n %s::%s() \n", ObjName.c_str(), FuncName.c_str());
            }

        }*/

        
        // APlayerController::ClientRestart()
        if(FuncName == "ClientRestart")
        {
            printf("\n ClientRestart() From ProcessEvent \n");

            SDK::Params::PlayerController_ClientRestart* Params = (SDK::Params::PlayerController_ClientRestart*)Parms;
            if(Params != NULL)
            {
                if(Params->NewPawn != NULL)
                {
                    if(Params->NewPawn->Controller != NULL)
                    {
                        if(Params->NewPawn->Controller->IsLocalController())
                        {
                        }
                        else
                        {
                            printf("\n ClientRestart Have a valid Player Controller \n");

                            if(Params->NewPawn->Controller->IsA(SDK::ASTExtraPlayerController::StaticClass()))
                            {
                                SDK::ASTExtraPlayerController* STExtraPlayerController = (SDK::ASTExtraPlayerController*)Params->NewPawn->Controller;

                                if(STExtraPlayerController->PlayerState)
                                {
                                    SDK::APlayerState* PlayerState = STExtraPlayerController->PlayerState;

                                    // Option A: Read the SavedNetworkAddress (if the game uses a direct string)
                                    std::string netAddress = PlayerState->SavedNetworkAddress.ToString();

                                    // Option B: Read PlayerName
                                    std::string playerName = PlayerState->PlayerName.ToString();

                                    // ption C: If the game passes the WebSocket playerNetId in the UniqueId or SavedNetworkAddress.
                                    std::string finalPlayerId = netAddress.empty() ? playerName : netAddress;

                                    printf("[ClientRestart] PlayerState Found | ID/NetAddress: %s | Nick: %s\n", finalPlayerId.c_str(), playerName.c_str());

                                    std::string NetID = GetPUBGLiteNetID(PlayerState);

                                    printf("\n Lite Net ID : %s \n", NetID.c_str());


                                    {
                                        int i;
                                        int slot = -1;

                                        if (NetID.c_str()[0] == '\0')
                                        {
                                            printf("\n NetId is Empty \n");

                                        }
                                        else
                                        {

                                            printf("\n NetId is Valid \n");


                                            EnterCriticalSection(&g_Lock);

                                            // 1. Check if it already exists in the array.
                                            for(i = 0; i < MAX_PLAYERS; i++)
                                            {
                                                if(g_Players[i].status != STATUS_EMPTY && strcmp(g_Players[i].account_id, NetID.c_str()) == 0)
                                                {
                                                    printf("\n 1 already exists in array\n");

                                                    slot = i;
                                                    break;
                                                }
                                            }

                                            // 2. If it doesn't exist, take the first empty slot.
                                            if (slot == -1)
                                            {
                                                for (i = 0; i < MAX_PLAYERS; i++)
                                                {
                                                    if (g_Players[i].status == STATUS_EMPTY)
                                                    {
                                                        printf("\n 2 Picked empty array slot\n");

                                                        slot = i;
                                                        strncpy_s(g_Players[slot].account_id, ACCOUNT_ID_LEN, NetID.c_str(), ACCOUNT_ID_LEN - 1);
                                                        g_Players[slot].status = STATUS_NEEDS_FETCH; // Brand for Tick Thread to search for
                                                        break;
                                                    }
                                                }
                                            }

                                            // 3. Updates the current Pawn/Controller pointers (useful for respawning)
                                            if (slot != -1)
                                            {
                                                printf("\n 3 Update the actual data\n");

                                                g_Players[slot].Controller = STExtraPlayerController;
                                                g_Players[slot].Character = (SDK::ASTExtraBaseCharacter*)Params->NewPawn;

                                                // If there was already data in the cache, just mark it to be re-applied in the new Pawn!
                                                if (g_Players[slot].status == STATUS_READY)
                                                {
                                                    g_Players[slot].status = STATUS_NEEDS_APPLY;
                                                    InterlockedIncrement(&g_PendingAppliesCount); // Notify ReceiveTick
                                                }
                                            }

                                            LeaveCriticalSection(&g_Lock);
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        printf("\n ClientRestart NOT! Have a valid Player Controller \n");
                    }
                }
            }

        }


        
        if(FuncName == "K2_OnLogout")
        {
            printf("\n === \n === K2_OnLogout Call in ProcessEvent() === \n === \n");

            SDK::Params::GameModeBase_K2_OnLogout* Params = (SDK::Params::GameModeBase_K2_OnLogout*)Parms;
            if (Params != NULL)
            {
                if (Params->ExitingController)
                {
                    if (Params->ExitingController->IsA(SDK::ASTExtraPlayerController::StaticClass()))
                    {
                        printf("\n is a STExtraPlayerController \n");

                        SDK::ASTExtraPlayerController* STExtraPlayerController = (SDK::ASTExtraPlayerController*)Params->ExitingController;
                        if (STExtraPlayerController)
                        {
                            SDK::APlayerState* PlayerState = Params->ExitingController->PlayerState;
                            if (PlayerState)
                            {

                                std::string NetID = GetPUBGLiteNetID(PlayerState);

                                printf("\n Disconnect Lite Net ID : %s \n", NetID.c_str());

                                EnterCriticalSection(&g_Lock);

                                for (int i = 0; i < MAX_PLAYERS; i++)
                                {
                                    if (g_Players[i].status == STATUS_EMPTY) continue;

                                    bool matchFound = false;

                                    // 1. Search by NetID if the NetID is valid.
                                    if (!NetID.empty() && strcmp(g_Players[i].account_id, NetID.c_str()) == 0)
                                    {
                                        matchFound = true;
                                    }
                                    // 2. CRITICAL FALLBACK: If the PlayerState is gone, compare using the Controller pointer!
                                    else if (g_Players[i].Controller == Params->ExitingController)
                                    {
                                        matchFound = true;
                                    }

                                    if (matchFound)
                                    {
                                        printf("[LOGOUT] Completely clearing the slot %d (NetID: %s)\n", i, g_Players[i].account_id);

                                        // Completely clears the struct and frees the slot.
                                        memset(&g_Players[i], 0, sizeof(CharacterPlayerData));
                                        g_Players[i].status = STATUS_EMPTY;
                                        break;
                                    }
                                }

                                LeaveCriticalSection(&g_Lock);

                            }
                            else
                            {
                                printf("\n PlayerState is NULL \n");
                            }
                        }
                    }
                    else
                    {
                        //printf("\n NOT a  STExtraPlayerController ! Probably HOST\n");
                    }
                }
            }
        }



        if(FuncName == "ReceiveTick" && self->IsA(SDK::APawn::StaticClass()))
        {
            
            {
                // 1. ULTRA-LIGHT CHECK (1 processor instruction, 0.000001 ms)
                // If there are no pending skins to apply, I'm out of here INSTANTLY.
                if(g_PendingAppliesCount == 0)
                {

                }
                else
                {

                    // 2. If the counter is > 0, it means there is work to be done!
                    EnterCriticalSection(&g_Lock);

                    for (int i = 0; i < MAX_PLAYERS; i++)
                    {
                        printf("\n Current Player Num(%i)\n", i);

                        if (g_Players[i].status == STATUS_NEEDS_APPLY)
                        {
                            // Apply to Unreal Engine Pawn / Character
                            SDK::ASTExtraBaseCharacter* character = g_Players[i].Character;

                            if (character)
                            {

                                SDK::ECharacterGender gender = (SDK::ECharacterGender)g_Players[i].appearenceData.gender_ID;
                                ECharacterFace face = (ECharacterFace)g_Players[i].appearenceData.face_ID;
                                ECharacterHair hair = (ECharacterHair)g_Players[i].appearenceData.hair_ID;

                                int characterChangeStatus = OGBG_UpdateBaseCharacter(character, gender, face, hair);
                                if(characterChangeStatus == 0)
                                {
                                    printf("[GAME THREAD] Skin successfully applied to Pawn: %s!\n", g_Players[i].account_id);
                                }
                                else
                                {
                                    printf("\n Problems in apply appearence in character \n");
                                }

                                printf("\n gender: %i | face: %i | hair: %i \n", gender, face, hair);


                            }
                            else
                            {
                                printf("\n Character is NULL\n");
                            }


                            // Marks as ready and decrements the global counter.
                            g_Players[i].status = STATUS_READY;
                            InterlockedDecrement(&g_PendingAppliesCount);

                            // If all pending items have been cleared, exit the loop immediately.
                            if (g_PendingAppliesCount == 0) break;
                        }
                    }

                    LeaveCriticalSection(&g_Lock);


                }
            }

            {


                
                /*
                SDK::UWorld* World = World_GetWorld_();
                if(World)
                {
                    if (World->AuthorityGameMode)
                    {
                        if (World->AuthorityGameMode->IsA(SDK::AGameModeBase::StaticClass()))
                        {
                            SDK::AGameStateBase* GameStateBase = World->AuthorityGameMode->GameState;
                            if (GameStateBase)
                            {

                                if (GameStateBase->IsA(SDK::AGameStateBase::StaticClass()))
                                {
                                    //printf("\n have GameStateBase \n");


                                    int i = 0;

                                    UC::TArray<SDK::APlayerState*>& Players = GameStateBase->PlayerArray;


                                    for (i = 0; i < Players.Num(); i++)
                                    {
                                        //printf("\n============================");
                                        //printf("\nPlayer index: %i", i);

                                        SDK::APlayerState* PlayerState = Players[i];


                                        //printf("\nPlayerState: %p", PlayerState);

                                        if (PlayerState == NULL)
                                        {
                                            printf("\nPlayerState NULL");
                                            continue;
                                        }
                                        else
                                        {
                                            //printf("\nCalling PlayerState->IsA...");


                                            if (PlayerState->IsA(SDK::APlayerState::StaticClass()))
                                            {
                                                //printf("\nPlayerState IsA OK");

                                                //printf("\nCalling GetOwner...");

                                                SDK::AActor* controller = PlayerState->GetOwner();

                                                //printf("\nOwner: %p", controller);

                                                /*
                                                if(controller == NULL)
                                                {
                                                    printf("\nController NULL");
                                                    continue;
                                                }
                                                else
                                                {

                                                    //printf("\nCalling controller->IsA(FakePlayerAIController)...");

                                                    if(controller->IsA(SDK::AFakePlayerAIController::StaticClass())) // bots
                                                    {
                                                        printf("\n Is A AFakePlayerAIController ! \n");
                                                        continue;
                                                    }
                                                    else
                                                    {
                                                        //printf("\nCalling controller->IsA(STExtraPlayerController)...");

                                                        if(controller->IsA(SDK::ASTExtraPlayerController::StaticClass()))
                                                        {
                                                            // IGNORE HOST PAWN and Controller
                                                            if(IsHostPlayer(PlayerState, World))
                                                            {

                                                            }
                                                            else
                                                            {
                                                                SDK::ASTExtraPlayerController* STExtraPlayerController = (SDK::ASTExtraPlayerController*)PlayerState->GetOwner();
                                                                if (!STExtraPlayerController) continue;


                                                                //103005

                                                                /*
                                                                {
                                                                    SDK::UBackpackComponent* BackPackComponent = STExtraPlayerController->BackpackComponent;
                                                                    if (BackPackComponent)
                                                                    {


                                                                    a
                                                                        if (UMP_SPAWN == 0)
                                                                        {
                                                                            UMP_SPAWN = 1;


                                                                            uint64_t ump_intance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                            if(SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Weapon, 102002, 1, 1, ump_intance)); // UMP9
                                                                            {
                                                                                printf("\n SPawn UMP true \n");
                                                                            }

                                                                            uint64_t bullet9mm_Instance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                            if(SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Ammo, 301001, 90, 1, bullet9mm_Instance))
                                                                            {
                                                                                printf("\n SPawn 9mm x90 true \n");
                                                                            }
                                                                        }


                                                                        if(cloth_spawn == 0)
                                                                        {
                                                                            cloth_spawn = 1;


                                                                            uint64_t head_item_instance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                            if(SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Clothing, 401061, 1, true, head_item_instance))
                                                                            {
                                                                                printf("\n Sucess HeadSet ! \n");
                                                                            }

                                                                            uint64_t torso_item_instance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                            if(SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Clothing, 403178, 1, true, torso_item_instance))
                                                                            {
                                                                                printf("\n Sucess Torso ! \n");
                                                                            }


                                                                            uint64_t legs_item_instance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                            if(SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Clothing, 404009, 1, true, legs_item_instance))
                                                                            {
                                                                                printf("\n Sucess Legs ! \n");
                                                                            }

                                                                            uint64_t foot_item_instance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                            if(SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Clothing, 405011, 1, true, foot_item_instance))
                                                                            {
                                                                                printf("\n Sucess FOOT ! \n");
                                                                            }

                                                                        }
                                                                    }
                                                                } * /
                                                            }
                                                        }
                                                    }
                                                } *


                                                //SDK::AActor* controller = PlayerState->GetOwner();
                                                if (controller == NULL)
                                                {
                                                    continue;
                                                }
                                                else
                                                {




                                                    //if (IsHostPlayer(PlayerState, World))
                                                    if (controller->IsA(SDK::ASTExtraPlayerController::StaticClass()))
                                                    {
                                                        //printf("\n IsA ASTExtraPlayerController \n");

                                                        SDK::APlayerController* MyController = SDK::UGameplayStatics::GetPlayerController(World, 0);
                                                        if (MyController == controller)
                                                        {
                                                            ///printf("\n  Is Host \n");

                                                            SDK::ASTExtraPlayerController* Host_STExtraPlayerController = (SDK::ASTExtraPlayerController*)controller;
                                                            if (Host_STExtraPlayerController)
                                                            {

                                                            }

                                                        }
                                                        else
                                                        {
                                                            //printf("\n client \n");
                                                            SDK::ASTExtraPlayerController* STExtraPlayerController = (SDK::ASTExtraPlayerController*)controller;
                                                            if (!STExtraPlayerController) continue;


                                                            //103005


                                                            {
                                                                SDK::UBackpackComponent* BackPackComponent = STExtraPlayerController->BackpackComponent;
                                                                if (BackPackComponent)
                                                                {


                                                                    /*
                                                                    if (UMP_SPAWN == 0)
                                                                    {
                                                                        UMP_SPAWN = 1;


                                                                        uint64_t ump_intance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                        if(SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Weapon, 102002, 1, 1, ump_intance)); // UMP9
                                                                        {
                                                                            printf("\n SPawn UMP true \n");
                                                                        }

                                                                        uint64_t bullet9mm_Instance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                        if(SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Ammo, 301001, 90, 1, bullet9mm_Instance))
                                                                        {
                                                                            printf("\n SPawn 9mm x90 true \n");
                                                                        }
                                                                    } *


                                                                    if (cloth_spawn == 0)
                                                                    {
                                                                        cloth_spawn = 1;


                                                                        uint64_t head_item_instance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                        if (SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Clothing, 401061, 1, true, head_item_instance))
                                                                        {
                                                                            printf("\n Sucess HeadSet ! \n");
                                                                        }

                                                                        uint64_t torso_item_instance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                        if (SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Clothing, 403178, 1, true, torso_item_instance))
                                                                        {
                                                                            printf("\n Sucess Torso ! \n");
                                                                        }


                                                                        uint64_t legs_item_instance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                        if (SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Clothing, 404009, 1, true, legs_item_instance))
                                                                        {
                                                                            printf("\n Sucess Legs ! \n");
                                                                        }

                                                                        uint64_t foot_item_instance = SDK::UBackpackUtils::GenerateRandomInstanceID();
                                                                        if (SpawnAndGiveItem(BackPackComponent, SDK::EBackpackItemType::BackpackItemType_Clothing, 405011, 1, true, foot_item_instance))
                                                                        {
                                                                            printf("\n Sucess FOOT ! \n");
                                                                        }

                                                                    }
                                                                }
                                                            }

                                                        }
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                printf("\nPlayerState is NOT APlayerState");
                                            }




                                        }


                                    }
                                }
                            }
                        }
                    }
                } */
            }
        }

        if(self->IsA(SDK::UTslBallisticsComp::StaticClass()))
        {
            SDK::UTslBallisticsComp* TslBallisticsComp = (SDK::UTslBallisticsComp*)self;

            if (FuncName == "FlushServerNotifyHitList") // Weapon Damage System
            {

                SDK::Params::TslBallisticsComp_FlushServerNotifyHitList* Params = (SDK::Params::TslBallisticsComp_FlushServerNotifyHitList*)Parms;
                OGBG_FlushServerNotifyHitList(TslBallisticsComp, Params->HitArgsList);
            }


            if(FuncName == "FlushServerNotifyHitList_NonPlayerCharacter") // Weapon NPC Shoot system
            {
                SDK::Params::TslBallisticsComp_FlushServerNotifyHitList_NonPlayerCharacter* Params = (SDK::Params::TslBallisticsComp_FlushServerNotifyHitList_NonPlayerCharacter*)Parms;
                
                UC::TArray<SDK::FServerNotifyHitArgs_NonPlayerCharacter>& HitArgsList = Params->HitArgsList;

                OGBG_FlushServerNotifyHitList_NonPlayerCharacter(TslBallisticsComp, HitArgsList);
            }
        }



        /*
            
            BP_Rifle_AKM_LPC_C_0::RPC_ClientSetCurReloadMethod()

            BP_Rifle_AKM_LPC_C_0::RPC_ClientChangeFreshWeaponState()

            BP_Rifle_AKM_LPC_C_0::BP_OnWeaponReloadStart()

            BP_Rifle_AKM_LPC_C_0::SimulateWeaponReload()

            BP_Rifle_AKM_LPC_C_0::BP_OnWeaponReloadEnd()
        */

        /*
        if(self->IsA(SDK::ASTExtraShootWeapon::StaticClass()))
        {
            if(FuncName == "ReceiveTick")
            {

            }
            else
            {
                //printf("\n %s::%s() \n", self->GetName().c_str(), FuncName.c_str());
            }
            
        } */

        if(FuncName == "BP_OnWeaponReloadEnd")
        {
            //std::cerr << "Reload ended for a player" << std::endl;

            /*
            //printf("\n self fullName: [%s]\n", self->GetFullName().c_str());
            {
                SDK::UClass* cls = self->GetClass();
                SDK::UStruct* current = cls;

                while (current)
                {
                    //printf("Class: %s\n", current->GetName().c_str());

                    current = current->Super;
                }
            } */

            SDK::ASTExtraShootWeapon* STExtraShootWeapon = (SDK::ASTExtraShootWeapon*)self;
            SDK::ASTExtraBaseCharacter* STExtraBaseCharacter = (SDK::ASTExtraBaseCharacter*)STExtraShootWeapon->GetOwner();
            SDK::ASTExtraPlayerController* STExtraPlayerController = (SDK::ASTExtraPlayerController*)STExtraBaseCharacter->GetController();


            int BulletsBefore = 0;
            int BulletsAfter = 0;
            int BulletsToRemove = 0;

            //std::cerr << "Bullets before: " << (int)STExtraShootWeapon->CurBulletNumInClip << std::endl;
            //std::cerr << "Max bullets: " << (int)STExtraShootWeapon->CurMaxBulletNumInOneClip << std::endl;
            // BulletsBefore = (int)shoot->CurBulletNumInClip;

            STExtraShootWeapon->CurBulletNumInClip = STExtraShootWeapon->CurMaxBulletNumInOneClip;

            //std::cerr << "Num changed, current: " << (int)STExtraShootWeapon->CurBulletNumInClip << std::endl;
            //shoot->TslBallisticsComp->CurrentAmmoData = shoot->CurMaxBulletNumInOneClip;
            //shoot->TslBallisticsComp->ClientNotifyAmmo(shoot->CurMaxBulletNumInOneClip);
            //std::cerr << "ClientNotifyAmmo called" << std::endl; 
            STExtraShootWeapon->StartReload();
            //std::cerr << "StartReload called" << std::endl;


            STExtraShootWeapon->SimulateWeaponReload(SDK::EWeaponReloadAnimExec::Tactical, STExtraShootWeapon->CurMaxBulletNumInOneClip);
            //std::cerr << "SimulateWeaponReload called" << std::endl;


            STExtraShootWeapon->SetCurrentBulletNumInClipOnClient(STExtraShootWeapon->CurMaxBulletNumInOneClip);
            //std::cerr << "SetCurrentBulletNumInClipOnClient called" << std::endl;

            STExtraShootWeapon->SetCurrentBulletNumInClipOnServer(STExtraShootWeapon->CurMaxBulletNumInOneClip);
        }

    }

    return ProcessEventO(self, Function, Parms);

}

DWORD Hook_ProcessEvent()
{

    {
        uintptr_t func_Addr = (uintptr_t(GetModuleHandle(0)) + SDK::Offsets::ProcessEvent);

        ProcessEventO = decltype(ProcessEventO)(func_Addr);
        MH_STATUS HookResult = MH_CreateHook((PVOID&)func_Addr, ProcessEventHook, reinterpret_cast <LPVOID*> (&ProcessEventO));
        const char* HookResultString = MH_StatusToString(HookResult);

        if (HookResult != MH_STATUS::MH_OK)
        {
            printf("\n Hook UObject::ProcessEvent() CREATED FAILED WITH REASON : %s !\n", HookResultString);
        }
        else
        {
            if (MH_EnableHook((PVOID&)func_Addr) != MH_STATUS::MH_OK)
            {
                printf("\n UObject::ProcessEvent() Hook ENABLE FAILED! \n");
            }
            else
            {
                printf("\n UObject::ProcessEvent() Hook Enabled! \n");
            }
        }
    } // -------------------------------------------------------------------------------------------------------------------------



    return 0;
}

const char* GetCurrentMapName(SDK::UWorld* World) 
{
    static std::string mapName;

    mapName.clear();

    if(!World) return "Unknown";

    // Tenta obter do nível persistente
    if(World->Levels.Num() > 0) 
    {
        SDK::ULevel* Persistent = World->Levels[0];
        if(IsValidPtr(Persistent))
        {
            SDK::UObject* Package = Persistent->GetOuter();
            if(IsValidPtr(Package))
            {
                mapName = Package->GetName();
                return mapName.c_str();
            }
            else
            {
                return "Unknown";
            }
        }
    }

    return "Unknown";
}



// loop processing -p-l-a-y-e-r-s- / EVERYTHING
void ProcessPlayers(void)
{
    SDK::UWorld* World = NULL;

    //World = SDK::UWorld::GetWorld();
    World = World_GetWorld_();
    
    if(!IsValidPtr(World)) return;
    else
    {
        if(World != lastWorld)
        {
            lastWorld = World;

            isStreamingPlayable = false;
            needLoadAllLevels = false;
            allLevelsAreLoaded = false;

            ItemGeneratorPointer = NULL;
        }

        //Fix_UWorld_ActorCrash(World);
        

        SDK::UNetDriver* NetDriver = World->NetDriver;
        if(IsValidPtr(NetDriver))
        {
            //printf("\n NetDriver Exists \n");
       
            if(IsValidPtr(NetDriver->ServerConnection))
            {
                //printf("\n is a client connected to server  \n");
            }
            else // server
            {
                //printf("\n is a server \n");

                
                // Cosmetics Management
                {
                    int i;

                    EnterCriticalSection(&g_Lock);

                    for (i = 0; i < MAX_PLAYERS; i++)
                    {
                        if (g_Players[i].status == STATUS_NEEDS_FETCH)
                        {
                            g_Players[i].status = STATUS_FETCHING; // Blocks to prevent duplicate requests.

                            // Copy the ID to perform the HTTP call outside the lock.
                            char current_id[ACCOUNT_ID_LEN];
                            strcpy_s(current_id, ACCOUNT_ID_LEN, g_Players[i].account_id);

                            CharacterPlayerData tempPlayer = { 0 };
                            memset(&tempPlayer, 0, sizeof(CharacterPlayerData));

                            tempPlayer = g_Players[i];

                            LeaveCriticalSection(&g_Lock);


                            FetchStatus result = FetchPlayerAppearanceWithFallback(&tempPlayer);

                            EnterCriticalSection(&g_Lock);

                            // VERIFICAÇÃO ANTI-CRASH / ANTI-RACE CONDITION:
                            // Checa se o slot ainda pertence ao mesmo jogador (pode ter havido Logout durante o HTTP!)
                            if (g_Players[i].status == STATUS_FETCHING && strcmp(g_Players[i].account_id, tempPlayer.account_id) == 0)
                            {
                                // CASE 1: Data found (Whether in /player or /guest_player)
                                if (result == FETCH_OK)
                                {
                                    g_Players[i].appearenceData = tempPlayer.appearenceData;
                                    g_Players[i].status = STATUS_NEEDS_APPLY;

                                    printf("\n ProcessPlayers(): STATUS_NEEDS_APPLY \n");

                                    printf("\n ProcessPlayers(): gender_ID: %i | face_ID: %i | hair_ID: %i \n",
                                        g_Players[i].appearenceData.gender_ID, g_Players[i].appearenceData.face_ID, g_Players[i].appearenceData.hair_ID);

                                    // Avisa a Game Thread (ReceiveTick)
                                    InterlockedIncrement(&g_PendingAppliesCount);
                                }
                                // CASE 2: Connection Error / Timeout / Server Down -> Wait and try again later
                                else if (result == FETCH_RETRY_LATER)
                                {
                                    printf("[TICK THREAD] Connection failure to %s. Queued for retry....\n", g_Players[i].account_id);
                                    g_Players[i].status = STATUS_NEEDS_FETCH; // Try again in the next cycle!
                                }
                                // CASE 3: Returned 404 for both -> Does not exist in the database
                                else if (result == FETCH_NOT_FOUND)
                                {
                                    g_Players[i].status = STATUS_READY;
                                }
                            }
                            else
                            {
                                printf("[WARNING] Player in slot %d disconnected during an HTTP request. Ignoring response..\n", i);
                            }




                            /*
                            printf("\n request Emu TEST \n");

                            // -------------------------------------------------------------
                            // REQUISIÇÃO HTTP NA SUA TICK THREAD (FORA DA CRITICAL SECTION)
                            // GET http://localhost:3000/api/player/<current_id>/appearance
                            // -------------------------------------------------------------
                            Character_appearenceData app = { 1, 400107, 40604002 }; // Exemplo preenchido do JSON
                            //Character_clothesData clo = { 0, 0, 101, 102, 103 };
                            Character_clothesData clo = { 0, 0, 0, 0, 0 };

                            // Guarda os resultados de volta no slot
                            EnterCriticalSection(&g_Lock);

                            g_Players[i].appearenceData = app;
                            g_Players[i].clotheData = clo;
                            g_Players[i].status = STATUS_NEEDS_APPLY; // Marca que está pronto!

                            // NOTIFICA A GAME THREAD (Incremento atômico ultra leve)
                            InterlockedIncrement(&g_PendingAppliesCount); */
                        }
                    }

                    LeaveCriticalSection(&g_Lock);
                }



                //printf("\n========== WORLD DEBUG ==========\n");
                //printf("World 2     = %p\n", World);

                
                if(IsValidPtr(World->AuthorityGameMode))
                {
                    if(World->AuthorityGameMode->IsA(SDK::AGameModeBase::StaticClass()))
                    {
                        
                        if(World->AuthorityGameMode->IsA(SDK::ABattleRoyaleGameMode::StaticClass()))
                        {

                            
                            //printf("\n is a ABattleRoyaleGameMode\n");
                            SDK::ABattleRoyaleGameMode* BattleRoyaleGameMode = (SDK::ABattleRoyaleGameMode*)World->AuthorityGameMode; 
                            if(IsValidPtr(BattleRoyaleGameMode))
                            {
                                //printf("\n Battle type: [%s]\n", BattleRoyaleGameMode->GetFullName().c_str());

                                /*
                                if(BattleRoyaleGameMode->IsA(SDK::ABattleRoyalTrainingGameMode::StaticClass()))
                                {
                                    printf("\n is Training \n");
                                }
                                else if(BattleRoyaleGameMode->IsA(SDK::ADeathMatchGameMode::StaticClass()))
                                {
                                    printf("\n is TDM ADeathMatchGameMode  \n");
                                }*/
                                
                                



                                if(IsValidPtr(BattleRoyaleGameMode->CurrentState))//if(BattleRoyaleGameMode->CurrentState != NULL)
                                {

                                    if(BattleRoyaleGameMode->CurrentState->IsA(SDK::UGameModeStateReady::StaticClass()))
                                    {
                                        SDK::UGameModeStateReady* GameModeStateReady = (SDK::UGameModeStateReady*)BattleRoyaleGameMode->CurrentState;
                                        if(GameModeStateReady)
                                        {
                                            //printf("\n is a GameModeStateReady \n");

                                            Sleep(1000);

                                            isStreamingPlayable = true;
                                            
                                            if(allLevelsAreLoaded == false)
                                            {
                                                needLoadAllLevels = true;
                                            }

                                            /*
                                                --- reading Delegate Array (2 Delegates Found) ---
                                                Class ptr: 9F904C3F95D5F6CA
                                                [0] Object: 0x000000002E6BFC80 | Class: Unknown | Function: OnGameModeEnterFlying
                                                Class ptr: 9F4404DF9501BE2A
                                                [1] Object: 0x000000002EF8A300 | Class: Unknown | Function: EnterFly
                                                -------------------------------------------------------

                                            */

                                            //printf("\n Debug Multicast: ABattleRoyaleGameMode - OnGameModeEnterFlying \n");
                                            //debugMulticastProperty(BattleRoyaleGameMode->OnGameModeEnterFlying);

                                        }
                                    }

                                    /*
                                    if(BattleRoyaleGameMode->CurrentState->IsA(SDK::UGameModeStateFlying::StaticClass()))
                                    {
                                        
                                    }*/
                                     
                                    //printf("\n CurrentState name: [%s]\n", BattleRoyaleGameMode->CurrentState->GetName().c_str());

                                    //printf("\n currentState Pointer: [%p] \n", (void*)BattleRoyaleGameMode->CurrentState);

                                }
                                else
                                {
                                    //printf("\n CurrentState is 'NULL!' \n");
                                    //printf("\n currentState Pointer: [%p] \n", (void*)BattleRoyaleGameMode->CurrentState);

                                }
                            }
                        }  

                        

                        SDK::AGameStateBase* GameStateBase = World->AuthorityGameMode->GameState;
                        if(IsValidPtr(GameStateBase))
                        {
                            if(GameStateBase->IsA(SDK::AGameStateBase::StaticClass()))
                            {
                                //printf("\n have GameStateBase \n");

                                
                                if(needLoadAllLevels == true)
                                {
                                    //  after this pause the countdownand load all levels

                                    SDK::ASTExtraGameStateBase* STExtraGameStateBase = (SDK::ASTExtraGameStateBase*)GameStateBase;

                                    STExtraGameStateBase->bReadyStateCountingDown = false;

                                    if(World->StreamingLevels.Num() > 0)
                                    {
                                        printf("apllying stream fix");
                                        {
                                            STExtraGameStateBase->bReadyStateCountingDown = false;

                                            isStreamingPlayable = true;

                                            Sleep(700);
                                            int32_t streamingStatus = 0;
                                            streamingStatus = DisableCullingForStreamingLevels(World);
                                            if(streamingStatus == 1)
                                            {
                                                printf("\n Now All Streaming Levels Are Loaded !\n");
                                                needLoadAllLevels = false;
                                                allLevelsAreLoaded = true;
                                                

                                                //SDK::UEngine::GetEngine()->StreamingDistanceFactor = 1000.0f;
                                                //SDK::UGameplayStatics::FlushLevelStreaming(World_GetWorld_());
                                            }
                                        }
                                    }
                                    else
                                    {
                                        printf("\n this map dont have Level Streaming\n");
                                    }

                                    STExtraGameStateBase->bReadyStateCountingDown = true;
                                }



                                int i = 0;

                                UC::TArray<SDK::APlayerState*>& Players = GameStateBase->PlayerArray;

                                for(i = 0; i < Players.Num(); i++)
                                {
                                    //printf("\n Player Index: %i \n", i);

                                    SDK::APlayerState* PlayerState = Players[i];
                                    if(!IsValidPtr(PlayerState)) continue;

                                    SDK::AActor* controller = PlayerState->GetOwner();
                                    if(!IsValidPtr(controller)) continue;

                                    if(controller->IsA(SDK::AFakePlayerAIController::StaticClass())) // bots
                                    {
                                        //printf("\n Is A AFakePlayerAIController ! \n");
                                        continue;
                                    }


                                    //if (IsHostPlayer(PlayerState, World))
                                    if(controller->IsA(SDK::ASTExtraPlayerController::StaticClass()))
                                    {
                                        //printf("\n IsA ASTExtraPlayerController \n");

                                        SDK::APlayerController* MyController = SDK::UGameplayStatics::GetPlayerController(World, 0);
                                        if(MyController == controller)
                                        {
                                            ///printf("\n  Is Host \n");


                                            SDK::ASTExtraPlayerController* Host_STExtraPlayerController = (SDK::ASTExtraPlayerController*)controller;
                                            if(IsValidPtr(Host_STExtraPlayerController))
                                            {
                                                if(Host_STExtraPlayerController->EnableNetCullingDistOnVeryLowDevice == 1)
                                                {
                                                    Host_STExtraPlayerController->EnableNetCullingDistOnVeryLowDevice = 0;
                                                }

                                                SDK::APawn* Local_Pawn = Host_STExtraPlayerController->K2_GetPawn(); // in lobby this is null
                                                if(IsValidPtr(Local_Pawn))
                                                {
                                                    /// ==============================================================================================================////
                                                    

                                                    // hide the listener character pawn
                                                    if(!Local_Pawn->bHidden)
                                                    {
                                                        // This doesn't affect the client's gameplay; it just makes the host's pawn invisible.
                                                        Local_Pawn->SetActorHiddenInGame(true);
                                                        Local_Pawn->bHidden = 1;

                                                        // The logic here is that he doesn't jump; after that, it will be a single logical progression.
                                                        // So every time the host pawn is visible, it's because a map has been loaded.
                                                    }
                                                    else
                                                    {
                                                        // If you get here, skip ahead, because there's nothing else to do at the host.
                                                        continue;
                                                    }

                                                    // init once logic 

                                                    bool bCollisionCurrentlyEnabled = Local_Pawn->GetActorEnableCollision();
                                                    if (bCollisionCurrentlyEnabled)
                                                    {
                                                        //Local_Pawn->SetActorEnableCollision(false); // this making crash when back to lobby
                                                    }

                                                    if(Local_Pawn->bReplicates)
                                                    {
                                                        Local_Pawn->SetReplicates(false); // Stop replicating and make it untouchable.
                                                        // Except when you're controlling it, 
                                                        //          you have collision with players, but players don't have collision with you.

                                                        Local_Pawn->bReplicates = false;
                                                    }


                                                    
                                                    {
                                                        SDK::UEngine* Engine = SDK::UEngine::GetEngine();
                                                        if(IsValidPtr(Engine))
                                                        {
                                                            SDK::UGameViewportClient* GameViewport = Engine->GameViewport;
                                                            if(IsValidPtr(GameViewport))
                                                            {
                                                                if(!IsValidPtr(GameViewport->ViewportConsole))
                                                                {
                                                                    InitUEConsole();
                                                                }
                                                                else
                                                                {
                                                                    GameViewport->SetConsoleTarget(0);
                                                                }
                                                            }
                                                        }
                                                    }

                                                    // init LocalController CheatManager
                                                    {
                                                        if(IsValidPtr(Host_STExtraPlayerController->CheatManager))
                                                        {

                                                        }
                                                        else
                                                        {
                                                            SDK::UClass* CheatClass = SDK::UCheatManager::StaticClass();
                                                            if(!CheatClass)
                                                            {
                                                            }
                                                            else
                                                            {
                                                                SDK::UObject* Obj = SDK::UGameplayStatics::SpawnObject(CheatClass, Host_STExtraPlayerController);
                                                                if(!IsValidPtr(Obj))
                                                                {

                                                                }
                                                                else
                                                                {
                                                                    Host_STExtraPlayerController->CheatManager = static_cast<SDK::UCheatManager*>(Obj);
                                                                }
                                                            }
                                                        }
                                                    }

                                                    SDK::UKismetSystemLibrary::ExecuteConsoleCommand(World_GetWorld_(), FString(L"t.MaxFPS 50"), SDK::UGameplayStatics::GetPlayerController(World_GetWorld_(), 0));

                                                    const char* MapName = GetCurrentMapName(World);
                                                    if(MapName)
                                                    {
                                                        printf("\n \n \n Current Map: %s \n \n \n", MapName);
                                                    }
                                                    


                                                    /*
                                                    SDK::ABattleRoyaleGameMode* BattleRoyaleGameMode = (SDK::ABattleRoyaleGameMode*)World->AuthorityGameMode;
                                                    if(IsValidPtr(BattleRoyaleGameMode))
                                                    {
                                                        if(BattleRoyaleGameMode->IsA(SDK::ABattleRoyalTrainingGameMode::StaticClass()))
                                                        {
                                                            printf("\n is Training \n");
                                                        }
                                                        else if(BattleRoyaleGameMode->IsA(SDK::ADeathMatchGameMode::StaticClass()))
                                                        {
                                                            printf("\n is TDM ADeathMatchGameMode  \n");
                                                        }
                                                    } */
                                                    
                                                    /*
                                                    SDK::UTslSettings* TslSettings = SDK::UTslSettings::GetTslSettings();
                                                    if(IsValidPtr(TslSettings))
                                                    {
                                                        TslSettings->RepDistance_Character = FLT_MAX;
                                                        TslSettings->RepDistance_Item = FLT_MAX;
                                                        TslSettings->RepDistance_Door = FLT_MAX;
                                                        TslSettings->RepDistance_Vehicle = FLT_MAX;
                                                        TslSettings->RepVehicle_SpawnDistance = FLT_MAX;
                                                    }
                                                    else
                                                    {
                                                        printf("\n TslSettings is NOT a Valid POINTER: addr=[%p] \n", TslSettings);
                                                    } */
                                                }
                                            }


                                            continue;
                                        }
                                        else // connected players
                                        {
                                            
                                            SDK::ASTExtraPlayerController* STExtraPlayerController = (SDK::ASTExtraPlayerController*)controller;
                                            if(!IsValidPtr(STExtraPlayerController)) continue;

                                            //SDK::ASTExtraBaseCharacter* STExtraBaseCharacter = STExtraPlayerController->STExtraBaseCharacter; // this make crash if STExtraPlayerController == NULL pointer

                                            SDK::ASTExtraBaseCharacter* STExtraBaseCharacter = (SDK::ASTExtraBaseCharacter*)STExtraPlayerController->K2_GetPawn();
                                            if(IsValidPtr(STExtraBaseCharacter))
                                            {


                                            }

                                            if(!IsValidPtr(STExtraPlayerController->VehicleUserComp))
                                            {
                                            }
                                            else
                                            {
                                                //printf("\n have a valid VehicleUserComponent \n");

                                                if(!IsValidPtr(STExtraPlayerController->VehicleUserComp->Vehicle))
                                                {
                                                }
                                                else
                                                {

                                                    // GAS cheat 
                                                    if(IsValidPtr(STExtraPlayerController->VehicleUserComp->Vehicle->VehicleCommon))
                                                    {
                                                        float maxFuel = STExtraPlayerController->VehicleUserComp->Vehicle->VehicleCommon->FuelMax;
                                                        if(STExtraPlayerController->VehicleUserComp->Vehicle->VehicleCommon->Fuel < maxFuel)
                                                        {
                                                            STExtraPlayerController->VehicleUserComp->Vehicle->VehicleCommon->Fuel = maxFuel;

                                                            // ChangeVehicleFuel(STEPC->VehicleUserComp->Vehicle, maxFuel);
                                                        }
                                                    }

                                                    
                                                }
                                            }
                                        }
                                    }
                                } 
                            }
                        }
                        else
                        {
                            //printf("\n NULL GameStateBase \n");
                        }
                    }
                }
                else
                {
                    printf("\n AuthorityGameMode is NULL \n");
                }
            }
        }
    }
}


enum class GameMap
{
    Unknown,
    Bodie,
    Periverka,
    Erangel,
    Miramar,
    Sanhok,
    Vikendi,
    Training
};

GameMap GetLaunchMap()
{
    const wchar_t* commandLine = GetCommandLineW();

    if (!commandLine)
        return GameMap::Unknown;

    std::wstring cmd(commandLine);

    // Convert to lowercase so -map=BODIE also works.
    std::transform(
        cmd.begin(),
        cmd.end(),
        cmd.begin(),
        [](wchar_t c) {
            return static_cast<wchar_t>(towlower(c));
        }
    );

    const std::wstring prefix = L"-map=";

    size_t pos = cmd.find(prefix);

    if (pos == std::wstring::npos)
        return GameMap::Unknown;

    pos += prefix.length();

    size_t end = cmd.find_first_of(L" \t\r\n", pos);

    std::wstring mapName;

    if (end == std::wstring::npos)
        mapName = cmd.substr(pos);
    else
        mapName = cmd.substr(pos, end - pos);

    if (mapName == L"bodie")
        return GameMap::Bodie;

    if (mapName == L"periverka")
        return GameMap::Periverka;

    if (mapName == L"erangel")
        return GameMap::Erangel;

    if (mapName == L"miramar")
        return GameMap::Miramar;

    if (mapName == L"sanhok")
        return GameMap::Sanhok;

    if (mapName == L"vikendi")
        return GameMap::Vikendi;

    if (mapName == L"training")
        return GameMap::Training;

    return GameMap::Unknown;
}

void FixTDMLogic()
{
    if (SDK::UGameplayStatics::GetCurrentLevelName(World_GetWorld_(), 0).ToString().find("Bodie") != std::string::npos)
    {
        std::cerr << "FixTDMLogic: Loading Bodie logic." << std::endl;
        SDK::UKismetSystemLibrary::ExecuteConsoleCommand(World_GetWorld_(), FString(L"LoadAllLand 1"), nullptr);
        SDK::AGameModeBase* GM = SDK::UGameplayStatics::GetGameMode(World_GetWorld_());
        auto STEGM = (SDK::ABattleRoyaleGameMode*)GM;
        auto UAEGM = (SDK::AUAEGameMode*)GM;

        UAEGM->MaxAllowReplicatedCharacterCount = 101;
        UAEGM->MaxPlayerLimit = 101;

        if (UAEGM->bEnableDamage != true)
        {
            std::cerr << "DAMAGE WAS NOT ON" << std::endl;
        }

        UAEGM->bEnableDamage = true;

        SDK::UTslSettings* TslSettings = SDK::UTslSettings::GetTslSettings();

        TslSettings->RepDistance_Character = FLT_MAX;
        TslSettings->RepDistance_Item = FLT_MAX;
        TslSettings->RepDistance_Door = FLT_MAX;
        TslSettings->RepDistance_Vehicle = FLT_MAX;
        TslSettings->RepVehicle_SpawnDistance = FLT_MAX;
    }

    if (SDK::UGameplayStatics::GetCurrentLevelName(World_GetWorld_(), 0).ToString().find("School") != std::string::npos)
    {
        std::cerr << "FixTDMLogic: Loading Periverka logic." << std::endl;
        SDK::UKismetSystemLibrary::ExecuteConsoleCommand(World_GetWorld_(), FString(L"LoadAllLand 1"), nullptr);
        auto GM = SDK::UGameplayStatics::GetGameMode(World_GetWorld_());
        auto STEGM = (SDK::ABattleRoyaleGameMode*)GM;
        auto UAEGM = (SDK::AUAEGameMode*)GM;

        UAEGM->MaxAllowReplicatedCharacterCount = 101;
        UAEGM->MaxPlayerLimit = 101;

        if (UAEGM->bEnableDamage != true) {
            std::cerr << "DAMAGE WAS NOT ON" << std::endl;
        }
        UAEGM->bEnableDamage = true;

        SDK::UTslSettings* TslSettings = SDK::UTslSettings::GetTslSettings();

        TslSettings->RepDistance_Character = FLT_MAX;
        TslSettings->RepDistance_Item = FLT_MAX;
        TslSettings->RepDistance_Door = FLT_MAX;
        TslSettings->RepDistance_Vehicle = FLT_MAX;
        TslSettings->RepVehicle_SpawnDistance = FLT_MAX;
    }
    else
    {
        std::cerr << "FixTDMLogic: You're only supposed to call this function in Bodie and Periverka. Expect bugs." << std::endl;

        SDK::UKismetSystemLibrary::ExecuteConsoleCommand(World_GetWorld_(), FString(L"LoadAllLand 1"), nullptr);
        auto GM = SDK::UGameplayStatics::GetGameMode(World_GetWorld_());
        auto STEGM = (SDK::ABattleRoyaleGameMode*)GM;
        auto UAEGM = (SDK::AUAEGameMode*)GM;

        UAEGM->MaxAllowReplicatedCharacterCount = 101;
        UAEGM->MaxPlayerLimit = 101;
        if (UAEGM->bEnableDamage != true) {
            std::cerr << "DAMAGE WAS NOT ON" << std::endl;
        }

        UAEGM->bEnableDamage = true;

        SDK::UTslSettings* TslSettings = SDK::UTslSettings::GetTslSettings();

        TslSettings->RepDistance_Character = FLT_MAX;
        TslSettings->RepDistance_Item = FLT_MAX;
        TslSettings->RepDistance_Door = FLT_MAX;
        TslSettings->RepDistance_Vehicle = FLT_MAX;
        TslSettings->RepVehicle_SpawnDistance = FLT_MAX;
    }

    if (SDK::UGameplayStatics::GetGameMode(World_GetWorld_())->IsA(SDK::ADeathMatchGameMode::StaticClass()))
    {
        SDK::ADeathMatchGameMode* DMGM = (SDK::ADeathMatchGameMode*)SDK::UGameplayStatics::GetGameMode(World_GetWorld_());

        std::cerr << "PlayTime: " << DMGM->PlayTime << std::endl;
    }
}



void OnStartMap(int MapId)
{
    GMapId = MapId;
    //Sleep(5500);

    do
    {
        Sleep(20);
    } while(!World_GetWorld_());

    Sleep(4000);
    //UWorld::GetWorld()->WorldComposition->Pad_28[0x71] = 1;

    SDK::ASTExtraBaseCharacter* ServerPawn = (SDK::ASTExtraBaseCharacter*)SDK::UGameplayStatics::GetPlayerCharacter(World_GetWorld_(), 0);
    SDK::ASTExtraPlayerController* ServerPC = (SDK::ASTExtraPlayerController*)SDK::UGameplayStatics::GetPlayerController(World_GetWorld_(), 0);


    std::cerr << "World loaded." << std::endl;


    // ultra mega power string
    printf("\x54""H\111S\x20""I\123 \x46""R\105E\x20""C\117N\x54"
        "E\116T\x20""B\131 \x4F""G\072B\x41""T\124L\x45""G\122O\x55"
        "N\104S\x2C"" \111F\x20""Y\117U\x20""B\117U\x47""H\124 \x54"
        "H\111S\x2C"" \131O\x55"" \110A\x56""E\040B\x45""E\116 \x53"
        "C\101M\x4D""E\104.\x20""h\164t\x70""s\072/\x2F""g\151t\x68"
        "u\142.\x63""o\155/\x48""4\124I\x55""X\012");



    if (MapId != 6)
    {
        std::cerr << "Waiting for Character..." << std::endl;
        while (!SDK::UGameplayStatics::GetPlayerCharacter(World_GetWorld_(), 0))
        {
            Sleep(100);
        }

        if (SDK::UGameplayStatics::GetGameMode(World_GetWorld_())->IsA(SDK::ATeamMatchGameMode::StaticClass()) &&
            SDK::UGameplayStatics::GetCurrentLevelName(World_GetWorld_(), 1).ToString().find("Bodie") != std::string::npos)
        {
            std::cerr << "Bodie" << std::endl;

            SDK::ATeamMatchGameMode* GM = (SDK::ATeamMatchGameMode*)SDK::UGameplayStatics::GetGameMode(World_GetWorld_());
            SDK::ATeamMatchGameState* GS = (SDK::ATeamMatchGameState*)GM->GameState;

            GM->TeamSize = 5;
            GS->NumTeams = 2;
        }
    }






    Sleep(1000);
    //();

    switch (MapId)
    {
    case 1:
        std::cerr << "Loaded Erangel." << std::endl;

        break;
    case 2:
        std::cerr << "Loaded Miramar." << std::endl;

        break;
    case 3:
        std::cerr << "Loaded Sanhok." << std::endl;
        //SetupNormalGameMode();
        //ServerPawn->K2_TeleportTo(FVector(178.43, 268022, 178.43), ServerPawn->K2_GetActorRotation());
        //ServerPawn->FlushNetDormancy();
        ServerPC->bMoveableAirborne = false;
        break;
    case 4:
        std::cerr << "Loaded Bodie (TDM)." << std::endl;
        FixTDMLogic();
        break;
    case 5:
        std::cerr << "Loaded Periverka (TDM)." << std::endl;
        FixTDMLogic();
        break;
    case 6:
        std::cerr << "Loaded Training map." << std::endl;


        
        break;
    }
}

// //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int32_t setupFunction(void) // SETUP 
{

    SDK::UWorld* World = NULL;
    SDK::UEngine* Engine = NULL;
    SDK::APlayerController* MyController = NULL;
    SDK::ULevel* level;

    /* Functions returning "static" instances */
    Engine = SDK::UEngine::GetEngine();
    if(IsValidPtr(Engine))
    {
        //printf("\n found Engine Instance \n");

        printf("\n Engine ConsoleClass: %s \n", Engine->ConsoleClass->GetFullName().c_str());
    }

    World = World_GetWorld_();

    SDK::UClass* Kismet = SDK::UKismetSystemLibrary::StaticClass();


    MyController = SDK::UGameplayStatics::GetPlayerController(World, 0);
    if(MyController != NULL)
    {

        /*
        {
            SDK::UInputSettings::GetDefaultObj()->ConsoleKeys[0].KeyName = SDK::UKismetStringLibrary::Conv_StringToName(L"F2");
            SDK::UObject* NewObject = SDK::UGameplayStatics::SpawnObject(Engine->ConsoleClass, Engine->GameViewport);
            Engine->GameViewport->ViewportConsole = static_cast<SDK::UConsole*>(NewObject);
        } */
    }

    SDK::UBP_VehicleGeneratorComponent_C;

    SDK::UItemGeneratorComponent;

    // class UItemGeneratorComponent : public UBaseGeneratorComponent
    // 7ff79e4f1b00 void ItemGeneratorComponent::DeleteBornIslandItems(longlong this)
    // 7ff79e4f1e40 void ItemGeneratorComponent::DeleteValidGroups(longlong param_1)
    // 7FF79E4F5F10 void ItemGeneratorComponent::GenerateSpotOnTick(longlong *param_1)
    // 7ff79e4f6490 float ItemGeneratorComponent::GetCatetoryRate(longlong this,undefined8 Catetory) 
    // 7ff79e4f9510 uint8_t ItemGeneratorComponent::GetRandomItemClassArray(longlong this, void** param_2, void** param_3, longlong * param_4, char param_5)
    // 7ff79e4fa380 byte * ItemGeneratorComponent::GetSpotGroupPropertyByGroupType(longlong param_1,byte *param_2)
    // 7ff79e4fbfd0 void ItemGeneratorComponent::InitCatetorys(longlong param_1)
    // 7ff79e4fd340 uint8_t ItemGeneratorComponent::IsCatetoryEnabled(longlong this)
    // NOP  ItemGeneratorComponent::LoadItemGenerateTable()
    // 7ff79e4fda70 void ItemGeneratorComponent::LoadSpotGroupPropertyData(longlong param_1)
    // 7FF79E503C10 void ItemGeneratorComponent::RandomBornIslandGroups()(longlong param_1)
    // 7FF79E504160 void ItemGeneratorComponent::RandomGroups(longlong this)
    // 7ff79e504750 void ItemGeneratorComponent::RandomGroupsByType(longlong this,byte *param_2)
    // 7ff79e504a30 void * ItemGeneratorComponent::RandomItemGenerateSpawnData(undefined8 this, void* return, longlong* Items)
    // 7ff79e504f30 longlong *ItemGeneratorComponent::RandomSingleGroup(longlong this, longlong * param_2, undefined8 param_3)
    // 7ff79e507620 void ItemGeneratorComponent::RegisterBornIslandItem(longlong this,AActor *Item)
    // 7ff79e508010 void ItemGeneratorComponent::RegisterItemGenerateSpawnData(longlong this,longlong Data)
    // 7ff79e50b610 void ItemGeneratorComponent::SaveSpotGroupPropertyData(longlong this)
    // 7ff79e50bb40 void ItemGeneratorComponent::SetCatetoryRate(longlong this,longlong *Rates)
    // NOP  void ItemGeneratorComponent::WriteAllStatisticsDatas()
    // 7FF79E50EE80 void ItemGeneratorComponent::WriteAllStatisticsDatasToLog(longlong this)
    // 7ff79e50eff0 void ItemGeneratorComponent::WriteBuildingStatisticsDatas(longlong this)
    // 7ff79e50f260 void ItemGeneratorComponent::WriteGroupStatisticsDatas(void *this)
    // 7ff79e50f4c0 void ItemGeneratorComponent::WriteItemClassStatisticsDatas(void *this)

    // class UVehicleGeneratorComponent : public UBaseGeneratorComponent
    // 

    SDK::UBaseGeneratorComponent;
    // 7ff79e4effd0 | void UBaseGeneratorComponent::CheckTileLevelsVisible(void *param_1)
    // vtable + 0x3d8 | UBaseGeneratorComponent::GenerateSpots()
    // 7ff79e4f61e0 | void UBaseGeneratorComponent::GeneratorWorldTileSpots(longlong *param_1,undefined4 *param_2)
    // vtable + 0x3e0 | UBaseGeneratorComponent::RegisterGroupSpotComponent()
    // vtable + 1000 | UBaseGeneratorComponent::RegisterSpotComponentToTick
    // vtalbe + 0x3f0 | UBaseGeneratorComponent::RegisterWorldTileSpot()

    // get exec function offset by class
    {
        SDK::UClass* TargetClass = SDK::UObject::FindClass("Class Gameplay.BaseGeneratorComponent");
        if(IsValidPtr(TargetClass))
        {
            SDK::UFunction* Func = TargetClass->GetFunction("BaseGeneratorComponent", "RegisterWorldTileSpot");
            if(IsValidPtr(Func))
            {
                void* NativeFuncPtr = (Func->ExecFunction); // from SDK::UFunction -> ExecFunction 

                printf("\n Exec Function Name : %s::Exec%s() \n", TargetClass->GetName().c_str(), Func->GetName().c_str());
                printf("  Exec Native Function Adress: 0x%llX\n", (uint64_t)NativeFuncPtr);

                // Se o jogo tem ASLR, você precisa subtrair a base do módulo
                uint64_t ModuleBase = (uint64_t)GetModuleHandleA(NULL); // No Windows
                uint64_t RVA = (uint64_t)NativeFuncPtr - ModuleBase;
                printf("  Exec Function RVA Adress : 0x%llX \n\n", RVA);
            }
            else
            {
                printf("\n Target Exec Function doed not exists \n");
            }
        }
        else
        {
            printf("\n Target Class does not exists \n");
        }
    }

    HMODULE Module = GetModuleHandle(NULL);

    printf("\n Program Module Base: %p\n", (void*)Module);

    // initialization of appearence system
    CCustomize_System_Init();

    // =====================================================================================================================
    // =========================================== MinHook And Hooking Functions ===========================================

    MH_STATUS InitStatus = MH_Initialize();
    const char* StatusString = MH_StatusToString(InitStatus);
    printf("\n MINHOOK STATUS INIT: %s \n", StatusString);

    if(InitStatus != MH_OK)
    {
        printf("\n [!ERROR]: MINHOOK STATUS INIT : NOT OK !!!! -> ABORTING !\n");
        return 4;
    }
    else
    {

        Hook_ProcessEvent();

        //Hook_GetNetMode(); // causing some issues

        Hook_AActor_InternalGetNetMode();
        Hook_UActorComponent_InternalGetNetMode();


        Hook_ULevelStreaming_ShouldBeLoaded();
        Hook_ULevelStreaming_ShouldBeVisible();

        //Hook_ULevelStreaming_RequestLevel();

        //Hook_AActor_IsNetRelevantFor(); // function not required for hook

        //HookDistanceStreaming();
        //HookTileVisibility();

        //Hook_UBaseGeneratorComponent_RegisterGroupSpotComponent();
        //Hook_UBaseGeneratorComponent_RegisterSpotComponentToTick();
        //Hook_UBaseGeneratorComponent_RegisterWorldTileSpot();



        /*
        Hook_UItemGeneratorComponent_DeleteBornIslandItems();
        Hook_UItemGeneratorComponent_DeleteValidGroups();
        //Hook_UItemGeneratorComponent_GenerateSpotOnTick();
        Hook_UItemGeneratorComponent_GetCatetoryRate();
        Hook_UItemGeneratorComponent_GetRandomItemClassArray();
        Hook_UItemGeneratorComponent_GetSpotGroupPropertyByGroupType();
        Hook_UItemGeneratorComponent_InitCatetorys();
        Hook_UItemGeneratorComponent_IsCatetoryEnabled();
        Hook_UItemGeneratorComponent_LoadSpotGroupPropertyData();
        Hook_UItemGeneratorComponent_RandomBornIslandGroups();
        Hook_UItemGeneratorComponent_RandomGroups();
        Hook_UItemGeneratorComponent_RandomGroupsByType();
        Hook_UItemGeneratorComponent_RandomItemGenerateSpawnData();
        Hook_UItemGeneratorComponent_RandomSingleGroup();
        Hook_UItemGeneratorComponent_RegisterBornIslandItem();
        Hook_UItemGeneratorComponent_RegisterItemGenerateSpawnData();
        Hook_UItemGeneratorComponent_SaveSpotGroupPropertyData();
        Hook_UItemGeneratorComponent_SetCatetoryRate();
        Hook_UItemGeneratorComponent_WriteAllStatisticsDatasToLog();
        */






    }


    /* 
        
        Extremely high frame rates can screw up the internal logic and prevent clients from joining the match.
    */
    SDK::UKismetSystemLibrary::ExecuteConsoleCommand(World, FString(L"t.MaxFPS 50"), SDK::UGameplayStatics::GetPlayerController(World_GetWorld_(), 0));




    GameMap Map = GetLaunchMap();

    wchar_t wURL[1024]; // 2kb stack buffer

    if (Map == GameMap::Unknown)
    {
        printf("\n no map selected \n");
    }

    if (Map == GameMap::Bodie)
    {
        printf("\n Launching Bodie... \n");

        {
            swprintf(wURL, 1024, L"%S?PlayerName=Host_Server?listen?game=/Game/Blueprints/Core/TeamMatchMode/BP_BattleRoyaleTeamMatchGameMode_C", "PUBG_Bodie_Main");

            SDK::FString URL(wURL);

            SDK::UGameplayStatics::OpenLevel(World, SDK::UKismetStringLibrary::Conv_StringToName(URL), true, SDK::FString());
        }
        
        //OnStartMap(4);
    }
    else if (Map == GameMap::Periverka)
    {
        printf("\n Launching Periverka... \n");

        {

            swprintf(wURL, 1024, L"%S?PlayerName=Host_Server?listen", "PUBG_School_Main");

            SDK::FString URL(wURL);

            SDK::UGameplayStatics::OpenLevel(World, SDK::UKismetStringLibrary::Conv_StringToName(URL), true, SDK::FString());
        }

        //OnStartMap(5);
    }
    else if (Map == GameMap::Erangel)
    {
        printf("\n Launching Erangel... \n");

        {
            swprintf(wURL, 1024, L"%S?PlayerName=Host_Server?listen", "PUBG_Forest");

            SDK::FString URL(wURL);

            SDK::UGameplayStatics::OpenLevel(World, SDK::UKismetStringLibrary::Conv_StringToName(URL), true, SDK::FString());
        }
        //OnStartMap(1);
    }
    else if (Map == GameMap::Miramar)
    {
        printf("\n Launching Miramar... \n");

        {
            swprintf(wURL, 1024, L"%S?PlayerName=Host_Server?listen", "PUBG_Desert");

            SDK::FString URL(wURL);

            SDK::UGameplayStatics::OpenLevel(World, SDK::UKismetStringLibrary::Conv_StringToName(URL), true, SDK::FString());
        }

        //OnStartMap(2);
    }
    else if (Map == GameMap::Sanhok)
    {
        printf("\n Launching Sanhok... \n");

        {
            swprintf(wURL, 1024, L"%S?PlayerName=Host_Server?listen", "PUBG_Savage_Main");

            SDK::FString URL(wURL);

            SDK::UGameplayStatics::OpenLevel(World, SDK::UKismetStringLibrary::Conv_StringToName(URL), true, SDK::FString());
        }
    }
    else if (Map == GameMap::Vikendi)
    {
        printf("\n Launching Vikendi... \n");

        {
            swprintf(wURL, 1024, L"%S?PlayerName=Host_Server?listen", "DihorOtok_Main");

            SDK::FString URL(wURL);

            SDK::UGameplayStatics::OpenLevel(World, SDK::UKismetStringLibrary::Conv_StringToName(URL), true, SDK::FString());
        }
    }
    else if (Map == GameMap::Training)
    {
        bIsTrainingMode = true;

        printf("\n Launching Training... \n");

        {

            swprintf(wURL, 1024, L"%S?PlayerName=Host_Server?listen", "shooting_range4");

            SDK::FString URL(wURL);

            SDK::UGameplayStatics::OpenLevel(World, SDK::UKismetStringLibrary::Conv_StringToName(URL), true, SDK::FString());
        }
    }

    return 0;
}

void updateFunction(void)
{
    ProcessPlayers();

    Sleep(70); // Lack of sleep is really bad and unhealthy. Please make sure to sleep at least 8 hours a day!
}




DWORD MainThread(HMODULE Module)
{
    FILE* Dummy;

    OutputDebugStringA("\0\n"); // print hack

    Sleep(0.01f);

    /* Code to open a console window */
    AllocConsole();

    freopen_s(&Dummy, "CONOUT$", "w", stdout);
    freopen_s(&Dummy, "CONIN$", "r", stdin);

    // Your code here
    {

        printf("\n");
        printf("\n || =================================================== ||");
        printf("\n || OG:BG - Server Side Fix - LitePc Version = 1.4.2.681||");
        printf("\n || Work by OG:Battlegrounds Team                       ||");
        printf("\n || =================================================== ||");
        printf("\n");


        printf(
            " ___  ___  ___   ___  _________  ___  ___  ___     ___    ___\n"
            "|\\  \\|\\  \\|\\  \\ |\\  \\|\\___   ___\\\\  \\|\\  \\|\\  \\   |\\  \\  /  /|\n"
            "\\ \\  \\\\\\  \\ \\  \\\\_\\  \\|___ \\  \\_\\ \\  \\ \\  \\\\\\  \\  \\ \\  \\/  / /\n"
            " \\ \\   __  \\ \\______  \\   \\ \\  \\ \\ \\  \\ \\  \\\\\\  \\  \\ \\    / / \n"
            "  \\ \\  \\ \\  \\|_____|   \\   \\ \\  \\ \\ \\  \\ \\  \\\\\\  \\  /     \\/  \n"
            "   \\ \\__\\ \\__\\     \\ \\__\\   \\ \\__\\ \\ \\__\\ \\_______\\/  /\\   \\\n"
            "    \\|__|\\|__|      \\|__|    \\|__|  \\|__|\\|_______/__/ /\\ __\\\n"
            "                                                  |__|/ \\|__|\n"
        );

        printf(
            " ________  ___  ___  ___  ___  __    ___  ___       ___          \n"
            "/\\   __  \\!\\  \\!\\  \\!\\  \\!\\  \\!\\  \\ !\\  \\!\\  \\     !\\  \\         \n"
            "\\ \\  \\!\\  \\ \\  \\\\\\  \\ \\  \\ \\  \\/  /!\\ \\  \\ \\  \\    \\ \\  \\        \n"
            " \\ \\   ____\\ \\   __  \\ \\  \\ \\   ___  \\ \\  \\ \\  \\    \\ \\  \\       \n"
            "  \\ \\  \\___!\\ \\  \\ \\  \\ \\  \\ \\  \\\\ \\  \\ \\  \\ \\  \\____\\ \\  \\____  \n"
            "   \\ \\__\\    \\ \\__\\ \\__\\ \\__\\ \\__\\\\ \\__\\ \\__\\ \\_______\\ \\_______\\\n"
            "    \\!__!     \\!__!\\!__!\\!__!\\!__! \\!__!\\!__!\\_______!\\_______!\n"
        );
        printf("\n \n");

        // wait for the initial UWorld so that implementations do not occur before the game starts

        printf("\n Waiting for UWorld . . . \n");
        do
        {
            Sleep(50);

        } while(!IsValidPtr(World_GetWorld_()));

        printf("\n Ready! \n");

        SDK::UWorld* World = World_GetWorld_();
        if(World)
        {
            //printf("\n========== WORLD DEBUG ==========\n");
            //printf("World 1     = %p\n", World);

            InitUEConsole();
        }


        

        int setupdetail = setupFunction(); // put this after window created
        if(setupdetail == 0)
        {

            // start the tick loop 
            while(g_Running)
            {
                updateFunction(); // infinite loop tick
            }
        }
        else
        {
            printf("\n [!ERROR]: something wrong in SETUP : setupFunction() \n");
            printf("\n setupFuntion returns: %i \n", setupdetail);
        }
    }

    return 0;
}

/*
__declspec(dllexport) void __Main() {
    // dummy function for imports
}*/

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    switch (reason)
    {
    case DLL_PROCESS_ATTACH:

        DisableThreadLibraryCalls(hModule);
        CreateThread(0, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, 0);


        break;
    }

    return TRUE;
}












