
//0x616e6666
//Functions related to loading ArenaNetFileFormat

//maybe helpful info when I have time
//http://download.linuxsampler.org/doc/libgig/api/classRIFF_1_1File.html

struct
{
/*4 byte*/unsigned long signature;//anff stored ffna due to encoding
/*1 byte*/char type;// 2/3/4/8
/*2 byte*/short unknown0;//type2(3000/4000/4012)-type8(2)-type4(0)
/*2 byte*/short unknown1;//type2(0)-type8(0)-type4(0)
/*2 byte*/short size;//only for ffna2/ffna8, ffna3, and ffna4 has arbitrary shit here
	unsigned char data[size]//first guess based on known riff file formats
}ArenaNetFileFormat;

int * __cdecl FUN_0085d3c0(undefined *param_1,uint dataBytes,int *data)
{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int local_c;
  int *local_8;
  
  if (!dataBytes) FUN_00482620("dataBytes","p:\\code\\base\\services\\riff.cpp",0xa2);
  
  if (!data) FUN_00482620("data","p:\\code\\base\\services\\riff.cpp",0xa3);
  
  if (!dataBytes || !data) return (int *)NULL;
  
  ppuVar5 = (undefined **)FUN_0047ce50(0x3c,0,"p:\\code\\base\\services\\riff.cpp",0xa7);
  ppuVar5 = FUN_0085d1a0(ppuVar5);
  ppuVar5[3] = param_1;
  ppuVar5[4] = (undefined *)NULL;
  if (((uint)param_1 & 1) == 0) {
    puVar6 = (undefined *)FUN_0047ce50(dataBytes,0,"p:\\code\\base\\services\\riff.cpp",0xb0);
    ppuVar5[5] = puVar6;
    FUN_0046bc70(puVar6,data,dataBytes);
    data = (int *)ppuVar5[5];
  }
  else {
    ppuVar5[5] = (undefined *)data;
  }
  local_8 = (int *)((int)data + dataBytes);
  if ((local_8 < (int *)((int)data + 5U)) || (data == (int *)NULL)) {
                    
    FUN_00482620(&DAT_0099faf0,"p:\\code\\base\\services\\riff.cpp",0xba);
  }
  if (*data != 0x616e6666) FUN_00482620("hdr->signature == RIFF_SIGNATURE","p:\\code\\base\\services\\riff.cpp",0xbb);
  
  bVar2 = *(byte *)(data + 1);
  if (8 < bVar2) FUN_00482620("hdr->type < RIFF_TYPES","p:\\code\\base\\services\\riff.cpp",0xbc);
  
  ppuVar5[4] = ppuVar5[4] + 5;
  ppuVar5[2] = (undefined *)(uint)bVar2;
  piVar9 = (int *)((int)data + 5U);
  piVar8 = local_8;
  while (piVar1 = piVar9 + 2, piVar1 <= piVar8) {
    iVar3 = piVar9[1];
    piVar10 = (int *)(iVar3 + (int)piVar1);
    if ((piVar8 < piVar10) || (iVar4 = *piVar9, piVar1 == (int *)NULL)) break;
    piVar9 = piVar10;
    if (iVar3 == 0) {
      FUN_0046d300(1,(wchar_t *)L"Riff: Discarding zero byte chunk %u");
    }
    else {
      local_c = iVar4;
      uVar7 = FUN_0048ab20((uint)&local_c);
      if (ppuVar5[0xc] <= (undefined *)((uint)ppuVar5[0xd] & uVar7)) {
                    
        FUN_00482620("index < m_count","p:\\code\\base\\rtl\\array.h",0x240);
      }
      piVar8 = (int *)(ppuVar5[10] + (int)(undefined *)((uint)ppuVar5[0xd] & uVar7) * 0xc);
      if ((piVar8[2] & 1U) == 0) {
        piVar10 = (int *)piVar8[2];
        while (piVar10 != (int *)NULL) {
          if ((*(uint *)((int)piVar10 + (int)ppuVar5[9]) == uVar7) && (*piVar10 == iVar4))
          goto LAB_0085d5a3;
          if ((*(uint *)(*piVar8 + 4 + (int)piVar10) & 1) != 0) break;
          piVar10 = *(int **)(*piVar8 + 4 + (int)piVar10);
        }
      }
      piVar10 = (int *)NULL;
LAB_0085d5a3:
      if (piVar10 == (int *)NULL) {
        piVar10 = (int *)FUN_0047ce50(0x38,2,"p:\\code\\base\\services\\riff.cpp",0xd4);
        *piVar10 = 0;
        piVar8 = piVar10 + 10;
        piVar10[6] = 0;
        piVar10[7] = 0;
        piVar10[5] = 0;
        piVar10[8] = 0x100;
        if (((uint)piVar8 & 3) != 0) {
                    
          FUN_00482620("!((unsigned_ptr)this & 3)","p:\\code\\base\\rtl\\list.h",0xa0);
        }
        *piVar8 = (int)piVar8;
        if (((uint)piVar8 & 1) != 0) {
                    
          FUN_00482620("!TermCheck(ptr)","p:\\code\\base\\rtl\\list.h",0xe9);
        }
        piVar10[0xb] = (int)piVar10 + 0x29;
        piVar8 = piVar10 + 0xc;
        if (((uint)piVar8 & 3) != 0) {
                    
          FUN_00482620("!((unsigned_ptr)this & 3)","p:\\code\\base\\rtl\\list.h",0xa0);
        }
        *piVar8 = (int)piVar8;
        if (((uint)piVar8 & 1) != 0) {
                    
          FUN_00482620("!TermCheck(ptr)","p:\\code\\base\\rtl\\list.h",0xe9);
        }
        piVar10[0xd] = (int)piVar10 + 0x31;
        *piVar10 = iVar4;
        uVar7 = FUN_0048ab20((uint)piVar10);
        FUN_004720b0((int *)(ppuVar5 + 6),(int)piVar10,uVar7);
      }
      piVar10[3] = (int)piVar1;
      piVar10[4] = iVar3;
      ppuVar5[4] = ppuVar5[4] + iVar3 + 8;
      piVar8 = local_8;
    }
  }
  piVar8 = FUN_0046dd80((int)ppuVar5,(int)"HRiff",0,0,0);
  return piVar8;
}

