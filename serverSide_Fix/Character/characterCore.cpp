

#include"characterCore.hpp"





int OGBG_UpdateBaseCharacter(SDK::ASTExtraBaseCharacter* STExtraBaseCharacter, SDK::ECharacterGender gender, ECharacterFace head_id, ECharacterHair hair_id)
{
    if(STExtraBaseCharacter)
    {
        SDK::UClass* AvatarCompClass = SDK::UAvatarComponent::StaticClass();

        SDK::UActorComponent* FoundComp = STExtraBaseCharacter->GetComponentByClass(AvatarCompClass);
        if(FoundComp != nullptr)
        {
            SDK::UAvatarComponent* AvatarComponent = reinterpret_cast<SDK::UAvatarComponent*>(FoundComp);
            if(AvatarComponent)
            {
                SDK::UCharacterAvatarComponent* CharacterAvatarComponent = (SDK::UCharacterAvatarComponent*)AvatarComponent;
                if(CharacterAvatarComponent)
                {
                    int32_t updateGender = (int32_t)gender;

                    //CharacterAvatarComponent->SetAvatarGender(updateGender); // change main gender of avatar
                    //CharacterAvatarComponent->InitialAvatarParam(updateGender); // initialize gender bones
                    //CharacterAvatarComponent->InitMasterComponent(updateGender); // align the bones

                    /**/
                    int synCount = CharacterAvatarComponent->synData.Num();
                    for(int i = 0; i < synCount; i++)
                    {
                        CharacterAvatarComponent->synData[i].gender = updateGender;
                    }

                    int defaultSynDataCount = CharacterAvatarComponent->defaultSynData.Num();
                    for(int i = 0; i < defaultSynDataCount; i++)
                    {
                        CharacterAvatarComponent->defaultSynData[i].gender = updateGender;
                    }


                    CharacterAvatarComponent->InitDefaultAvatarByResID(updateGender, head_id, hair_id);

                    // UEMeshReload
                    CharacterAvatarComponent->isNeedRefresh = true;
                    CharacterAvatarComponent->RefreshAvatar();

                    // Unreal network system to report character updates. RPC

                    //CharacterAvatarComponent->OnRep_SetDefaultCfg();
                    CharacterAvatarComponent->OnRep_AvatarMeshChanged();

                    CharacterAvatarComponent->ApplyConfig();

                    if (STExtraBaseCharacter->AvatarComponent == NULL)
                    {
                        printf("\n AvaterComponent is NULL, applying \n");
                        STExtraBaseCharacter->AvatarComponent = CharacterAvatarComponent;
                    }

                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            else
            {
                return 1;
            }
        }
        else
        {
            printf("\n OGBG_UpdateBaseCharacter() [ERROR!]:  The character does not actually have an active AvatarComponent.\n");
            return 1;
        }
    }
    else
    {
        return 1;
    }

}


void FixHitBox(SDK::UPrimitiveComponent* HitBox)
{
    if (!HitBox) return;

    //if (IsReadableMemory(HitBox))
    {
        if (HitBox->GetCollisionEnabled() != SDK::ECollisionEnabled::QueryOnly)
        {
            HitBox->SetCollisionEnabled(SDK::ECollisionEnabled::QueryOnly);
            HitBox->SetCollisionResponseToAllChannels(SDK::ECollisionResponse::ECR_Overlap);
            HitBox->SetIsReplicated(true);
            HitBox->bReplicates = true;
            HitBox->AlwaysLoadOnClient = true;
            HitBox->AlwaysLoadOnServer = true;
        }
    }
}


