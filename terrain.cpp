
// map\\terrain

void __cdecl FUN_006cfee0(int *param_1)
{
  if (param_1 == (int *)NULL) {
                    
    FUN_00482620("terrainPtr","p:\\code\\engine\\map\\terrain\\trnprefs.cpp",0x55);
  }
  if (*param_1 != 0) {
                    
    FUN_00482620("terrainPtr->type == TERRAIN_TYPE_CLIENT",
                 "p:\\code\\engine\\map\\terrain\\trnprefs.cpp",0x56);
  }
  if (DAT_00a1ddf4 != param_1[0x78]) {
    FUN_006da440((int)(param_1 + 0x74),DAT_00a1ddf4);
    FUN_006d1a20((int)(param_1 + 0xac0),(int)param_1,(uint *)(param_1 + 0xac1),0);
    param_1[0xad4] = param_1[0xad4] | 4;
    FUN_006d2a50(param_1 + 0xac0,(float)param_1);
  }
  return;
}

undefined4 __cdecl FUN_006cff60(int param_1)
{
  if (param_1 == 1) {
    return DAT_00a1ddf8;
  }
  if (param_1 != 2) {
                    
    FUN_00482620("No valid case for switch variable \'\"Invalid pref\"\'",
                 "p:\\code\\engine\\map\\terrain\\trnprefs.cpp",0x3a);
  }
  return DAT_00a1ddf4;
}

void __cdecl FUN_006cff90(int param_1,int param_2)
{
  if (param_1 == 1) {
    DAT_00a1ddf8 = param_2;
    if (3 < param_2) {
                    
      FUN_00482620("s_prefs.reflections < MAP_PREF_REFLECTIONS_TERM",
                   "p:\\code\\engine\\map\\terrain\\trnprefs.cpp",0x4b);
    }
  }
  else {
    if ((param_1 == 2) && (DAT_00a1ddf4 = param_2, 4 < param_2)) {
                    
      FUN_00482620("s_prefs.texQuality < MAP_PREF_TEX_QUALITY_TERM",
                   "p:\\code\\engine\\map\\terrain\\trnprefs.cpp",0x46);
    }
  }
  return;
}

undefined4 __thiscall FUN_006d02c0(int param_1_00,int param_2,int param_3,int *param_4)
{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined **ppuVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar7 = (uint *)(param_3 + 0xc);
  iVar2 = FUN_006d12a0(param_2 + 0xf0,puVar7);
  if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x9c) & 0x10) == 0)) {
                    
    FUN_00482620("ChunkIsBuilt(chunk)","p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x15d);
  }
  uVar6 = *(uint *)(iVar2 + 0x9c) & 0x2000;
  iVar5 = (-(uint)(uVar6 != 0) & 0x1e) + 100;
  if ((*(uint *)(iVar2 + 0x9c) & 512) != 0) {
    iVar5 = (-(uint)(uVar6 != 0) & 0x1e) + 0x3ca;
  }
  if (*param_4 < iVar5) {
    return 0;
  }
  *param_4 = *param_4 - iVar5;
  uVar6 = *(uint *)(iVar2 + 0x9c);
  if ((uVar6 & 512) != 0) {
    FUN_006eb1a0(param_2,puVar7);
    FUN_006ec020(param_2,puVar7);
    *(uint *)(iVar2 + 0x9c) = *(uint *)(iVar2 + 0x9c) & 0xfffffdff;
    uVar6 = *(uint *)(iVar2 + 0x9c);
  }
  if ((uVar6 & 0x2000) == 0) {
    ppuVar4 = (undefined **)
              FUN_0060d2d0((undefined *)0x441,(undefined *)0x105,(undefined *)(param_1_00 + 0xa0),
                           (undefined *)NULL,(undefined *)NULL,0);
    FUN_006e7a40(iVar2,(int *)ppuVar4);
    FUN_0046daf0(ppuVar4);
  }
  else {
    puVar1 = *(undefined **)(param_1_00 + 0x88c0);
    if (puVar1 == (undefined *)NULL) {
                    
      FUN_00482620("vertex","p:\\code\\engine\\map\\terrain\\trnupdate.cpp",100);
    }
    piVar3 = (int *)FUN_0047ce50(0x3000,0,"p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x68);
    FUN_006e7270(piVar3);
    ppuVar4 = (undefined **)
              FUN_0060d2d0((undefined *)0x1000,(undefined *)0xf05,puVar1,(undefined *)0x1800,
                           (undefined *)piVar3,3);
    FUN_006e7a40(iVar2,(int *)ppuVar4);
    FUN_0046daf0(ppuVar4);
    *(undefined4 *)(param_1_00 + 0x88c0) = 0;
  }
  *(uint *)(iVar2 + 0x9c) = *(uint *)(iVar2 + 0x9c) & 0xffffffdf | 0x1000;
  iVar2 = FUN_006d12a0(param_2 + 0xf0,puVar7);
  if (((iVar2 != 0) && (uVar6 = *(uint *)(iVar2 + 0x9c), (uVar6 & 0x10) != 0)) && ((uVar6 & 8) == 0)
     ) {
    *(uint *)(iVar2 + 0x9c) = uVar6 | 8;
    FUN_006d01e0((LPCVOID *)(param_1_00 + 0x60),puVar7);
  }
  FUN_006e7eb0(param_2 + 0x124,0);
  return 1;
}

undefined4 FUN_006d04a0(float param_1,int param_2,int *param_3)
{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_20;
  uint *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  puVar4 = (uint *)(param_2 + 0xc);
  local_1c = puVar4;
  piVar1 = (int *)FUN_006d12a0((int)param_1 + 0xf0,puVar4);
  if (piVar1 == (int *)NULL) {
                    
    FUN_00482620("chunk","p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x191);
  }
  iVar2 = (-(uint)((piVar1[0x27] & 0x2000U) != 0) & 0x370) + 0x78;
  if (*param_3 < iVar2) {
    return 0;
  }
  *param_3 = *param_3 - iVar2;
  uVar3 = piVar1[0x27];
  if ((uVar3 & 0x10) == 0) {
    FUN_006e7990(piVar1,(int *)puVar4,(float *)((int)param_1 + 0x18));
    FUN_006d1d10((int)param_1,(uint *)((int)param_1 + 0xc),puVar4);
    local_48 = *puVar4 * 0x20;
    local_44 = *(int *)(param_2 + 0x10) * 0x20;
    local_40 = local_48 + 0x21;
    local_4c = (int)param_1 + 0x30;
    local_3c = local_44 + 0x21;
    FUN_004e8920(&local_4c,local_48,local_44);
    uVar3 = (local_44 + 0x20 >> 5) * *(int *)(local_4c + 8) + (local_48 + 0x20 >> 5);
    local_c = (int *)((local_44 + 0x20 & 0x1f) * 0x20 + (local_48 + 0x20 & 0x1f));
    local_10 = (int *)(local_4c + 0x10);
    if (*(uint *)(local_4c + 0x18) <= uVar3) {
                    
      FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
    }
    local_14 = *(undefined4 *)(*(int *)(*local_10 + uVar3 * 4) + (int)local_c * 4);
    local_10 = (int *)((local_44 + 0x20 >> 5) * *(int *)(local_4c + 8) + (local_48 >> 5));
    local_c = (int *)(local_4c + 0x10);
    if (*(uint *)(local_4c + 0x18) <= local_10) {
                    
      FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
    }
    local_18 = *(undefined4 *)
                (*(int *)(*local_c + (int)local_10 * 4) +
                ((local_44 + 0x20 & 0x1f) * 0x20 + (local_48 & 0x1f)) * 4);
    uVar3 = (local_44 >> 5) * *(int *)(local_4c + 8) + (local_48 + 0x20 >> 5);
    local_c = (int *)((local_44 & 0x1f) * 0x20 + (local_48 + 0x20 & 0x1f));
    local_10 = (int *)(local_4c + 0x10);
    if (*(uint *)(local_4c + 0x18) <= uVar3) {
                    
      FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
    }
    local_10 = *(int **)(*(int *)(*local_10 + uVar3 * 4) + (int)local_c * 4);
    uVar3 = (local_44 >> 5) * *(int *)(local_4c + 8) + (local_48 >> 5);
    if (*(uint *)(local_4c + 0x18) <= uVar3) {
                    
      FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
    }
    FUN_006e7a20((int)piVar1,
                 *(undefined4 *)
                  (*(int *)(*(int *)(local_4c + 0x10) + uVar3 * 4) +
                  ((local_44 & 0x1f) * 0x20 + (local_48 & 0x1f)) * 4),local_10,local_18,local_14);
    FUN_006d6b90((int)piVar1,param_1,(float *)(local_8 + 0x28),&local_20);
    piVar1[0x27] = piVar1[0x27] | 0x10;
    uVar3 = piVar1[0x27];
    puVar4 = local_1c;
  }
  if ((uVar3 & 0x2000) == 0) {
    FUN_006ebb60(local_8,(int)param_1,(int *)puVar4);
  }
  else {
    FUN_006eb280(local_8,(uint)param_1,(int *)puVar4);
  }
  piVar1[0x27] = piVar1[0x27] & 0xfffdffffU | 0x20;
  *(undefined4 *)(param_2 + 0x14) = 1;
  return 1;
}

void __thiscall FUN_006d0780(int param_1_00,int param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar4 = param_2;
  param_2 = 5000000;
  iVar3 = *(int *)(iVar4 + 0x1c8);
  do {
    if (iVar3 != 2) {
      return;
    }
    if (((*(uint *)(iVar4 + 0x154) & 1) != 0) || (iVar3 = *(int *)(iVar4 + 0x154), iVar3 == 0)) {
                    
      FUN_00482620(&DAT_009b52c4,"p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x240);
    }
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar1 == 0) {
      FUN_006d0ef0(param_1_00,iVar4,iVar3,&param_2);
    }
    else {
      if (iVar1 == 1) {
        FUN_006d0d20(param_1_00,iVar4,iVar3,&param_2);
      }
      else {
        if (iVar1 != 2) {
                    
          FUN_00482620("No valid case for switch variable \'phase\'",
                       "p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x255);
        }
        iVar3 = *(int *)(param_1_00 + 0x70);
        puVar5 = (uint *)(iVar3 + *(int *)(param_1_00 + 0x54) * 8);
        iVar1 = *(int *)(param_1_00 + 0x78);
        while (puVar5 != (uint *)(iVar3 + iVar1 * 8)) {
          if (*(uint *)(iVar4 + 0x110) <= *puVar5) {
                    
            FUN_00482620("coord.x < m_gridDims.x","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26c
                        );
          }
          if (*(uint *)(iVar4 + 0x114) <= puVar5[1]) {
                    
            FUN_00482620("coord.y < m_gridDims.y","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26d
                        );
          }
          uVar6 = *(int *)(iVar4 + 0x110) * puVar5[1] + *puVar5;
          if (*(uint *)(iVar4 + 0x10c) <= uVar6) {
                    
            FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
          }
          iVar2 = *(int *)(*(int *)(iVar4 + 0x104) + uVar6 * 4);
          if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x9c) & 0x10) != 0)) {
            uVar6 = *(int *)(iVar2 + 0x50) + 100;
            if (1000 < uVar6) {
              uVar6 = 1000;
            }
            if (param_2 < (int)uVar6) goto LAB_006d0922;
            param_2 -= uVar6;
            FUN_006d30d0(iVar2);
          }
          puVar5 = puVar5 + 2;
          *(int *)(param_1_00 + 0x54) = *(int *)(param_1_00 + 0x54) + 1;
        }
        FUN_006e7eb0(iVar4 + 0x124,2);
        *(undefined4 *)(param_1_00 + 0x98) = 0;
        *(undefined4 *)(param_1_00 + 0x88) = 0;
        *(undefined4 *)(param_1_00 + 0x78) = 0;
        *(undefined4 *)(param_1_00 + 0x5c) = 0;
        *(undefined4 *)(param_1_00 + 0x58) = 0;
        *(undefined4 *)(param_1_00 + 0x54) = 0;
      }
    }
LAB_006d0922:
    iVar3 = *(int *)(iVar4 + 0x1c8);
  } while( true );
}

