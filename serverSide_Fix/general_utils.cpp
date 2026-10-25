
#include"general_utils.hpp"

//#include"SDK/Engine_classes.hpp"

#include<Windows.h>

SDK::UWorld* World_GetWorld_heavy()
{
    int i = 0;

    int WorldCount = 0;


    if (SDK::UObject::GObjects)
    {
        for (i = 0; i < SDK::UObject::GObjects->Num(); ++i)
        {
            SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

            if (!Obj || Obj->IsDefaultObject())
                continue;

            if (Obj->IsA(SDK::UWorld::StaticClass()))
            {
                SDK::UWorld* World = (SDK::UWorld*)Obj;

                /*
                printf("WORLD[%d] = %p | GameMode=%p | NetDriver=%p\n",
                    WorldCount,
                    World,
                    World->AuthorityGameMode,
                    World->NetDriver); */

                if (World->AuthorityGameMode != nullptr)
                {
                    if(World->AuthorityGameMode->IsA(SDK::AGameModeBase::StaticClass()))
                    {
                        return World;
                    }

                }

                WorldCount++;
            }
        }
    }
    else
    {
        printf("\n UWorld::GetWorld(): GObjects is NULL !\n");
    }

    return NULL;
}

SDK::UWorld* World_GetWorld_()
{
    if (SDK::UEngine* Engine = SDK::UEngine::GetEngine())
    {
        if(!Engine->GameViewport)
        {
            return NULL;
        }
        else
        {
            //return *(SDK::UWorld**)((uintptr_t)Engine->GameViewport + 0x0150);

            SDK::UObject* Obj = *(SDK::UWorld**)((uintptr_t)Engine->GameViewport + 0x0150);
            if(Obj)
            {
                if (Obj->IsA(SDK::UWorld::StaticClass()))
                {
                    SDK::UWorld* World = (SDK::UWorld*)Obj;

                    if (World->AuthorityGameMode != nullptr)
                    {
                        if (World->AuthorityGameMode->IsA(SDK::AGameModeBase::StaticClass()))
                        {
                            return World;
                        }
                        else
                        {
                            return NULL;
                        }

                    }
                    else
                    {
                        return NULL;
                    }

                }
                else
                {
                    return NULL;
                }
            }
            else
            {
                return NULL;
            }
        }
    }

    return NULL;
}


bool IsValidPtr(void* ptr)
{
    MEMORY_BASIC_INFORMATION mbi;

    if(!ptr)
    {
        return false;
    }
        
    if(VirtualQuery(ptr, &mbi, sizeof(mbi)))
    {
        DWORD protect;

        // Check if a memory page is allocatedand readable.
        protect = mbi.Protect;
        if((mbi.State == MEM_COMMIT) &&
        !(protect & PAGE_NOACCESS)   &&
        !(protect & PAGE_GUARD))
        {
            return true;
        }
    }
    return false;
}

void debugMulticastProperty(SDK::UMulticastDelegateProperty_ MultiCast)
{
    UC::TArray<SDK::FScriptDelegate>& ScriptDelegateArray = *(UC::TArray<SDK::FScriptDelegate>*)(&MultiCast);
    {
        int32_t i = 0;
        int32_t Count = ScriptDelegateArray.Num();
        printf("\n--- reading Delegate Array (%d Delegates Found) ---\n", Count);

        for (i = 0; i < Count; i++)
        {
            const SDK::FScriptDelegate& Delegate = ScriptDelegateArray[i];

            SDK::UObject* ObjPtr = Delegate.Object.Get();

            if(IsValidPtr(ObjPtr))
            {
                std::string ClassName = "Unknown";
                std::string FuncNameStr = Delegate.FunctionName.ToString();


                //printf("Object ptr : %p\n", (void*)ObjPtr);
                
                
                //SDK::UClass* Class = ObjPtr->Class;

                SDK::UClass* Class = ObjPtr->GetClass();
                printf("Class ptr: %p\n", ObjPtr->Class);

                if(IsValidPtr(Class))
                {
                    std::string FullName = Class->GetName();
                    //printf("FullName: %s\n", FullName.c_str());
                    ClassName = FullName;
                }

                printf("[%d] Object: 0x%p | Class: %s | Function: %s\n", i, (void*)ObjPtr, ClassName.c_str(), FuncNameStr.c_str());
            }
            else
            {
                // If the object has turned into dust, but the slot is still in the array awaiting cleanup
                std::string FuncNameStr = Delegate.FunctionName.ToString();
                printf("[%d] Object: DEAD/NULL | FunctionName (Pending): %s\n", i, FuncNameStr.c_str());
            }
        }
        printf("-------------------------------------------------------\n\n");

    }
}


