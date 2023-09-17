#pragma once
#include <string>
#include <Windows.h>
typedef uint32_t result_t;
typedef const char* c;
namespace Pattons
{
	namespace citizen_resource_core
	{
		c CreateComponent = "48 83 EC 28 B9 ? ? ? ? E8 ? ? ? ? 48 85 C0"; // its a pointer * :)

		namespace ResourceMetaDataComponent
		{
			c SetMetaDataLoader = "48 89 54 24 ? 57 48 83 EC 30 48 C7 44 24 ? ? ? ? ? 48 89 5C 24 ? 48 8B DA";

			c GetResourceManager = "48 8B 41 20 C3";

			c GetAllEntries = "48 89 54 24 ? 41 56";

			c AddMetaData = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 30 49 8B F1";

			c GetResource = "48 8B 41 10 C3";

		}
		namespace ResourceEventComponent
		{
			c GetManager = "48 8B 41 20 C3";
		}

		namespace EventReassemblyComponentImpl
		{
			/*
			fx::EventReassemblyComponentImpl *__fastcall fx::EventReassemblyComponentImpl::EventReassemblyComponentImpl(
			fx::EventReassemblyComponentImpl *this)
			*/
			c EventReassemblyComponentImpl_t = "E8 ? ? ? ? 48 8B D8 48 89 1F 48 85 DB 74 09 48 8B 03 48 8B CB FF 50 08 48 8B C7 48 8B 5C 24 ? 48 83 C4 30";
		}

		namespace EventReassemblyComponent
		{
			c Create = "48 89 4C 24 ? 57 48 83 EC 30 48 C7 44 24 ? ? ? ? ? 48 89 5C 24 ? 48 8B F9";
		}

	}

	namespace scripting
	{
		c LoadSystemFile = "E8 ? ? ? ? 8B D8 85 C0 0F 88 ? ? ? ? 48 8D 45 9F 48 89 45 97 48 89 74 24 ? 44 89 65 87 4C 89 65 D7 4C 89 75 9F 0F 10 44 24 ? 0F 11 45 A7 0F B6 45 07 88 45 B7 48 89 7D BF 48 8D 45 9F 48 89 45 D7 4C 8D 45 9F 48 8D 15 ? ? ? ? 48 8B CF E8 ? ? ? ? 8B D8 85 C0 0F 88 ? ? ? ? 48 8D 45 9F";

		c LoadFileInternal = "E8 ? ? ? ? 41 83 CE 02";

		c LoadHostFileInternal = "E8 ? ? ? ? 48 8B F8 BB ? ? ? ?";
	}


	namespace net
	{
		namespace NetAddress
		{
			c GetAddress = "48 8B C4 57 48 81 EC ? ? ? ? 48 C7 44 24 ? ? ? ? ? 48 89 58 18 48 89 70 20 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 48 8B DA 48 89 54 24 ? 33 F6 8B 01 83 F8 01 75 4A";
			c GetPort = "48 83 EC 28 8B 01 83 F8 01";

		}
		namespace NetLibrary
		{
			c CreateResources = "E8 ? ? ? ? 48 8D 05 ? ? ? ? 48 89 45 20";
			/*
			struct NetLibrary *NetLibrary::Create(void)
			*/
			c Create = "48 8B C4 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 C7 44 24 ? ? ? ? ? 48 89 58 08";

			c GetConnectionState = "8B 41 48 C3 CC CC CC CC CC CC CC CC CC CC CC CC";
			c GetCurrentServer = "0F 10 41 50";
			c GetImpl = "E8 ? ? ? ? 90 48 8B 83 ? ? ? ? 48 89 44 24 ?";
			/*
			__int64 __fastcall fx::ComponentHolderImpl<NetLibrary>::GetInstanceRegistry(__int64 a1)
			*/
			c GetInstanceRegistry = "48 8D 41 08";
			c GetPlayerName = "48 83 EC 78 48 8B 05 ? ? ? ?";
			c SetPlayerName = "49 C7 C0 ? ? ? ? 66 0F 1F 84 00 ? ? ? ? 49 FF C0 42 80 3C 02 ? 75 F6 48 81 C1 ? ? ? ?"; // void **__fastcall sub_18000D1F0(void **a1, void *Src, size_t Size)
		}
	}