int * __cdecl FUN_0085d6b0(undefined *param_1)
{
  undefined **ppuVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 == (undefined *)NULL) || (8 < (int)param_1)) {
    iVar3 = 0;
  }
  else {
    iVar3 = -1;
  }
  if ((param_1 != (undefined *)NULL) && ((int)param_1 < 9)) {
    if (iVar3 == 0) {
      return (int *)NULL;
    }
    ppuVar1 = (undefined **)FUN_0047ce50(0x3c,0,"p:\\code\\base\\services\\riff.cpp",0x95);
    ppuVar1 = FUN_0085d1a0(ppuVar1);
    ppuVar1[2] = param_1;
    ppuVar1[3] = (undefined *)0x2;
    ppuVar1[4] = &DAT_00000005;
    ppuVar1[5] = (undefined *)NULL;
    piVar2 = FUN_0046dd80((int)ppuVar1,(int)"HRiff",0,0,0);
    return piVar2;
  }
                    
  FUN_00482620("type != RIFF_TYPE_INVALID && type < RIFF_TYPES","p:\\code\\base\\services\\riff.cpp"
               ,0x92);
}

int __cdecl FUN_0085d740(int *param_1,int param_2,int *param_3)
{
  int iVar1;
  int *piVar2;
  int local_8;
  
  iVar1 = FUN_0046df70(param_1,0);
  if (iVar1 == 0) {
                    
    FUN_00482620(&DAT_009b22bc,"p:\\code\\base\\services\\riff.cpp",0x10e);
  }
  if (param_3 != (int *)NULL) {
    *param_3 = 0;
  }
  if (param_3 == (int *)NULL) {
                    
    FUN_00482620("bytes","p:\\code\\base\\services\\riff.cpp",0x110);
  }
  if (iVar1 != 0 && param_3 != (int *)NULL) {
    local_8 = param_2;
    piVar2 = FUN_0048a990(iVar1 + 0x18,&local_8);
    if (piVar2 != (int *)NULL) {
      if ((~piVar2[1] & 1U) == 0) {
                    
        FUN_00482620("!(chunk->flags & CHUNK_FLAG_WRITE_LOCK)","p:\\code\\base\\services\\riff.cpp",
                     0x117);
      }
      if (((piVar2[1] & 1U) == 0) && (piVar2[4] != 0)) {
        piVar2[2] = piVar2[2] + 1;
        *param_3 = piVar2[4];
        return piVar2[3];
      }
    }
  }
  return 0;
}

