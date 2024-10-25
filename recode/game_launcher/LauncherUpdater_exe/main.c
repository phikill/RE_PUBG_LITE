
#include<stdio.h>
#include<stdlib.h>



/*
void FUN_14000d640(HINSTANCE param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
{
  WCHAR *pWVar1;
  WCHAR WVar2;
  void *pvVar3;
  DWORD DVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  BOOL BVar8;
  LPWSTR lpCmdLine;
  LPWSTR *hMem;
  longlong lVar9;
  HMODULE pHVar10;
  wchar_t *pwVar11;
  HICON pHVar12;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar13;
  void *pvVar14;
  int *pNumArgs;
  LPWSTR pWVar15;
  HRSRC pHVar16;
  undefined8 *puVar17;
  LPCWSTR pWVar18;
  int iVar19;
  undefined8 uVar20;
  LPCWSTR pWVar21;
  undefined auStackY_988 [32];
  WCHAR local_940;
  undefined6 uStack_93e;
  undefined8 local_930;
  ulonglong uStack_928;
  HINSTANCE local_920;
  WCHAR local_918;
  undefined6 uStack_916;
  undefined8 local_908;
  ulonglong uStack_900;
  SHELLEXECUTEINFOW local_8f8;
  int local_888 [2];
  undefined2 local_880;
  undefined6 uStack_87e;
  longlong local_870;
  ulonglong local_868;
  undefined2 local_860;
  undefined6 uStack_85e;
  undefined8 local_850;
  ulonglong uStack_848;
  undefined2 local_840;
  undefined6 uStack_83e;
  undefined8 local_830;
  ulonglong uStack_828;
  undefined2 local_820;
  undefined6 uStack_81e;
  undefined8 local_810;
  ulonglong uStack_808;
  undefined **local_7f8;
  undefined8 *local_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined4 local_7d8;
  undefined4 local_7d4;
  undefined2 local_7d0 [8];
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined local_7a8;
  undefined4 local_7a4;
  undefined2 local_798;
  undefined6 uStack_796;
  undefined8 local_788;
  ulonglong uStack_780;
  undefined8 local_778;
  DWORD local_770;
  undefined4 local_76c;
  _RTL_CRITICAL_SECTION local_768 [2];
  LPCWSTR **local_700 [3];
  ulonglong local_6e8;
  undefined4 local_2a8;
  longlong local_2a0 [9];
  WCHAR local_258 [264];
  ulonglong local_48;
  
  pNumArgs = local_888;
  local_48 = DAT_1401747c0 ^ (ulonglong)auStackY_988;
  iVar19 = (int)param_4;
  local_920 = param_1;
  lpCmdLine = GetCommandLineW();
  local_888[0] = 0;
  hMem = CommandLineToArgvW(lpCmdLine,pNumArgs);
  if ((hMem == (LPWSTR *)0x0) || (local_888[0] < 4)) 
  {
    FUN_14000c390(1,pNumArgs,param_3,param_4);
  }
  else 
  {
    pWVar15 = local_258;
    DVar4 = GetCurrentDirectoryW(0x104,pWVar15);
    if (DVar4 == 0) 
    {
      FUN_14000c390(3,pWVar15,param_3,param_4);
      goto LAB_14000df63;
    }
    local_788 = 0;
    uStack_780 = 7;
    local_798 = 0;
    FUN_14000ec30((longlong *)&local_798,hMem[1],param_3);
    local_810 = 0;
    uStack_808 = 7;
    local_820 = 0;
    FUN_14000ec30((longlong *)&local_820,hMem[2],param_3);
    local_870 = 0;
    local_868 = 7;
    local_880 = 0;
    FUN_14000ec30((longlong *)&local_880,hMem[3],param_3);
    if (lpCmdLine != (LPWSTR)0x0) 
    {
      if (*hMem != (LPWSTR)0x0) 
      {
        if (*lpCmdLine == L'\"') 
        {
          lpCmdLine = lpCmdLine + 1;
        }
        lVar9 = -1;
        do 
        {
          lVar9 = lVar9 + 1;
        } while ((*hMem)[lVar9] != L'\0');
        WVar2 = lpCmdLine[lVar9];
        lpCmdLine = lpCmdLine + lVar9;
        if ((WVar2 != L'\0') && (WVar2 == L'\"')) 
        {
          WVar2 = lpCmdLine[1];
          lpCmdLine = lpCmdLine + 1;
        }
        while ((WVar2 != L'\0' && (WVar2 == L' '))) 
        {
          pWVar1 = lpCmdLine + 1;
          lpCmdLine = lpCmdLine + 1;
          WVar2 = *pWVar1;
        }
      }
      if (lpCmdLine != (LPWSTR)0x0) 
      {
        if (hMem[1] != (LPWSTR)0x0) 
        {
          if (*lpCmdLine == L'\"') 
          {
            lpCmdLine = lpCmdLine + 1;
          }
          lVar9 = -1;
          do {
            lVar9 = lVar9 + 1;
          } while (hMem[1][lVar9] != L'\0');
          WVar2 = lpCmdLine[lVar9];
          lpCmdLine = lpCmdLine + lVar9;
          if ((WVar2 != L'\0') && (WVar2 == L'\"')) 
          {
            WVar2 = lpCmdLine[1];
            lpCmdLine = lpCmdLine + 1;
          }
          while ((WVar2 != L'\0' && (WVar2 == L' '))) 
          {
            pWVar15 = lpCmdLine + 1;
            lpCmdLine = lpCmdLine + 1;
            WVar2 = *pWVar15;
          }
        }
        if (lpCmdLine != (LPWSTR)0x0) 
        {
          if (hMem[2] != (LPWSTR)0x0) 
          {
            if (*lpCmdLine == L'\"') 
            {
              lpCmdLine = lpCmdLine + 1;
            }
            lVar9 = -1;
            do {
              lVar9 = lVar9 + 1;
            } while (hMem[2][lVar9] != L'\0');
            WVar2 = lpCmdLine[lVar9];
            lpCmdLine = lpCmdLine + lVar9;
            if ((WVar2 != L'\0') && (WVar2 == L'\"')) 
            {
              WVar2 = lpCmdLine[1];
              lpCmdLine = lpCmdLine + 1;
            }
            while ((WVar2 != L'\0' && (WVar2 == L' '))) 
            {
              pWVar15 = lpCmdLine + 1;
              lpCmdLine = lpCmdLine + 1;
              WVar2 = *pWVar15;
            }
          }
          if ((lpCmdLine != (LPWSTR)0x0) && (hMem[3] != (LPWSTR)0x0)) 
          {
            if (*lpCmdLine == L'\"') 
            {
              lpCmdLine = lpCmdLine + 1;
            }
            lVar9 = -1;
            do 
            {
              lVar9 = lVar9 + 1;
            } while (hMem[3][lVar9] != L'\0');
            WVar2 = lpCmdLine[lVar9];
            lpCmdLine = lpCmdLine + lVar9;
            if ((WVar2 != L'\0') && (WVar2 == L'\"')) 
            {
              WVar2 = lpCmdLine[1];
              lpCmdLine = lpCmdLine + 1;
            }
            while ((WVar2 != L'\0' && (WVar2 == L' '))) 
            {
              pWVar1 = lpCmdLine + 1;
              lpCmdLine = lpCmdLine + 1;
              WVar2 = *pWVar1;
            }
          }
        }
      }
    }
    local_830 = 0;
    uStack_828 = 7;
    local_840 = 0;
    FUN_14000ec30((longlong *)&local_840,lpCmdLine,param_3);
    LocalFree(hMem);
    if (local_870 == 0) 
    {
      FUN_14000c390(2,lpCmdLine,param_3,param_4);
    }
    else 
    {
      local_860 = 0;
      local_850 = 0;
      uStack_848 = 7;
      FUN_14000ec30((longlong *)&local_860,local_258,param_3);
      LoadStringW(param_1,0x67,(LPWSTR)&DAT_1401779e0,100);
      uVar20 = 100;
      LoadStringW(param_1,0x6d,(LPWSTR)&DAT_140177910,100);
      pHVar10 = GetModuleHandleW((LPCWSTR)0x0);
      pwVar11 = (wchar_t *)FUN_1400140d0((longlong *)&local_940,0x68,pHVar10);
      if (7 < *(ulonglong *)(pwVar11 + 0xc)) 
      {
        pwVar11 = *(wchar_t **)pwVar11;
      }
      lVar5 = _wtol(pwVar11);
      if (7 < uStack_928) 
      {
        pvVar3 = (void *)CONCAT62(uStack_93e,local_940);
        pvVar14 = pvVar3;
        if ((0xfff < uStack_928 * 2 + 2) &&
           (pvVar14 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar14)))) 
           {
                    /* WARNING: Subroutine does not return */
        /*  _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar14);
      }
      pHVar10 = GetModuleHandleW((LPCWSTR)0x0);
      pwVar11 = (wchar_t *)FUN_1400140d0((longlong *)&local_940,0x69,pHVar10);
      if (7 < *(ulonglong *)(pwVar11 + 0xc)) 
      {
        pwVar11 = *(wchar_t **)pwVar11;
      }
      lVar6 = _wtol(pwVar11);
      if (7 < uStack_928) 
      {
        pvVar3 = (void *)CONCAT62(uStack_93e,local_940);
        pvVar14 = pvVar3;
        if ((0xfff < uStack_928 * 2 + 2) &&
           (pvVar14 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar14)))) 
           {
                    /* WARNING: Subroutine does not return */
        /*  _invalid_parameter_noinfo_noreturn();
        }
        free(pvVar14);
      }
      pHVar12 = LoadIconW(param_1,(LPCWSTR)0x6b);
      pHVar10 = GetModuleHandleW((LPCWSTR)0x0);
      pwVar11 = L"KEY_BINARY";
      pHVar16 = (HRSRC)0x81;
      hResInfo = FindResourceW(pHVar10,(LPCWSTR)0x81,L"KEY_BINARY");
      if ((((hResInfo == (HRSRC)0x0) ||
           (pHVar16 = hResInfo, DVar4 = SizeofResource(pHVar10,hResInfo), DVar4 == 0)) ||
          (hResData = LoadResource(pHVar10,hResInfo), pHVar16 = hResInfo, hResData == (HGLOBAL)0x0))
         || (pvVar13 = LockResource(hResData), pHVar16 = hResInfo, pvVar13 == (LPVOID)0x0)) 
         {
        FUN_14000c390(4,pHVar16,pwVar11,uVar20);
      }
      else 
      {
        memset(&local_778,0,0x520);
        FUN_1400083b0(&local_778,(undefined8 *)&local_860,(undefined8 *)&local_798,
                      (undefined8 *)&local_820,(undefined8 *)&local_880,(undefined8 *)&local_840,
                      pvVar13,DVar4);
        uVar20 = 0x58;
        memset(&local_7f8,0,0x58);
        local_7e0 = 0xffffff;
        local_7e8 = 0;
        local_7f8 = LauncherUpdaterWindow::vftable;
        local_7f0 = &local_778;
        local_7d8 = 0;
        local_7d4 = 0xc;
        local_7c0 = 0;
        local_7b8 = 7;
        local_7d0[0] = 0;
        FUN_14000ec30((longlong *)local_7d0,L"tahoma",uVar20);
        local_7b0 = 0;
        local_930 = 0;
        uStack_928 = 7;
        local_7a8 = 1;
        local_7a4 = 0;
        local_940 = L'\0';
        FUN_14000ec30((longlong *)&local_940,&DAT_1401779e0,uVar20);
        local_918 = L'\0';
        local_908 = 0;
        uStack_900 = 7;
        FUN_14000ec30((longlong *)&local_918,&DAT_140177910,uVar20);
        pWVar21 = &local_940;
        pWVar18 = &local_918;
        uVar7 = FUN_14000b310(&local_7f8,local_920,pWVar18,pWVar21,lVar5,lVar6,iVar19,pHVar12);
        if (7 < uStack_900) 
        {
          pvVar3 = (void *)CONCAT62(uStack_916,local_918);
          pvVar14 = pvVar3;
          if ((0xfff < uStack_900 * 2 + 2) &&
             (pvVar14 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar14)))) goto LAB_14000dcb1;
          free(pvVar14);
        }
        local_918 = L'\0';
        local_908 = 0;
        uStack_900 = 7;
        if (7 < uStack_928) 
        {
          pvVar3 = (void *)CONCAT62(uStack_93e,local_940);
          pvVar14 = pvVar3;
          if ((0xfff < uStack_928 * 2 + 2) &&
             (pvVar14 = *(void **)((longlong)pvVar3 + -8),
             0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar14)))) 
             {
LAB_14000dcb1:
                    /* WARNING: Subroutine does not return */
          /*  _invalid_parameter_noinfo_noreturn();
          }
          free(pvVar14);
        }
        if (uVar7 == 0) 
        {
          EnterCriticalSection(local_768);
          local_2a8 = 5;
          FUN_14000ec30(local_2a0,&DAT_1401595f0,pWVar18);
          LeaveCriticalSection(local_768);
          puVar17 = (undefined8 *)0x0;
          pWVar18 = (LPCWSTR)0x70;
          memset(&local_8f8,0,0x70);
          local_8f8.lpVerb = L"open";
          local_8f8.cbSize = 0x70;
          local_8f8.lpFile = (LPCWSTR)local_700;
          if (7 < local_6e8) 
          {
            local_8f8.lpFile = (LPCWSTR)local_700[0];
          }
          local_8f8.lpParameters = L"-ClearCefCache";
          local_8f8.nShow = 5;
          BVar8 = ShellExecuteExW(&local_8f8);
          if (BVar8 == 0) 
          {
            local_770 = GetLastError();
            local_76c = 0x18;
            puVar17 = &local_778;
            FUN_14000cec0(0xffffff9d,(longlong)puVar17,pWVar18,pWVar21);
          }
        }
        else 
        {
          puVar17 = &local_778;
          FUN_14000cec0(uVar7,(longlong)puVar17,pWVar18,pWVar21);
        }
        FUN_14000b1a0(&local_7f8);
        FUN_140008640(&local_778,puVar17,pWVar18,pWVar21);
      }
      if (7 < uStack_848) 
      {
        pvVar3 = (void *)CONCAT62(uStack_85e,local_860);
        pvVar14 = pvVar3;
        if ((0xfff < uStack_848 * 2 + 2) &&
           (pvVar14 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar14)))) goto LAB_14000df3d;
        free(pvVar14);
      }
      local_850 = 0;
      uStack_848 = 7;
      local_860 = 0;
    }
    if (7 < uStack_828) 
    {
      pvVar3 = (void *)CONCAT62(uStack_83e,local_840);
      pvVar14 = pvVar3;
      if ((0xfff < uStack_828 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar14)))) goto LAB_14000df3d;
      free(pvVar14);
    }
    local_840 = 0;
    local_830 = 0;
    uStack_828 = 7;
    if (7 < local_868) 
    {
      pvVar3 = (void *)CONCAT62(uStack_87e,local_880);
      pvVar14 = pvVar3;
      if ((0xfff < local_868 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar14)))) goto LAB_14000df3d;
      free(pvVar14);
    }
    local_870 = 0;
    local_868 = 7;
    local_880 = 0;
    if (7 < uStack_808) 
    {
      pvVar3 = (void *)CONCAT62(uStack_81e,local_820);
      pvVar14 = pvVar3;
      if ((0xfff < uStack_808 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar14)))) goto LAB_14000df3d;
      free(pvVar14);
    }
    local_820 = 0;
    local_810 = 0;
    uStack_808 = 7;
    if (7 < uStack_780) 
    {
      pvVar3 = (void *)CONCAT62(uStack_796,local_798);
      pvVar14 = pvVar3;
      if ((0xfff < uStack_780 * 2 + 2) &&
         (pvVar14 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar14)))) 
         {
LAB_14000df3d:
                    /* WARNING: Subroutine does not return */
       /* _invalid_parameter_noinfo_noreturn();
      }
      free(pvVar14);
    }
  }
LAB_14000df63:
  __security_check_cookie(local_48 ^ (ulonglong)auStackY_988);
  return;
}
*/

int WinMain()
{

	while(1)
	{

	}

  return 0;
}