	namespace ConHost
	{
		c Print = "FF 15 ? ? ? ? 90 48 8B 54 24 ? 48 83 FA 10 72 36";
		c IsConsoleOpen = "0F B6 05 ? ? ? ? C3";
	}

	namespace citizen_playernames_five
	{
		/*
		\xE8\x00\x00\x00\x00\x48\x8B\x10, x????xxx
		*/
	}

	namespace citizen_resources_client
	{
		c GetCachedResourceMounter = "40 55 56 57 41 54 41 55 41 56 41 57 48 8D 6C 24 ? 48 81 EC ? ? ? ? 48 C7 45 ? ? ? ? ? 48 89 9C 24 ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 45 1F 4D 8B F0";

		namespace ResourceCacheDevice
		{
			c GetEntryForFileName = "E8 ? ? ? ? 80 BC 24 ? ? ? ? ? 74 14";
			c GetLength = "48 69 D2 ? ? ? ? 48 81 C2 ? ? ? ?"; // (ResourceCacheDevice* this, __int64 a2)
			c GetLength_64 = "48 81 EC ? ? ? ? 4C 8B C2 48 8D 54 24 ? E8 ? ? ? ? 80 BC 24 ? ? ? ? ? 74 2D";// (__int64 a1, _QWORD* a2)
			c GetHandleForData = "48 2B D1 48 B8 ? ? ? ? ? ? ? ?";
			c GetVerificationStream = "40 53 48 83 EC 30 48 8B DA 49 8D 51 28"; // -> FF 15 ? ? ? ? 90 48 83 7C 24 ? ? 

		}

	}

	namespace loading_screen
	{
		c Loading_game = "E8 ? ? ? ? 0F 57 C0 0F 11 45 B0";
	}