void __thiscall FUN_006d0950(int param_1_00,int param_2,uint **param_3,LPCVOID *param_4)
{
  uint *puVar1;
  LPCVOID pvVar2;
  uint uVar3;
  int iVar4;
  LPCVOID pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_3c;
  int local_38;
  uint **local_34;
  int local_30;
  uint **local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint *local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  local_18 = param_1_00;
  if ((*(uint *)(param_1_00 + 0xc) < *(uint *)(param_1_00 + 4)) ||
     (uVar3 = *(uint *)(param_1_00 + 8),
     *(uint *)(param_1_00 + 0x10) <= uVar3 && uVar3 != *(uint *)(param_1_00 + 0x10))) {
                    
    FUN_00482620("MathRectIsValid(rect)","p:\\code\\base\\rtl\\rtlmath.h",0x1cd);
  }
  iVar4 = (*(int *)(param_1_00 + 0x10) - uVar3) *
          (*(uint *)(param_1_00 + 0xc) - *(uint *)(param_1_00 + 4));
  if (iVar4 != 0) {
    pvVar2 = (LPCVOID)((int)param_4[2] + iVar4 * 2);
    pvVar5 = param_4[1];
    if (param_4[1] <= pvVar2) {
      pvVar5 = pvVar2;
    }
    FUN_00466690(param_4,pvVar5,param_4[2]);
    local_30 = 0;
    iVar4 = *(int *)(local_18 + 0x40);
    iVar8 = (*(int *)(param_1_00 + 4) - iVar4) + 0xc;
    iVar7 = *(int *)(local_18 + 8) - *(int *)(local_18 + 0x44);
    local_c = *(int *)(local_18 + 0xc);
    local_8 = *(int *)(local_18 + 0x10);
    local_1c = 1 << ((byte)iVar8 & 0x1f);
    puVar1 = (uint *)(local_18 + 4);
    local_18 = *(int *)(local_18 + 0x44);
    FUN_006d1320(param_2 + 0xf0,puVar1,&local_3c);
    iVar6 = FUN_00697060((int)param_3,4,(int *)NULL);
    local_14 = (uint *)(iVar6 + iVar7 * 4 + 0x30);
    local_c = ((local_c - iVar8) - iVar4) + 0xc;
    local_8 = (local_8 - local_18) - iVar7;
    if (local_8 != 0) {
      local_18 = local_38;
      param_3 = local_34;
      do {
        local_8 += -1;
        local_10 = local_1c;
        local_24 = local_c;
        while (local_24 != 0) {
          local_24 += -1;
          if ((((*local_14 & local_10) != 0) && (puVar1 = *local_2c, puVar1 != (uint *)NULL)) &&
             ((*(byte *)(puVar1 + 0x27) & 0x10) != 0)) {
            FUN_006d3350(puVar1,param_2);
            local_20 = puVar1[0x38];
            if (local_20 != 0) {
              FUN_00466690(param_4,(LPCVOID)((int)param_4[2] + 1),param_4[2]);
              *(uint *)((int)*param_4 + (int)param_4[2] * 4) = local_20;
              param_4[2] = (LPCVOID)((int)param_4[2] + 1);
            }
            uVar3 = puVar1[0x3a];
            local_34 = param_3;
            if (uVar3 != 0) {
              FUN_00466690(param_4,(LPCVOID)((int)param_4[2] + 1),param_4[2]);
              *(uint *)((int)*param_4 + (int)param_4[2] * 4) = uVar3;
              param_4[2] = (LPCVOID)((int)param_4[2] + 1);
            }
          }
          local_10 *= 2;
          if (local_30 == 0) {
                    
            FUN_00482620("m_mgr","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x298);
          }
          local_2c = local_2c + 1;
          if (local_2c == local_34) {
            local_18 += 1;
            local_34 = local_34 + *(int *)(local_30 + 0x20);
            local_2c = local_2c + (*(int *)(local_30 + 0x20) - local_28);
            param_3 = local_34;
          }
        }
        local_14 = local_14 + 1;
      } while (local_8 != 0);
    }
  }
  return;
}

undefined4 __thiscall FUN_006d0b60(int param_1_00,int param_2,int *param_3)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  if (((*(uint *)(param_2 + 0x154) & 1) != 0) || (iVar4 = *(int *)(param_2 + 0x154), iVar4 == 0)) {
                    
    FUN_00482620(&DAT_009b52c4,"p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x240);
  }
  iVar1 = *(int *)(iVar4 + 0xc);
  if (iVar1 == 0) {
    iVar4 = FUN_006d0ef0(param_1_00,param_2,iVar4,param_3);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
                    
        FUN_00482620("No valid case for switch variable \'phase\'",
                     "p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x255);
      }
      iVar4 = *(int *)(param_1_00 + 0x70);
      puVar5 = (uint *)(iVar4 + *(int *)(param_1_00 + 0x54) * 8);
      iVar1 = *(int *)(param_1_00 + 0x78);
      while( true ) {
        if (puVar5 == (uint *)(iVar4 + iVar1 * 8)) {
          FUN_006e7eb0(param_2 + 0x124,2);
          *(undefined4 *)(param_1_00 + 0x98) = 0;
          *(undefined4 *)(param_1_00 + 0x88) = 0;
          *(undefined4 *)(param_1_00 + 0x78) = 0;
          *(undefined4 *)(param_1_00 + 0x5c) = 0;
          *(undefined4 *)(param_1_00 + 0x58) = 0;
          *(undefined4 *)(param_1_00 + 0x54) = 0;
          return 1;
        }
        if (*(uint *)(param_2 + 0x110) <= *puVar5) {
                    
          FUN_00482620("coord.x < m_gridDims.x","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26c);
        }
        if (*(uint *)(param_2 + 0x114) <= puVar5[1]) {
                    
          FUN_00482620("coord.y < m_gridDims.y","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26d);
        }
        uVar3 = *(int *)(param_2 + 0x110) * puVar5[1] + *puVar5;
        if (*(uint *)(param_2 + 0x10c) <= uVar3) break;
        iVar2 = *(int *)(*(int *)(param_2 + 0x104) + uVar3 * 4);
        if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x9c) & 0x10) != 0)) {
          uVar3 = *(int *)(iVar2 + 0x50) + 100;
          if (1000 < uVar3) {
            uVar3 = 1000;
          }
          if (*param_3 < (int)uVar3) {
            return 0;
          }
          *param_3 = *param_3 - uVar3;
          FUN_006d30d0(iVar2);
        }
        *(int *)(param_1_00 + 0x54) = *(int *)(param_1_00 + 0x54) + 1;
        puVar5 = puVar5 + 2;
      }
                    
      FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
    }
    iVar4 = FUN_006d0d20(param_1_00,param_2,iVar4,param_3);
  }
  if (iVar4 != 0) {
    return 1;
  }
  return 0;
}

