#pragma once
#define TheWorld_Pattern        "\x8B\x0D\x00\x00\x00\x00\x85\xC9\x74\x30\xE8"
#define TheWorld_Mask           "xx????xxxxx"
#define TheWorld_Offset         0x2

#define GObjects_Pattern        "\xA1\x00\x00\x00\x00\x8B\x00\x00\x8B\x00\x00\x25\x00\x02\x00\x00"
#define GObjects_Mask           "x????x??x??xxxxx"
#define GObjects_Offset         0x1

#define GNames_Pattern          "\x8b\x0d\x00\x00\x00\x00\x83\x3c\x81\x00\x74"
#define GNames_Mask             "xx????xxxxx"
#define GNames_Offset           0x2

#define CallFunction_Pattern	"\x55\x8D\xAC\x24\x00\x00\x00\x00\x81\xEC\x00\x00\x00\x00\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x83\xEC\x40"
#define CallFunction_Mask		"xxxx????xx????xxx????xx????xxxx"
#define CallFunction_Offset		0x4

#define ProcessEvent_Pattern    "\x55\x8B\xEC\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x83\xEC\x40"
#define ProcessEvent_Mask       "xxxxxx????xx????xxxx"
#define ProcessEvent_Offset     0x6

#define DX9VTable_Pattern		"\xC7\x06\x00\x00\x00\x00\x89\x86\x00\x00\x00\x00\x89\x86"
#define DX9VTable_Mask			"xx????xx????xx"
#define DX9VTable_Offset		0x2

#define CallFunction_Pattern2    "\xE9\x00\x00\x00\x00\xCC\xCC\xCC\x81\xEC\x00\x00\x00\x00\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x83\xEC\x40"
#define CallFunction_Mask2       "x????xxxxx????xxx????xx????xxxx"
#define CallFunction_Offset2     0x4

#define ProcessEvent_Pattern2    "\xE9\x00\x00\x00\x00\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x83\xEC\x40"
#define ProcessEvent_Mask2       "x????x????xx????xxxx"