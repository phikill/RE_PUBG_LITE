


#ifndef CHARACTERCORE_HPP
#define CHARACTERCORE_HPP

#include<stdint.h>

#include"SDK/ShadowTrackerExtra_classes.hpp"





enum ECharacterFace : int32_t
{
    Face_01 = 400101,
    Face_02 = 400102,
    Face_03 = 400103,
    Face_04 = 400104,
    Face_05 = 400105,
    Face_06 = 400106,
    Face_07 = 400107,
    Face_08 = 400108
};

enum ECharacterHair : int32_t
{
    // Hair A
    Hair_A_01 = 40601001,
    Hair_A_02 = 40602001,
    Hair_A_03 = 40603001,
    Hair_A_04 = 40604001,
    Hair_A_05 = 40605001,
    Hair_A_06 = 40606001,

    // Hair B
    Hair_B_01 = 40601002,
    Hair_B_02 = 40602002,
    Hair_B_03 = 40603002,
    Hair_B_04 = 40604002,
    Hair_B_05 = 40605002,
    Hair_B_06 = 40606002,

    // Hair C
    Hair_C_01 = 40601003,
    Hair_C_02 = 40602003,
    Hair_C_03 = 40603003,
    Hair_C_04 = 40604003,
    Hair_C_05 = 40605003,
    Hair_C_06 = 40606003,

    // Hair D
    Hair_D_01 = 40601004,
    Hair_D_02 = 40602004,
    Hair_D_03 = 40603004,
    Hair_D_04 = 40604004,
    Hair_D_05 = 40605004,
    Hair_D_06 = 40606004,

    // Hair E
    Hair_E_01 = 40601005,
    Hair_E_02 = 40602005,
    Hair_E_03 = 40603005,
    Hair_E_04 = 40604005,
    Hair_E_05 = 40605005,
    Hair_E_06 = 40606005,

    // Hair F
    Hair_F_01 = 40601006,
    Hair_F_02 = 40602006,
    Hair_F_03 = 40603006,
    Hair_F_04 = 40604006,
    Hair_F_05 = 40605006,
    Hair_F_06 = 40606006,

    // Hair G
    Hair_G_01 = 40601007,
    Hair_G_02 = 40602007,
    Hair_G_03 = 40603007,
    Hair_G_04 = 40604007,
    Hair_G_05 = 40605007,
    Hair_G_06 = 40606007,

    // Hair H
    Hair_H_01 = 40601008,
    Hair_H_02 = 40602008,
    Hair_H_03 = 40603008,
    Hair_H_04 = 40604008,
    Hair_H_05 = 40605008,
    Hair_H_06 = 40606008,

    // Hair I
    Hair_I_01 = 40606009,
    Hair_I_02 = 40601009,
    Hair_I_03 = 40602009,
    Hair_I_04 = 40603009,
    Hair_I_05 = 40604009,
    Hair_I_06 = 40605009
};

#define ACCOUNT_ID_LEN     64 // 63 + 1 for string buffer 

typedef enum 
{
    STATUS_EMPTY = 0,
    STATUS_NEEDS_FETCH,  // need to fetch the data from the Node.js API.
    STATUS_FETCHING,     // HTTP in progress on the Tick Thread
    STATUS_NEEDS_APPLY,  // Cached data ready! Game Thread needs to spawn/apply.
    STATUS_READY         // Successfully applied to the figure!
} PlayerStatus;

typedef struct APPEARENCE_
{
    int32_t gender_ID;
    int32_t face_ID;
    int32_t hair_ID;
} Character_appearenceData;

typedef struct CLOTHE_
{
    int32_t head_itemID;
    int32_t mask_itemID;
    int32_t body_itemID;
    int32_t legs_itemID;
    int32_t foot_itemID;

} Character_clothesData;

typedef struct CharacterPlayerData_
{
    char account_id[ACCOUNT_ID_LEN];
    Character_appearenceData appearenceData;
    Character_clothesData clotheData;
    SDK::ASTExtraPlayerController* Controller;
    SDK::ASTExtraBaseCharacter* Character;

    PlayerStatus status;

} CharacterPlayerData;




int OGBG_UpdateBaseCharacter(SDK::ASTExtraBaseCharacter*   STExtraBaseCharacter, 
                              SDK::ECharacterGender         gender, 
                              ECharacterFace                head_id, 
                              ECharacterHair                hair_id);


void FixHitBox(SDK::UPrimitiveComponent* HitBox);



#endif /* CHARACTERCORE_HPP */