undefined4 __thiscall FUN_006d0d20(int param_1_00,int param_2,int param_3,int *param_4)
{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = *(uint *)(param_1_00 + 0x58);
  if (uVar4 < *(uint *)(param_1_00 + 0x88)) {
    iVar5 = uVar4 * 0xc;
    do {
      if (*(uint *)(param_1_00 + 0x88) <= uVar4) {
                    
        FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
      }
      puVar2 = (uint *)(*(int *)(param_1_00 + 0x80) + iVar5);
      uVar1 = puVar2[2];
      if (*(uint *)(param_2 + 0x110) <= *puVar2) {
                    
        FUN_00482620("coord.x < m_gridDims.x","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26c);
      }
      if (*(uint *)(param_2 + 0x114) <= puVar2[1]) {
                    
        FUN_00482620("coord.y < m_gridDims.y","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26d);
      }
      uVar6 = *(int *)(param_2 + 0x110) * puVar2[1] + *puVar2;
      if (*(uint *)(param_2 + 0x10c) <= uVar6) {
                    
        FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
      }
      iVar3 = *(int *)(*(int *)(param_2 + 0x104) + uVar6 * 4);
      if ((((iVar3 != 0) && ((*(byte *)(iVar3 + 0x9c) & 0x10) != 0)) &&
          (puVar2 = *(uint **)(iVar3 + 0x10 + uVar1 * 4), puVar2 != (uint *)NULL)) &&
         ((*(byte *)(puVar2 + 0x27) & 0x10) != 0)) {
        if (*param_4 < 5) {
          return 0;
        }
        *param_4 = *param_4 + -5;
        FUN_006d5ac0(iVar3,(int *)(param_2 + 0xc),(int *)puVar2,uVar1,(LPCVOID *)(param_1_00 + 0x80)
                    );
        if ((puVar2[0x27] & 4) == 0) {
          puVar2[0x27] = puVar2[0x27] | 4;
          FUN_006d01e0((LPCVOID *)(param_1_00 + 0x70),puVar2);
        }
        iVar3 = FUN_006d12a0(param_2 + 0xf0,puVar2);
        if (((iVar3 != 0) && (uVar1 = *(uint *)(iVar3 + 0x9c), (uVar1 & 0x10) != 0)) &&
           ((uVar1 & 8) == 0)) {
          *(uint *)(iVar3 + 0x9c) = uVar1 | 8;
          FUN_006d01e0((LPCVOID *)(param_1_00 + 0x60),puVar2);
        }
      }
      uVar4 += 1;
      *(int *)(param_1_00 + 0x58) = *(int *)(param_1_00 + 0x58) + 1;
      iVar5 += 0xc;
    } while (uVar4 < *(uint *)(param_1_00 + 0x88));
  }
  *(undefined4 *)(param_3 + 0xc) = 2;
  return 1;
}

undefined4 __thiscall FUN_006d0ef0(int param_1_00,int param_2,int param_3,int *param_4)
{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = *(uint *)(param_1_00 + 0x5c);
  if (local_8 < *(uint *)(param_1_00 + 0x98)) {
    local_10 = param_2 + 0xf0;
    do {
      if (*(uint *)(param_1_00 + 0x98) <= local_8) {
                    
        FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
      }
      local_18 = *(uint *)(*(int *)(param_1_00 + 0x90) + local_8 * 8);
      local_14 = *(uint *)(*(int *)(param_1_00 + 0x90) + 4 + local_8 * 8);
      local_c = local_18;
      if (*(uint *)(param_2 + 0x110) <= local_18) {
                    
        FUN_00482620("coord.x < m_gridDims.x","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26c);
      }
      if (*(uint *)(param_2 + 0x114) <= local_14) {
                    
        FUN_00482620("coord.y < m_gridDims.y","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26d);
      }
      uVar3 = *(int *)(param_2 + 0x110) * local_14 + local_18;
      if (*(uint *)(param_2 + 0x10c) <= uVar3) {
                    
        FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
      }
      piVar1 = *(int **)(*(int *)(param_2 + 0x104) + uVar3 * 4);
      if ((piVar1 != (int *)NULL) && ((*(byte *)(piVar1 + 0x27) & 0x10) != 0)) {
        uVar3 = piVar1[0x14] * 0x599 + 0x32000U >> 10;
        if (1000 < uVar3) {
          uVar3 = 1000;
        }
        if (*param_4 < (int)uVar3) {
          return 0;
        }
        *param_4 = *param_4 - uVar3;
        FUN_006d60d0(piVar1,(int *)(param_2 + 0xc),(LPCVOID *)(param_1_00 + 0x90),
                     (LPCVOID *)(param_1_00 + 0x80));
        FUN_006d5ee0((int)piVar1,(LPCVOID *)(param_1_00 + 0x80));
        if ((piVar1[0x27] & 4U) == 0) {
          piVar1[0x27] = piVar1[0x27] | 4;
          FUN_006d01e0((LPCVOID *)(param_1_00 + 0x70),&local_18);
        }
        iVar2 = FUN_006d12a0(local_10,&local_18);
        if (((iVar2 != 0) && (uVar3 = *(uint *)(iVar2 + 0x9c), (uVar3 & 0x10) != 0)) &&
           ((uVar3 & 8) == 0)) {
          *(uint *)(iVar2 + 0x9c) = uVar3 | 8;
          FUN_006d01e0((LPCVOID *)(param_1_00 + 0x60),&local_18);
        }
      }
      *(int *)(param_1_00 + 0x5c) = *(int *)(param_1_00 + 0x5c) + 1;
      local_8 += 1;
    } while (local_8 < *(uint *)(param_1_00 + 0x98));
  }
  *(uint *)(param_3 + 0xc) = 2 - (uint)(*(int *)(param_1_00 + 0x88) != 0);
  return 1;
}

void __thiscall FUN_006d10c0(int param_1_00,float param_2,float *param_3,uint *param_4)
{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_20 = 0;
  *(uint *)(param_1_00 + 0x50) = *(uint *)(param_1_00 + 0x50) & 0xfffffffb;
  local_8 = param_1_00;
  FUN_006d1320((int)param_2 + 0xf0,param_4,(uint *)&local_2c);
  iVar3 = param_4[2] - *param_4;
  bVar2 = false;
  local_10 = param_4[3] - param_4[1];
  local_14 = iVar3;
  if (local_10 != 0) {
    do {
      local_10 += -1;
      iVar4 = iVar3;
      while (iVar4 != 0) {
        iVar4 += -1;
        iVar3 = *local_1c;
        if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x9c) & 0x10) != 0)) {
          FUN_006d6b90(iVar3,param_2,param_3,&local_c);
          uVar1 = *(uint *)(iVar3 + 0x9c);
          if (((local_c & 1) == 0) || ((uVar1 & 0x20000) != 0)) {
            if (((local_c & 2) != 0) && ((uVar1 & 0x100000) == 0)) {
              *(uint *)(iVar3 + 0x9c) = uVar1 | 0x100000;
              FUN_006e7ff0((int *)((int)param_2 + 0x124),4,*(int **)(local_8 + 0x14),&local_2c);
            }
          }
          else {
            piVar5 = (int *)((int)param_2 + 0x124);
            *(uint *)(iVar3 + 0x9c) = uVar1 | 0x1a0000;
            FUN_006e7ff0(piVar5,0,*(int **)(local_8 + 0x14),&local_2c);
            FUN_006e7ff0(piVar5,1,*(int **)(local_8 + 0x14),&local_2c);
            FUN_006e7ff0(piVar5,4,*(int **)(local_8 + 0x14),&local_2c);
          }
          if ((*(uint *)(iVar3 + 0x9c) & 0x80000) == 0) {
            *(uint *)(iVar3 + 0x9c) = *(uint *)(iVar3 + 0x9c) | 0x80000;
            FUN_006e7ff0((int *)((int)param_2 + 0x124),1,*(int **)(local_8 + 0x14),&local_2c);
          }
          bVar2 = true;
        }
        if (local_20 == 0) {
                    
          FUN_00482620("m_mgr","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x298);
        }
        local_1c = local_1c + 1;
        local_2c = (int *)((int)local_2c + 1);
        iVar3 = local_14;
        if (local_1c == local_24) {
          local_2c = (int *)((int)local_2c - local_18);
          local_28 += 1;
          local_1c = local_1c + (*(int *)(local_20 + 0x20) - local_18);
          local_24 = local_24 + *(int *)(local_20 + 0x20);
        }
      }
    } while (local_10 != 0);
    if (bVar2) {
      FUN_006e7f10((int)param_2 + 0x124,2,*(int **)(local_8 + 0x14));
    }
  }
  return;
}

undefined4 __thiscall FUN_006d12a0(int param_1_00,uint *param_2)
{
  uint uVar1;
  
  if (*(uint *)(param_1_00 + 0x20) <= *param_2) {
                    
    FUN_00482620("coord.x < m_gridDims.x","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26c);
  }
  if (*(uint *)(param_1_00 + 0x24) <= param_2[1]) {
                    
    FUN_00482620("coord.y < m_gridDims.y","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26d);
  }
  uVar1 = *(int *)(param_1_00 + 0x20) * param_2[1] + *param_2;
  if (*(uint *)(param_1_00 + 0x1c) <= uVar1) {
                    
    FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
  }
  return *(undefined4 *)(*(int *)(param_1_00 + 0x14) + uVar1 * 4);
}

void __thiscall FUN_006d1320(uint param_1_00,uint *param_2,uint *param_3)
{
  uint uVar1;
  uint uVar2;
  
  param_3[3] = param_1_00;
  uVar1 = param_2[2];
  if ((*(uint *)(param_1_00 + 0x20) <= uVar1 && uVar1 != *(uint *)(param_1_00 + 0x20)) ||
     (*(uint *)(param_1_00 + 0x24) <= param_2[3] && param_2[3] != *(uint *)(param_1_00 + 0x24))) {
                    
    FUN_00482620("rect.x1 <= m_mgr->m_gridDims.x && rect.y1 <= m_mgr->m_gridDims.y",
                 "p:\\code\\engine\\map\\terrain\\trnchunk.h",0x28b);
  }
  uVar2 = *param_2;
  if ((uVar2 <= uVar1) && (param_2[1] <= param_2[3])) {
    *param_3 = uVar2;
    uVar1 = param_2[1];
    param_3[1] = uVar1;
    uVar1 = *(int *)(param_3[3] + 0x14) + (*(int *)(param_3[3] + 0x20) * uVar1 + uVar2) * 4;
    param_3[4] = uVar1;
    param_3[5] = param_2[2] - *param_2;
    param_3[2] = uVar1 + (param_2[2] - *param_2) * 4;
    return;
  }
                    
  FUN_00482620("rect.x1 >= rect.x0 && rect.y1 >= rect.y0",
               "p:\\code\\engine\\map\\terrain\\trnchunk.h",0x28c);
}

void FUN_006d13b0(int param_1,uint *param_2,uint param_3)
{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_10 = param_3 & 2;
  uVar4 = (-(uint)(local_10 != 0) & 0x40000) + 0x1a0000;
  if ((param_3 & 1) != 0) {
    uVar4 |= 512;
  }
  local_c = param_1 + 0xf0;
  local_1c = 0;
  FUN_006d1320(local_c,param_2,(uint *)&local_28);
  bVar1 = false;
  iVar5 = (param_2[3] - param_2[1]) * (param_2[2] - *param_2);
  if (iVar5 != 0) {
    do {
      iVar5 += -1;
      puVar3 = (undefined4 *)*local_18;
      if (puVar3 == (undefined4 *)NULL) {
        puVar3 = FUN_006e74d0(local_c,(uint *)&local_28);
      }
      iVar2 = local_8;
      if ((puVar3[0x27] & 0x20000) == 0) {
        puVar3[0x27] = puVar3[0x27] | uVar4;
        FUN_006e7ff0((int *)(param_1 + 0x124),0,*(int **)(local_8 + 0x14),&local_28);
        FUN_006e7ff0((int *)(param_1 + 0x124),1,*(int **)(iVar2 + 0x14),&local_28);
        FUN_006e7ff0((int *)(param_1 + 0x124),4,*(int **)(iVar2 + 0x14),&local_28);
        if (local_10 != 0) {
          FUN_006e7ff0((int *)(param_1 + 0x124),3,*(int **)(iVar2 + 0x14),&local_28);
        }
        bVar1 = true;
      }
      if (local_1c == 0) {
                    
        FUN_00482620("m_mgr","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x298);
      }
      local_18 = local_18 + 1;
      local_28 = (int *)((int)local_28 + 1);
      if (local_18 == local_20) {
        local_28 = (int *)((int)local_28 - local_14);
        local_24 += 1;
        local_18 = local_18 + (*(int *)(local_1c + 0x20) - local_14);
        local_20 = local_20 + *(int *)(local_1c + 0x20);
      }
    } while (iVar5 != 0);
    if (bVar1) {
      FUN_006e7f10(param_1 + 0x124,2,*(int **)(local_8 + 0x14));
    }
  }
  return;
}

void FUN_006d1540(int param_1,uint *param_2,uint param_3)
{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  FUN_006d1320(param_1 + 0xf0,param_2,(uint *)&local_20);
  bVar2 = false;
  iVar5 = (param_2[3] - param_2[1]) * (param_2[2] - *param_2);
  if (iVar5 != 0) {
    do {
      iVar5 += -1;
      iVar1 = *local_10;
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x9c) & 0x10) != 0)) {
        piVar4 = (int *)(param_1 + 0x124);
        if ((param_3 & 2) != 0) {
          FUN_006e7ff0(piVar4,3,*(int **)(local_8 + 0x14),&local_20);
        }
        iVar3 = local_8;
        if (((param_3 & 1) == 0) || ((*(uint *)(iVar1 + 0x9c) & 0x22000) != 0x2000)) {
          if ((*(uint *)(iVar1 + 0x9c) & 0x100000) == 0) {
            *(uint *)(iVar1 + 0x9c) = *(uint *)(iVar1 + 0x9c) | 0x100000;
            FUN_006e7ff0(piVar4,4,*(int **)(local_8 + 0x14),&local_20);
          }
        }
        else {
          *(uint *)(iVar1 + 0x9c) = *(uint *)(iVar1 + 0x9c) | 0x1a0000;
          FUN_006e7ff0(piVar4,0,*(int **)(local_8 + 0x14),&local_20);
          FUN_006e7ff0(piVar4,1,*(int **)(iVar3 + 0x14),&local_20);
          FUN_006e7ff0(piVar4,4,*(int **)(iVar3 + 0x14),&local_20);
          bVar2 = true;
        }
      }
      if (local_14 == 0) {
                    
        FUN_00482620("m_mgr","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x298);
      }
      local_10 = local_10 + 1;
      local_20 = (int *)((int)local_20 + 1);
      if (local_10 == local_18) {
        local_20 = (int *)((int)local_20 - local_c);
        local_1c += 1;
        local_10 = local_10 + (*(int *)(local_14 + 0x20) - local_c);
        local_18 = local_18 + *(int *)(local_14 + 0x20);
      }
    } while (iVar5 != 0);
    if (bVar2) {
      FUN_006e7f10(param_1 + 0x124,2,*(int **)(local_8 + 0x14));
    }
  }
  return;
}

void __thiscall FUN_006d16d0(int param_1_00,int param_2,uint *param_3)
{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint local_28;
  uint local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_2 + 0x1c8) == 2) {
    FUN_006d0780(param_1_00,param_2);
  }
  uVar3 = *param_3;
  if ((((uVar3 <= *(uint *)(param_2 + 0x2b20)) && (param_3[1] <= *(uint *)(param_2 + 0x2b24))) &&
      (*(uint *)(param_2 + 0x2b20) < param_3[2])) && (*(uint *)(param_2 + 0x2b24) < param_3[3])) {
    *(undefined4 *)(param_2 + 0x2b20) = 0xffffffff;
    uVar3 = *param_3;
  }
  if (((uVar3 <= *(uint *)(param_2 + 0x2ac)) && (param_3[1] <= *(uint *)(param_2 + 0x2b0))) &&
     ((*(uint *)(param_2 + 0x2ac) < param_3[2] && (*(uint *)(param_2 + 0x2b0) < param_3[3])))) {
    *(undefined4 *)(param_2 + 0x2ac) = 0xffffffff;
  }
  local_1c = 0;
  FUN_006d1320(param_2 + 0xf0U,param_3,&local_28);
  local_c = param_3[2] - *param_3;
  local_10 = param_3[3] - param_3[1];
  iVar2 = local_c;
  do {
    do {
      local_8 = iVar2;
      if (local_10 == 0) {
        return;
      }
      local_10 += -1;
      iVar2 = local_8;
    } while (local_8 == 0);
    do {
      local_8 += -1;
      iVar2 = *local_18;
      if (iVar2 != 0) {
        uVar3 = *(uint *)(iVar2 + 0x9c);
        if ((uVar3 & 0x20) == 0) {
          if ((char)uVar3 < '\0') {
            FUN_006d8620(param_2 + 0x1d0);
            FUN_006e7eb0(param_2 + 0x124,4);
            *(uint *)(iVar2 + 0x9c) = *(uint *)(iVar2 + 0x9c) & 0xffffff7f;
            goto LAB_006d17e4;
          }
        }
        else {
          FUN_006e7eb0(param_2 + 0x124,0);
          *(uint *)(iVar2 + 0x9c) = *(uint *)(iVar2 + 0x9c) & 0xffffffdf;
LAB_006d17e4:
          uVar3 = *(uint *)(iVar2 + 0x9c);
        }
        iVar4 = param_2 + 0x124;
        if ((uVar3 & 0x20000) != 0) {
          FUN_006e8420(iVar4,0,(int *)&local_28);
          uVar3 = *(uint *)(iVar2 + 0x9c);
        }
        if ((uVar3 & 0x80000) != 0) {
          FUN_006e8420(iVar4,1,(int *)&local_28);
          uVar3 = *(uint *)(iVar2 + 0x9c);
        }
        if ((uVar3 & 0x40000) != 0) {
          FUN_006e8420(iVar4,3,(int *)&local_28);
          uVar3 = *(uint *)(iVar2 + 0x9c);
        }
        if ((uVar3 & 0x100000) != 0) {
          FUN_006e8420(iVar4,4,(int *)&local_28);
          uVar3 = *(uint *)(iVar2 + 0x9c);
        }
        *(uint *)(iVar2 + 0x9c) = uVar3 & 0xffe1ffff;
        if ((uVar3 & 8) != 0) {
          puVar5 = *(uint **)(param_1_00 + 0x60);
          puVar1 = puVar5 + *(int *)(param_1_00 + 0x68) * 2;
          while( true ) {
            if (puVar5 == puVar1) goto LAB_006d1897;
            if ((*puVar5 == local_28) && (puVar5[1] == local_24)) break;
            puVar5 = puVar5 + 2;
          }
          if (puVar5 == puVar1) {
LAB_006d1897:
                    
            FUN_00482620("ptr != term","p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x2d5);
          }
          uVar3 = *(uint *)(param_1_00 + 0x68);
          uVar6 = (int)((int)puVar5 - *(int *)(param_1_00 + 0x60)) >> 3;
          if (uVar3 <= uVar6) {
                    
            FUN_00482620("index < this->m_count","p:\\code\\base\\rtl\\array.h",0x39b);
          }
          if (uVar6 + 1 < uVar3) {
            FUN_0046bc90((void *)(*(int *)(param_1_00 + 0x60) + uVar6 * 8),
                         (void *)(*(int *)(param_1_00 + 0x60) + (uVar3 - 1) * 8),8);
            uVar3 = *(uint *)(param_1_00 + 0x68);
          }
          *(uint *)(param_1_00 + 0x68) = uVar3 - 1;
        }
        iVar4 = *(int *)(iVar2 + 0x10);
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x9c) & 0x10) != 0)) {
          *(undefined4 *)(iVar4 + 0x14) = 0;
          *(byte *)(*(int *)(iVar2 + 0x10) + 0xcc) = *(byte *)(*(int *)(iVar2 + 0x10) + 0xcc) & 0xfd
          ;
        }
        iVar4 = *(int *)(iVar2 + 0x14);
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x9c) & 0x10) != 0)) {
          *(undefined4 *)(iVar4 + 0x10) = 0;
          *(byte *)(*(int *)(iVar2 + 0x14) + 0xcc) = *(byte *)(*(int *)(iVar2 + 0x14) + 0xcc) & 0xfe
          ;
        }
        iVar4 = *(int *)(iVar2 + 0x18);
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x9c) & 0x10) != 0)) {
          *(undefined4 *)(iVar4 + 0x1c) = 0;
          *(byte *)(*(int *)(iVar2 + 0x18) + 0xcc) = *(byte *)(*(int *)(iVar2 + 0x18) + 0xcc) & 0xf7
          ;
        }
        iVar4 = *(int *)(iVar2 + 0x1c);
        if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x9c) & 0x10) != 0)) {
          *(undefined4 *)(iVar4 + 0x18) = 0;
          *(byte *)(*(int *)(iVar2 + 0x1c) + 0xcc) = *(byte *)(*(int *)(iVar2 + 0x1c) + 0xcc) & 0xfb
          ;
        }
        FUN_006e7710(param_2 + 0xf0U,&local_28);
      }
      if (local_1c == 0) {
                    
        FUN_00482620("m_mgr","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x298);
      }
      local_18 = local_18 + 1;
      local_28 += 1;
      if (local_18 == local_20) {
        local_28 -= local_14;
        local_24 += 1;
        local_18 = local_18 + (*(int *)(local_1c + 0x20) - local_14);
        local_20 = local_20 + *(int *)(local_1c + 0x20);
      }
      iVar2 = local_c;
    } while (local_8 != 0);
  } while( true );
}

