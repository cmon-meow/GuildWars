

#define WORLDS 8

struct{
	int unknown0;//0 ?
	int chunkCX;//4
	int chunkCY;//8
	int parchmentCX;//12
	int parchmentCY;//16
	int Unknown1;// 20
	int satelliteCX;//24
	int satelliteCY;//28
}worldData_struct;


int* __cdecl FUN_00589330(uint index)
{
  if (WORLDS/*8*/ < index) FUN_00482620("index < arrsize(s_worldData)","p:\\code\\gw\\const\\constworld.cpp",0x28);
  
  return &DAT_009817c0 + index * 0x30;
}

undefined4 __cdecl FUN_00589360(uint world,vec2u chunk)
{
  if (WORLDS < (int)world) {
    FUN_00482620("world < WORLDS","p:\\code\\gw\\const\\constworldmap.cpp",0x520);
  }
  if (6 < world) return 0;//???
  
  worldData_struct worldData = FUN_00589330(world);
  if (worldData.chunkCX <= chunk.x) {
    FUN_00482620("chunk.x < worldData.chunkCX","p:\\code\\gw\\const\\constworldmap.cpp",0x526);
  }
  if (worldData.chunkCY <= chunk.y) {
    FUN_00482620("chunk.y < worldData.chunkCY","p:\\code\\gw\\const\\constworldmap.cpp",0x527);
  }
  if (*(uint *)(&DAT_009828d8 + world * 8) <= worldData.chunkCX * chunk.y + chunk.x) {
    FUN_00482620("offset < files.count","p:\\code\\gw\\const\\constworldmap.cpp",0x52b);
  }
  return *(undefined4 *)((&PTR_DAT_009828dc)[world * 2] + (worldData.chunkCX * chunk.y + chunk.x) * 4);
}

undefined4 __cdecl FUN_00589410(uint world,vec2u chunk)
{
  if (WORLDS < (int)world) {
    FUN_00482620("world < WORLDS","p:\\code\\gw\\const\\constworldmap.cpp",0x534);
  }
  if (6 < world) return 0;//???
  
  worldData_struct worldData = FUN_00589330(world);
  if (worldData.parchmentCX <= chunk.x) {
    FUN_00482620("chunk.x < worldData.parchmentCX","p:\\code\\gw\\const\\constworldmap.cpp",0x53a);
  }
  if (worldData.parchmentCY <= chunk.y) {
    FUN_00482620("chunk.y < worldData.parchmentCY","p:\\code\\gw\\const\\constworldmap.cpp",0x53b);
  }
  if (*(uint *)(&DAT_00982910 + world * 8) <= worldData.parchmentCX * chunk.y + chunk.x) {
    FUN_00482620("offset < files.count","p:\\code\\gw\\const\\constworldmap.cpp",0x53f);
  }
  return *(undefined4 *)((&PTR_PTR_DAT_00982914)[world * 2] + (worldData.parchmentCX * chunk.y + chunk.x) * 4);
}

undefined4 __cdecl FUN_005894c0(uint world,vec2u chunk)
{
  if (WORLDS < (int)world) {
    FUN_00482620("world < WORLDS","p:\\code\\gw\\const\\constworldmap.cpp",0x548);
  }
  if (6 < world) return 0;//???
  
  worldData_struct worldData = FUN_00589330(world);
  if (worldData.satelliteCX <= chunk.x) {
    FUN_00482620("chunk.x < worldData.satelliteCX","p:\\code\\gw\\const\\constworldmap.cpp",0x54e);
  }
  if (worldData.satelliteCY <= chunk.y) {
    FUN_00482620("chunk.y < worldData.satelliteCY","p:\\code\\gw\\const\\constworldmap.cpp",0x54f);
  }
  if (*(uint *)(&DAT_00982948 + world * 8) <= worldData.satelliteCX * chunk.y + chunk.x) {
    FUN_00482620("offset < files.count","p:\\code\\gw\\const\\constworldmap.cpp",0x553);
  }
  return *(undefined4 *)((&PTR_PTR_DAT_0098294c)[world * 2] + (worldData.satelliteCX * chunk.y + chunk.x) * 4);
}