void __cdecl FUN_0085d810(int *param_1,int param_2)
{
  int iVar1;
  int *piVar2;
  int local_8;
  
  iVar1 = FUN_0046df70(param_1,0);
  if (iVar1 == 0) {
                    
    FUN_00482620(&DAT_009b22bc,"p:\\code\\base\\services\\riff.cpp",0x128);
  }
  if (iVar1 != 0) {
    local_8 = param_2;
    piVar2 = FUN_0048a990(iVar1 + 0x18,&local_8);
    if (piVar2 == (int *)NULL) {
                    
      FUN_00482620("chunk","p:\\code\\base\\services\\riff.cpp",0x12e);
    }
    if (piVar2[2] == 0) {
                    
      FUN_00482620("chunk->readLock","p:\\code\\base\\services\\riff.cpp",0x12f);
    }
    if (piVar2 != (int *)NULL && piVar2[2] != 0) {
      if ((~piVar2[1] & 1U) == 0) {
                    
        FUN_00482620("!(chunk->flags & CHUNK_FLAG_WRITE_LOCK)","p:\\code\\base\\services\\riff.cpp",
                     0x131);
      }
      piVar2[2] = piVar2[2] + -1;
    }
  }
  return;
}

void __cdecl FUN_0085d8d0(int *param_1,LPCVOID *param_2)
{
  undefined4 *puVar1;
  size_t sVar2;
  int iVar3;
  LPCVOID pvVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  undefined4 local_20;
  undefined local_1c;
  undefined local_1b [3];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined4 local_c;
  int local_8;
  
  iVar3 = FUN_0046df70(param_1,0);
  local_8 = iVar3;
  if (iVar3 == 0) {
                    
    FUN_00482620(&DAT_009b22bc,"p:\\code\\base\\services\\riff.cpp",0xe7);
  }
  if (param_2 == (LPCVOID *)NULL) {
                    
    FUN_00482620("buffer","p:\\code\\base\\services\\riff.cpp",0xe8);
  }
  if (iVar3 != 0 && param_2 != (LPCVOID *)NULL) {
    local_20 = 0x616e6666;
    local_1c = *(undefined *)(iVar3 + 8);
    FUN_0046a0e0(param_2,(LPCVOID)((int)param_2[2] + 5),param_2[2]);
    puVar7 = (undefined *)((int)param_2[2] + (int)*param_2);
    if ((&local_20 < puVar7 + 5) && (puVar7 < local_1b)) {
                    
      FUN_00482620("(dest + count <= source) || (source + count <= dest)",
                   "p:\\code\\base\\rtl\\array.h",0x171);
    }
    FUN_0046bc70(puVar7,&local_20,5);
    param_2[2] = (LPCVOID)((int)param_2[2] + 5);
    iVar3 = *(int *)(iVar3 + 0x10) + -5;
    pvVar4 = (LPCVOID)((int)param_2[2] + iVar3);
    FUN_0046a0e0(param_2,pvVar4,pvVar4);
    puVar6 = (undefined4 *)((int)((int)*param_2 - iVar3) + (int)param_2[2]);
    puVar5 = (undefined4 *)((int)*param_2 + (int)param_2[2]);
    local_18 = puVar5;
    if ((*(uint *)(local_8 + 0x20) & 1) == 0) {
      puVar1 = *(undefined4 **)(local_8 + 0x20);
      while (puVar1 != (undefined4 *)NULL) {
        sVar2 = puVar1[4];
        if (sVar2 != 0) {
          local_10 = (void *)puVar1[3];
          local_c = *puVar1;
          local_14 = (undefined4 *)((int)(puVar6 + 2) + sVar2);
          if (puVar5 < local_14) {
                    
            FUN_00482620("chunkTerm <= term","p:\\code\\base\\services\\riff.cpp",0x45);
          }
          *puVar6 = local_c;
          puVar6[1] = sVar2;
          FUN_0046bc70(puVar6 + 2,local_10,sVar2);
          puVar5 = local_18;
          puVar6 = local_14;
        }
        if ((*(uint *)(*(int *)(local_8 + 0x18) + 4 + (int)puVar1) & 1) != 0) break;
        puVar1 = *(undefined4 **)(*(int *)(local_8 + 0x18) + 4 + (int)puVar1);
      }
    }
    if (puVar6 != puVar5) {
                    
      FUN_00482620("ptr == term","p:\\code\\base\\services\\riff.cpp",0x103);
    }
  }
  return;
}

byte __cdecl FUN_0085da50(int param_1,uint param_2)
{
  int *piVar1;
  
  if (param_2 == 0) {
                    
    FUN_00482620("data","p:\\code\\base\\services\\riff.cpp",0x80);
  }
  piVar1 = (int *)(~-(uint)(param_1 + param_2 < param_2 + 5) & param_2);
  if (((piVar1 != (int *)NULL) && (*piVar1 == 0x616e6666)) && (*(byte *)(piVar1 + 1) < 9)) {
    return *(byte *)(piVar1 + 1);
  }
  return 0;
}