	namespace core
	{
		c ComponentData = "33 D2 48 8D 05 ? ? ? ?";
		c ComponentId = "48 8B 02 45 33 D2";
		c ComponentLoader = "E8 ? ? ? ? 48 8B D8 EB 02 33 DB E8 ? ? ? ?";
		c ComponentData_t = "40 53 48 83 EC 20 48 8B D9 48 83 C1 28"; // -> void __fastcall ComponentData::~ComponentData(ComponentData *this)
		c AddComponent = "E8 ? ? ? ? 90 48 8D 05 ? ? ? ? 48 3B D8";
		c AddDependency = "40 53 48 83 EC 20 48 8B D9 4C 8B C2";
		c CompareVersion = "45 33 C0 48 8D 41 18";
		c CreateInstance = "E8 ? ? ? ? 48 8B 55 EF 48 3B 55 F7";
		c CreateManualInstance = "E8 ? ? ? ? 41 83 CC 01 44 89 64 24 ?";
		c DoGameLoad = "48 8B C4 55 56 57 48 81 EC ? ? ? ?";
		c ForAllComponents = "E8 ? ? ? ? 48 8B 4D C8";
		c GetCategory = "33 D2 E9 ? ? ? ? CC CC CC CC CC CC CC CC CC 40 57";
		c GetCategory_t = "E8 ? ? ? ? 48 8B D0 48 8B 40 10";// -> (_QWORD *a1, unsigned __int64 a2)
		c GetDependencyDataList = "48 8D 41 10 C3";
		c GetHooksDll = "48 8B 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 89 0D ? ? ? ?"; // -> struct IGameSpecToHooks *GetHooksDll(void)
		c GetInstance = "E8 ? ? ? ? 48 8B F8 48 8D 0D ? ? ? ?";
		c GetInstances = "48 8D 41 28";
		c GetVersions = "48 8D 41 18 C3 CC CC CC CC CC CC CC CC CC CC CC 40 55";
		c GetString = "E8 ? ? ? ? 90 48 83 78 ? ? 72 03 48 8B 00 48 89 45 D7";
		c GetSubCategory = "BA ? ? ? ? E9 ? ? ? ? CC CC CC CC CC CC 0F B6 41 40";
		c Initialize = "E8 ? ? ? ? 4C 8D 05 ? ? ? ? 48 8D 55 0F";
		c IsLoaded = "0F B6 41 40";
		c IsMatchedBy = "E8 ? ? ? ? 84 C0 0F 85 ? ? ? ? 48 83 C7 28";
		c Load = "C6 41 40 01";
		c LoadComponent = "E8 ? ? ? ? 48 8B 45 F7";
		c Parse = "E8 ? ? ? ? 4C 8B C0 4C 8B 4F 08 4C 3B 4F 10 74 35";
		c SetHooksDll = "48 89 0D ? ? ? ? C3 CC CC CC CC CC CC CC CC 40 53";
		c SetLoaded = "88 51 40";
		//__int64 __fastcall console::Tokenize(__int64 a1, _QWORD *a2)
		c Tokenize = "4C 8B DC 57 41 54 41 55 41 56 41 57 48 81 EC ? ? ? ? 49 C7 83 ? ? ? ? ? ? ? ? 49 89 5B 18 49 89 73 20 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 48 8B FA";
		c AllocateFunctionStubImpl = "48 89 5C 24 ? 48 89 74 24 ? 57 48 83 EC 20 48 8B 3D ? ? ? ?";
		c CoreAddPrintListener = "48 89 4C 24 ? 48 83 EC 28";
		//__int64 (*CoreCollectCrashLog())(void)
		c CoreCollectCrashLog = "48 8B 05 ? ? ? ? 48 85 C0 74 03 48 FF E0 C3 48 89 4C 24 ?";
		c CoreFxCreateObjectInstance = "40 55 53 41 54";
		c CoreFxFindFirstImpl = "40 55 53 56 41 55";
		c CoreFxFindImplClose = "48 85 C9 74 60 53";
		c CoreFxFindNextImpl = "48 85 C9 74 26 4C 8B 41 08";
		c CoreGetComponentRegistry = "E8 ? ? ? ? 48 8B 10 48 8B C8 FF 12";
		c CoreGetGameWindow = "E8 ? ? ? ? 4C 8B E0 E8 ? ? ? ?";
		c CoreGetGlobalInstanceRegistry = "E8 ? ? ? ? 4C 8B 48 10";
		c CoreGetLocalization = "48 83 EC 28 65 48 8B 04 25 ? ? ? ? 8B 0D ? ? ? ? BA ? ? ? ? 48 8B 0C C8 8B 04 0A 39 05 ? ? ? ? 7F 0C 48 8B 05 ? ? ? ?";
		c CoreGetMinModeManifest = "48 8B 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 8B C4";
		c CoreGetPatternHints = "48 8D 05 ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 89 5C 24 ? 48 89 6C 24 ?"; // + 0xD8
		c CoreGetPrintFilterEvent = "48 8B 05 ? ? ? ? 48 05 ? ? ? ?";
		c CoreIsDebuggerPresent = "0F B6 05 ? ? ? ? C3";
		c CoreOnProcessAbnormalTermination = "48 89 4C 24 ? 48 83 EC 78";
		c CoreRT_SetHardening = "84 C9 74 08 F0 FF 05 ? ? ? ?";
		c CoreRT_SetupSEHHandler = "48 89 5C 24 ? 48 89 7C 24 ? 41 56 48 81 EC ? ? ? ?";
		c CoreSetDebuggerPresent = "48 83 EC 28 FF 15 ? ? ? ? 85 C0";
		c CoreSetExceptionOverride = "40 53 48 83 EC 40 48 8B 05 ? ? ? ? 48 33 C4 48 89 44 24 ? 48 8B D9 33 C9";
		c CoreSetGameWindow = "48 89 0D ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 89 5C 24 ? 48 89 6C 24 ?";
		c CoreSetMappingFunction = "48 89 5C 24 ? 57 48 83 EC 50 48 8B 05 ? ? ? ?";
		c CoreSetMinModeManifest = "48 8B C4 48 89 48 08 57 48 81 EC ? ? ? ?";
		c CoreSetPrintFunction = "48 89 0D ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 89 5C 24 ? 55";
		c CoreTrace = "40 53 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 84 24 ? ? ? ? 65 48 8B 04 25 ? ? ? ?";
		c CreateContext = "48 89 5C 24 ? 57 48 83 EC 20 48 8B D9 48 8B FA";
		c GameMode_Init = "48 8B C4 55 48 8D 68 A1 48 81 EC ? ? ? ? 48 C7 45 ? ? ? ? ? 48 89 58 08 48 89 78 10";
		c ToolMode_SetGameFunction = "48 89 0D ? ? ? ? C3 CC CC CC CC CC CC CC CC 48 89 0D ? ? ? ?";
		/*
		struct IGameSpecToHooks *GetHooksDll(void)
{
  return (struct IGameSpecToHooks *)qword_18018B880;
}
		*/


	}
}