undefined4 __thiscall FUN_006d2220(int param_1_00,uint param_2,int *param_3)
{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)(param_2 + 0x1d0);
  if (((*(uint *)(param_2 + 0x17c) & 1) != 0) || (iVar4 = *(int *)(param_2 + 0x17c), iVar4 == 0)) {
                    
    FUN_00482620(&DAT_009b52c4,"p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x56e);
  }
  switch(*(undefined4 *)(iVar4 + 0x14)) {
  case 0:
    iVar5 = FUN_006d12a0(param_2 + 0xf0,(uint *)(iVar4 + 0xc));
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x9c) & 0x10) != 0)) {
      *(undefined4 *)(iVar5 + 0xa4) = *(undefined4 *)(iVar5 + 0xa0);
      *(uint *)(iVar5 + 0x9c) = *(uint *)(iVar5 + 0x9c) & 0xffefffff | 0x80;
      FUN_006d8660((int)puVar2,param_2,(int *)(iVar4 + 0xc));
      *(undefined4 *)(iVar4 + 0x14) = 1;
      return 1;
    }
    goto LAB_006d23bf;
  case 1:
    iVar4 = FUN_006e86c0((int)puVar2,param_2,param_3);
    break;
  case 2:
    iVar4 = FUN_006e3420((int)puVar2,param_2,param_3);
    break;
  case 3:
    iVar4 = FUN_006ea790(puVar2,param_2,param_3);
    break;
  case 4:
    iVar4 = FUN_006eac20((int)puVar2,param_2,param_3);
    break;
  case 5:
    puVar1 = (uint *)(iVar4 + 0xc);
    iVar4 = FUN_006d12a0(param_2 + 0xf0,puVar1);
    if (iVar4 == 0) {
                    
      FUN_00482620("chunk","p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x5a0);
    }
    if ((*(uint *)(iVar4 + 0x9c) & 0x2000) == 0) {
      iVar5 = FUN_006d92d0(puVar2,param_2,param_3);
      if (iVar5 == 0) {
        return 0;
      }
    }
    else {
      iVar5 = FUN_006d8930(puVar2,param_2,param_3);
      if (iVar5 == 0) {
        return 0;
      }
    }
    iVar5 = FUN_006d12a0(param_2 + 0xf0,puVar1);
    if (((iVar5 != 0) && (uVar3 = *(uint *)(iVar5 + 0x9c), (uVar3 & 0x10) != 0)) &&
       ((uVar3 & 8) == 0)) {
      *(uint *)(iVar5 + 0x9c) = uVar3 | 8;
      FUN_006d01e0((LPCVOID *)(param_1_00 + 0x60),puVar1);
    }
    *(uint *)(iVar4 + 0x9c) = *(uint *)(iVar4 + 0x9c) & 0xffffff7f;
LAB_006d23bf:
    FUN_006e7eb0(param_2 + 0x124,4);
    return 1;
  default:
                    
    FUN_00482620("No valid case for switch variable \'task->phase\'",
                 "p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x590);
  }
  if (iVar4 != 0) {
    return 1;
  }
  return 0;
}