int * __cdecl FUN_0085daa0(int *param_1,int param_2)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int local_8;
  
  iVar2 = FUN_0046df70(param_1,0);
  if (iVar2 == 0) {
                    
    FUN_00482620(&DAT_009b22bc,"p:\\code\\base\\services\\riff.cpp",0x13b);
  }
  uVar5 = *(uint *)(iVar2 + 0xc) & 6;
  if (uVar5 == 0) {
                    
    FUN_00482620("riff->flags & (RIFF_CREATE_WRITE | RIFF_CREATE_APPEND)",
                 "p:\\code\\base\\services\\riff.cpp",0x13d);
  }
  if (iVar2 == 0 || uVar5 == 0) {
    return (int *)NULL;
  }
  local_8 = param_2;
  piVar3 = FUN_0048a990((int)(int *)(iVar2 + 0x18),&local_8);
  if (piVar3 == (int *)NULL) {
    puVar4 = (undefined4 *)FUN_0047ce50(0x38,2,"p:\\code\\base\\services\\riff.cpp",0x154);
    piVar3 = FUN_0085d0f0(puVar4);
    *piVar3 = param_2;
    uVar5 = FUN_0048ab20((uint)piVar3);
    FUN_004720b0((int *)(iVar2 + 0x18),(int)piVar3,uVar5);
  }
  else {
    if ((~(*(uint *)(iVar2 + 0xc) >> 2) & 1) == 0) {
                    
      FUN_00482620("!(riff->flags & RIFF_CREATE_APPEND)","p:\\code\\base\\services\\riff.cpp",0x145)
      ;
    }
    if ((~piVar3[1] & 1U) == 0) {
                    
      FUN_00482620("!(chunk->flags & CHUNK_FLAG_WRITE_LOCK)","p:\\code\\base\\services\\riff.cpp",
                   0x146);
    }
    if (piVar3[2] != 0) {
                    
      FUN_00482620("!chunk->readLock","p:\\code\\base\\services\\riff.cpp",0x147);
    }
    if ((~-(uint)(piVar3[2] != 0) &
        ((piVar3[1] & 1U) != 0) - 1 & ((*(uint *)(iVar2 + 0xc) & 4) != 0) - 1) == 0) {
      return (int *)NULL;
    }
    iVar1 = piVar3[4];
    if (iVar1 != 0) {
      if (iVar1 + 8U < *(uint *)(iVar2 + 0x10)) {
        *(uint *)(iVar2 + 0x10) = (*(uint *)(iVar2 + 0x10) - iVar1) + -8;
        piVar3[1] = piVar3[1] | 1;
        piVar3[7] = 0;
        return piVar3 + 5;
      }
                    
      FUN_00482620("riff->bytes > chunk->bytes + sizeof(ChunkHdr)",
                   "p:\\code\\base\\services\\riff.cpp",0x14d);
    }
  }
  piVar3[1] = piVar3[1] | 1;
  piVar3[7] = 0;
  return piVar3 + 5;
}

void __cdecl FUN_0085dc50(int *param_1,int param_2)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  iVar2 = FUN_0046df70(param_1,0);
  if (iVar2 == 0) {
                    
    FUN_00482620(&DAT_009b22bc,"p:\\code\\base\\services\\riff.cpp",0x164);
  }
  if (iVar2 != 0) {
    local_8 = param_2;
    piVar3 = FUN_0048a990(iVar2 + 0x18,&local_8);
    if (piVar3 == (int *)NULL) {
                    
      FUN_00482620("chunk","p:\\code\\base\\services\\riff.cpp",0x16b);
    }
    if ((piVar3[1] & 1U) == 0) {
                    
      FUN_00482620("chunk->flags & CHUNK_FLAG_WRITE_LOCK","p:\\code\\base\\services\\riff.cpp",0x16c
                  );
    }
    if (piVar3 != (int *)NULL && (piVar3[1] & 1U) != 0) {
      if ((*(byte *)(iVar2 + 0xc) & 6) == 0) {
                    
        FUN_00482620("riff->flags & (RIFF_CREATE_WRITE | RIFF_CREATE_APPEND)",
                     "p:\\code\\base\\services\\riff.cpp",0x16e);
      }
      iVar1 = piVar3[7];
      piVar3[1] = piVar3[1] & 0xfffffffe;
      piVar3[4] = iVar1;
      piVar3[3] = piVar3[5];
      if (iVar1 != 0) {
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + iVar1 + 8;
      }
    }
  }
  return;
}
