
#define WORLDS 8

struct{
	int unknown0;
	int chunkCX;
	int chunkCY;
	int parchmentCX;
	int parchmentCY;
	int Unknown1;
	int satelliteCX;
	int satelliteCY;
}worldData;


worldData __cdecl FUN_00589330(uint index)
{
  if (WORLDS < index) {
                    
    FUN_00482620("index < arrsize(s_worldData)","p:\\code\\gw\\const\\constworld.cpp",0x28);
  }
  return &DAT_009817c0 + index * 0x30;
}

undefined4 __cdecl FUN_00589360(uint world,uint *param_2)
{
  undefined *puVar1;
  uint uVar2;
  
  if (WORLDS < (int)world) {
                    
    FUN_00482620("world < WORLDS","p:\\code\\gw\\const\\constworldmap.cpp",0x520);
  }
  if (6 < world) return 0;//???
  
  puVar1 = FUN_00589330(world);
  if (*(uint *)(puVar1 + 4) <= *param_2) {
                    
    FUN_00482620("chunk.x < worldData.chunkCX","p:\\code\\gw\\const\\constworldmap.cpp",0x526);
  }
  if (*(uint *)(puVar1 + 8) <= param_2[1]) {
                    
    FUN_00482620("chunk.y < worldData.chunkCY","p:\\code\\gw\\const\\constworldmap.cpp",0x527);
  }
  uVar2 = *(int *)(puVar1 + 4) * param_2[1] + *param_2;
  if (*(uint *)(&DAT_009828d8 + world * 8) <= uVar2) {
                    
    FUN_00482620("offset < files.count","p:\\code\\gw\\const\\constworldmap.cpp",0x52b);
  }
  return *(undefined4 *)((&PTR_DAT_009828dc)[world * 2] + uVar2 * 4);
}

undefined4 __cdecl FUN_00589410(uint world,uint *param_2)
{
  undefined *puVar1;
  uint uVar2;
  
  if (WORLDS < (int)world) {
                    
    FUN_00482620("world < WORLDS","p:\\code\\gw\\const\\constworldmap.cpp",0x534);
  }
  if (6 < world) return 0;//???
  
  puVar1 = FUN_00589330(world);
  if (*(uint *)(puVar1 + 0xc) <= *param_2) {
                    
    FUN_00482620("chunk.x < worldData.parchmentCX","p:\\code\\gw\\const\\constworldmap.cpp",0x53a);
  }
  if (*(uint *)(puVar1 + 0x10) <= param_2[1]) {
                    
    FUN_00482620("chunk.y < worldData.parchmentCY","p:\\code\\gw\\const\\constworldmap.cpp",0x53b);
  }
  uVar2 = *(int *)(puVar1 + 0xc) * param_2[1] + *param_2;
  if (*(uint *)(&DAT_00982910 + world * 8) <= uVar2) {
                    
    FUN_00482620("offset < files.count","p:\\code\\gw\\const\\constworldmap.cpp",0x53f);
  }
  return *(undefined4 *)((&PTR_PTR_DAT_00982914)[world * 2] + uVar2 * 4);
}

undefined4 __cdecl FUN_005894c0(uint world,uint *param_2)
{
  undefined *puVar1;
  uint uVar2;
  
  if (WORLDS < (int)world) {
                    
    FUN_00482620("world < WORLDS","p:\\code\\gw\\const\\constworldmap.cpp",0x548);
  }
  if (6 < world) return 0;//???
  
  puVar1 = FUN_00589330(world);
  if (*(uint *)(puVar1 + 0x18) <= *param_2) {
                    
    FUN_00482620("chunk.x < worldData.satelliteCX","p:\\code\\gw\\const\\constworldmap.cpp",0x54e);
  }
  if (*(uint *)(puVar1 + 0x1c) <= param_2[1]) {
                    
    FUN_00482620("chunk.y < worldData.satelliteCY","p:\\code\\gw\\const\\constworldmap.cpp",0x54f);
  }
  uVar2 = *(int *)(puVar1 + 0x18) * param_2[1] + *param_2;
  if (*(uint *)(&DAT_00982948 + world * 8) <= uVar2) {
                    
    FUN_00482620("offset < files.count","p:\\code\\gw\\const\\constworldmap.cpp",0x553);
  }
  return *(undefined4 *)((&PTR_PTR_DAT_0098294c)[world * 2] + uVar2 * 4);
}