void __cdecl FUN_006d2410(int *param_1,uint **param_2,LPCVOID *param_3)
{
  if (param_1 == (int *)NULL) {
                    
    FUN_00482620("terrainPtr","p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x677);
  }
  if (*param_1 != 0) {
                    
    FUN_00482620("terrainPtr->type == TERRAIN_TYPE_CLIENT",
                 "p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x678);
  }
  if (param_3 == (LPCVOID *)NULL) {
                    
    FUN_00482620("models","p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x679);
  }
  FUN_006d0950((int)(param_1 + 0xac0),(int)param_1,param_2,param_3);
  return;
}

void __cdecl FUN_006d2480(int *param_1,float *param_2,undefined4 *param_3,int param_4)
{
  if (param_1 == (int *)NULL) {
                    
    FUN_00482620("terrainPtr","p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x666);
  }
  if (*param_1 != 0) {
                    
    FUN_00482620("terrainPtr->type == TERRAIN_TYPE_CLIENT",
                 "p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x667);
  }
  FUN_006d1ab0((int)(param_1 + 0xac0),(int)param_1,param_2,param_3,param_4);
  if (param_4 != 0) {
    FUN_006d2600(param_1 + 0xac0,(float)param_1,(uint *)NULL);
  }
  return;
}

void __cdecl FUN_006d24f0(int *param_1,int param_2)
{
  if (param_1 == (int *)NULL) {
                    
    FUN_00482620("terrainPtr","p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x686);
  }
  if (*param_1 != 0) {
                    
    FUN_00482620("terrainPtr->type == TERRAIN_TYPE_CLIENT",
                 "p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x687);
  }
  if (param_2 != 0) {
    param_1[0xad4] = param_1[0xad4] & 0xfffffffd;
    return;
  }
  param_1[0xad4] = param_1[0xad4] | 2;
  return;
}

void __cdecl FUN_006d2550(int *param_1,int param_2)
{
  if (param_1 == (int *)NULL) {
                    
    FUN_00482620("terrainPtr","p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x694);
  }
  if (*param_1 != 0) {
                    
    FUN_00482620("terrainPtr->type == TERRAIN_TYPE_CLIENT",
                 "p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x695);
  }
  if (2 < param_2) {
                    
    FUN_00482620("budget < MAP_TERRAIN_BUDGETS","p:\\code\\engine\\map\\terrain\\trnupdate.cpp",
                 0x696);
  }
  if (param_2 == 0) {
    param_1[0xac7] = 3000;
  }
  else {
    if (param_2 == 1) {
      param_1[0xac7] = 5000;
      return;
    }
    if (param_2 == 2) {
      param_1[0xac7] = 5000000;
      return;
    }
  }
  return;
}

void __thiscall FUN_006d2600(int *param_1_00,float param_2,uint *param_3)
{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  fVar3 = param_2;
  if (((param_1_00[0x14] & 2U) == 0) &&
     (((local_8 = param_1_00, *(int *)((int)param_2 + 0x1cc) != 0 || ((param_1_00[0x14] & 4U) == 0))
      || (FUN_006d10c0((int)param_1_00,param_2,(float *)(param_1_00 + 10),(uint *)(param_1_00 + 1)),
         *(int *)((int)fVar3 + 0x1cc) != 0)))) {
    puVar4 = param_3;
    if (param_3 == (uint *)NULL) {
      puVar4 = (uint *)param_1_00[7];
      if ((uint *)param_1_00[7] <= (uint *)param_1_00[6]) {
        puVar4 = (uint *)param_1_00[6];
      }
    }
    param_2 = (float)((int)puVar4 * 1000);
    if ((param_1_00[6] == 5000) || (uVar5 = param_1_00[6] - 1, uVar5 < 4)) {
      uVar5 = 3;
    }
    param_1_00[6] = uVar5;
    iVar6 = 1;
    while ((0 < (int)param_2 && (iVar6 != 0))) {
      local_c = FUN_006e8210((int)fVar3 + 0x124);
      if (*param_1_00 != local_c) {
        puVar4 = (uint *)param_1_00[0x18];
        param_3 = puVar4 + param_1_00[0x1a] * 2;
        if (puVar4 != param_3) {
          do {
            if (*(uint *)((int)fVar3 + 0x110) <= *puVar4) {
                    
              FUN_00482620("coord.x < m_gridDims.x","p:\\code\\engine\\map\\terrain\\trnchunk.h",
                           0x26c);
            }
            if (*(uint *)((int)fVar3 + 0x114) <= puVar4[1]) {
                    
              FUN_00482620("coord.y < m_gridDims.y","p:\\code\\engine\\map\\terrain\\trnchunk.h",
                           0x26d);
            }
            uVar5 = *(int *)((int)fVar3 + 0x110) * puVar4[1] + *puVar4;
            if (*(uint *)((int)fVar3 + 0x10c) <= uVar5) {
                    
              FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
            }
            piVar1 = *(int **)(*(int *)((int)fVar3 + 0x104) + uVar5 * 4);
            if (((piVar1 == (int *)NULL) || ((piVar1[0x27] & 0x10U) == 0)) ||
               ((piVar1[0x27] & 8U) == 0)) {
                    
              FUN_00482620("ChunkIsBuilt(chunk) && chunk->FlagTest(CHUNK_FLAG_AWAITING_INSTALL)",
                           "p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x348);
            }
            FUN_006d52d0(piVar1,(int)fVar3);
            puVar4 = puVar4 + 2;
            param_1_00 = local_8;
          } while (puVar4 != param_3);
        }
        param_1_00[0x1a] = 0;
        *param_1_00 = local_c;
        if ((*(byte *)(param_1_00 + 0x14) & 4) != 0) {
          FUN_006d10c0((int)param_1_00,fVar3,(float *)(param_1_00 + 10),(uint *)(param_1_00 + 1));
        }
      }
      switch(*(undefined4 *)((int)fVar3 + 0x1c8)) {
      case 0:
        if (((*(uint *)((int)fVar3 + 300) & 1) != 0) ||
           (iVar6 = *(int *)((int)fVar3 + 300), iVar6 == 0)) {
                    
          FUN_00482620(&DAT_009b52c4,"p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x13f);
        }
        if (*(int *)(iVar6 + 0x14) == 0) {
          iVar6 = FUN_006d04a0(fVar3,iVar6,(int *)&param_2);
          if (iVar6 == 0) goto LAB_006d281a;
        }
        else {
          if (*(int *)(iVar6 + 0x14) != 1) {
                    
            FUN_00482620("No valid case for switch variable \'task->phase\'",
                         "p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x14d);
          }
          iVar6 = FUN_006d02c0((int)param_1_00,(int)fVar3,iVar6,(int *)&param_2);
          if (iVar6 == 0) break;
        }
        goto LAB_006d290e;
      case 1:
        if ((int)param_2 < 0x2d) goto LAB_006d281a;
        param_2 = (float)((int)param_2 + -0x2d);
        if (((*(uint *)((int)fVar3 + 0x140) & 1) != 0) ||
           (iVar6 = *(int *)((int)fVar3 + 0x140), iVar6 == 0)) {
                    
          FUN_00482620(&DAT_009b52c4,"p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x380);
        }
        if (*(uint *)((int)fVar3 + 0x110) <= *(uint *)(iVar6 + 0xc)) {
                    
          FUN_00482620("coord.x < m_gridDims.x","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26c);
        }
        if (*(uint *)((int)fVar3 + 0x114) <= *(uint *)(iVar6 + 0x10)) {
                    
          FUN_00482620("coord.y < m_gridDims.y","p:\\code\\engine\\map\\terrain\\trnchunk.h",0x26d);
        }
        param_3 = (uint *)(*(int *)((int)fVar3 + 0x110) * *(uint *)(iVar6 + 0x10) +
                          *(int *)(iVar6 + 0xc));
        if (*(uint **)((int)fVar3 + 0x10c) <= param_3) {
                    
          FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x239);
        }
        puVar2 = *(undefined4 **)(*(int *)((int)fVar3 + 0x104) + (int)param_3 * 4);
        if ((puVar2 != (undefined4 *)NULL) && ((puVar2[0x27] & 0x10) != 0)) {
          puVar2[0x27] = puVar2[0x27] & 0xfff7ffff;
          FUN_006d2b30(puVar2,(float *)(param_1_00 + 10),(LPCVOID *)(param_1_00 + 0x24));
        }
        iVar6 = 1;
LAB_006d2903:
        FUN_006e7eb0((int)fVar3 + 0x124,iVar6);
LAB_006d290e:
        iVar6 = 1;
        break;
      case 2:
        iVar6 = FUN_006d0b60((int)param_1_00,(int)fVar3,(int *)&param_2);
        break;
      case 3:
        if (999 < (int)param_2) {
          param_2 = (float)((int)param_2 + -1000);
          if (((*(uint *)((int)fVar3 + 0x168) & 1) != 0) ||
             (iVar6 = *(int *)((int)fVar3 + 0x168), iVar6 == 0)) {
                    
            FUN_00482620(&DAT_009b52c4,"p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x359);
          }
          param_3 = (uint *)(iVar6 + 0xc);
          local_c = FUN_006d12a0((int)fVar3 + 0xf0,param_3);
          if ((local_c != 0) && ((*(uint *)(local_c + 0x9c) & 0x10) != 0)) {
            *(uint *)(local_c + 0x9c) = *(uint *)(local_c + 0x9c) & 0xfffbffff | 0x40;
            local_18 = *(int *)(iVar6 + 0x10) * 0x20;
            local_1c = *param_3 * 0x20;
            local_10 = local_18 + 0x21;
            local_14 = local_1c + 0x21;
            FUN_006ea2f0((int)fVar3,&local_1c);
            *(uint *)(local_c + 0x9c) = *(uint *)(local_c + 0x9c) & 0xffffffbf;
          }
          iVar6 = 3;
          goto LAB_006d2903;
        }
LAB_006d281a:
        iVar6 = 0;
        break;
      case 4:
        iVar6 = FUN_006d2220((int)param_1_00,(uint)fVar3,(int *)&param_2);
        break;
      case 0xbad1abe1:
                    
        FUN_00482620("No valid case for switch variable \'taskType\'",
                     "p:\\code\\engine\\map\\terrain\\trnupdate.cpp",0x621);
      default:
        goto switchD_006d27a7_caseD_6;
      }
      if (*(int *)((int)fVar3 + 0x1cc) == 0) {
        param_1_00[5] = 0;
        *param_1_00 = -1;
      }
    }
  }
switchD_006d27a7_caseD_6:
  return;
}

int * __cdecl FUN_006d8100(int *param_1,int param_2,uint *param_3)
{
  uint uVar1;
  
  if (param_2 == 0) {
                    
    FUN_00482620("terrain","p:\\code\\engine\\map\\terrain\\trnmap.cpp",0x3a6);
  }
  uVar1 = *(int *)(param_2 + 4) + 1;
  if (uVar1 <= param_3[2] && param_3[2] != uVar1) {
                    
    FUN_00482620("rect.x1 <= terrain->dims.x + 1","p:\\code\\engine\\map\\terrain\\trnmap.cpp",0x3a7
                );
  }
  uVar1 = *(int *)(param_2 + 8) + 1;
  if (uVar1 <= param_3[3] && param_3[3] != uVar1) {
                    
    FUN_00482620("rect.y1 <= terrain->dims.y + 1","p:\\code\\engine\\map\\terrain\\trnmap.cpp",0x3a8
                );
  }
  if (param_3[2] <= *param_3 && *param_3 != param_3[2]) {
                    
    FUN_00482620("rect.x0 <= rect.x1","p:\\code\\engine\\map\\terrain\\trnmap.cpp",0x3a9);
  }
  if (param_3[3] <= param_3[1] && param_3[1] != param_3[3]) {
                    
    FUN_00482620("rect.y0 <= rect.y1","p:\\code\\engine\\map\\terrain\\trnmap.cpp",0x3aa);
  }
  param_1[1] = *param_3;
  param_1[2] = param_3[1];
  param_1[3] = param_3[2];
  param_1[4] = param_3[3];
  *param_1 = param_2 + 0x30;
  FUN_004e8920(param_1,param_1[1],param_1[2]);
  return param_1;
}

int * __cdecl FUN_006d82e0(int *param_1,int param_2,uint *param_3)
{
  uint uVar1;
  
  uVar1 = *(int *)(param_2 + 4) + 1;
  if (uVar1 <= param_3[2] && param_3[2] != uVar1) {
                    
    FUN_00482620("rect.x1 <= terrain->dims.x + 1","p:\\code\\engine\\map\\terrain\\trnmap.cpp",999);
  }
  uVar1 = *(int *)(param_2 + 8) + 1;
  if (uVar1 <= param_3[3] && param_3[3] != uVar1) {
                    
    FUN_00482620("rect.y1 <= terrain->dims.y + 1","p:\\code\\engine\\map\\terrain\\trnmap.cpp",1000)
    ;
  }
  if (param_3[2] <= *param_3 && *param_3 != param_3[2]) {
                    
    FUN_00482620("rect.x0 <= rect.x1","p:\\code\\engine\\map\\terrain\\trnmap.cpp",0x3e9);
  }
  if (param_3[3] <= param_3[1] && param_3[1] != param_3[3]) {
                    
    FUN_00482620("rect.y0 <= rect.y1","p:\\code\\engine\\map\\terrain\\trnmap.cpp",0x3ea);
  }
  param_1[1] = *param_3;
  param_1[2] = param_3[1];
  param_1[3] = param_3[2];
  param_1[4] = param_3[3];
  *param_1 = param_2 + 0x58;
  FUN_0069b420(param_1,param_1[1],param_1[2]);
  return param_1;
}





