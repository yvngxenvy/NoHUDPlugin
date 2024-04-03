/*
#############################################################################################
# Rocket League (2.35) SDK
# Generated with the CodeRedGenerator v9.9.9
# ========================================================================================= #
# File: Engine_classes.hpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK, 999envy
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/

#ifdef _MSC_VER
#pragma pack(push, 0x8)
#endif

// Class Engine.ScriptViewportClient
// 0x0008 (0x0060 - 0x0068)
class UScriptViewportClient : public UObject
{
public:
	struct FPointer                                    VfTable_FViewportClient;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Engine.ScriptViewportClient");
		}

		return uClassPointer;
	};

};

// Class Engine.GameViewportClient
// 0x01E0 (0x0068 - 0x0248)
class UGameViewportClient : public UScriptViewportClient
{
public:
	struct FPointer                                    VfTable_FExec;                                 // 0x0068 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    Viewport;                                      // 0x0070 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    ViewportFrame;                                 // 0x0078 (0x0008) [0x0000000000000002] (CPF_Const)   
	TArray<class UInteraction*>                        GlobalInteractions;                            // 0x0080 (0x0010) [0x0000008000500000] (CPF_NeedCtorLink)
	class UClass* UIControllerClass;                             // 0x0090 (0x0008) [0x0000000000000000]               
	class UUIInteraction* UIController;                                  // 0x0098 (0x0008) [0x0000000000000000]               
	class UConsole* ViewportConsole;                               // 0x00A0 (0x0008) [0x0000000000000000]               
	struct FExportShowFlags_Mirror                     ShowFlags;                                     // 0x00A8 (0x0010) [0x0000000000000002] (CPF_Const)   
	class FString                                      LoadingMessage;                                // 0x00B8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      SavingMessage;                                 // 0x00C8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      ConnectingMessage;                             // 0x00D8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      PausedMessage;                                 // 0x00E8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class FString                                      PrecachingMessage;                             // 0x00F8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	uint32_t                                           bShowTitleSafeZone : 1;                        // 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 
	uint32_t                                           bDisplayHardwareMouseCursor : 1;               // 0x0108 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	uint32_t                                           bOverrideDiffuseAndSpecular : 1;               // 0x0108 (0x0004) [0x0000000000002000] [0x00000004] (CPF_Transient)
	uint32_t                                           bIsPlayInEditorViewport : 1;                   // 0x0108 (0x0004) [0x0000000000002000] [0x00000008] (CPF_Transient)
	uint32_t                                           bShowSystemMouseCursor : 1;                    // 0x0108 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	uint32_t                                           bDisableWorldRendering : 1;                    // 0x0108 (0x0004) [0x0000000000000000] [0x00000020] 
	uint32_t                                           bCapturedWorldRendering : 1;                   // 0x0108 (0x0004) [0x0000000000000000] [0x00000040] 
	uint32_t                                           bDebugNoGFxUI : 1;                             // 0x0108 (0x0004) [0x0000000000004000] [0x00000080] (CPF_Config)
	struct FTitleSafeZoneArea                          TitleSafeZone;                                 // 0x010C (0x0010) [0x0000000000000000]               
	EInputAPI                                          GamepadInputAPI;                               // 0x011C (0x0001) [0x0000000000000000]               
	uint8_t                                   DesiredSplitscreenType;                        // 0x011D (0x0001) [0x0000000000000000]               
	uint8_t                                   ActiveSplitscreenType;                         // 0x011E (0x0001) [0x0000008000000000]               
	uint8_t                                   Default2PSplitType;                            // 0x011F (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                   Default3PSplitType;                            // 0x0120 (0x0001) [0x0000000000000002] (CPF_Const)   
	TArray<struct FGamepadInfo>                        Gamepads;                                      // 0x0128 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<struct FSplitscreenData>                    SplitscreenInfo;                               // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class FString                                      ProgressMessage[0x2];                          // 0x0148 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              ProgressTimeOut;                               // 0x0168 (0x0004) [0x0000000000000000]               
	float                                              ProgressFadeTime;                              // 0x016C (0x0004) [0x0000000000000000]               
	TArray<struct FDebugDisplayProperty>               DebugProperties;                               // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    ScaleformInteraction;                          // 0x0180 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FScriptDelegate                             __HandleInputKey__Delegate;                    // 0x0188 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __HandleInputAxis__Delegate;                   // 0x01A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __HandleInputChar__Delegate;                   // 0x01B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventScaleformEnabledChanged__Delegate;      // 0x01D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGamepadInputAPIChanged__Delegate;       // 0x01E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGamepadConnectionStatusChanged__Delegate;// 0x0200 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGampadConnected__Delegate;              // 0x0218 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGampadDisconnected__Delegate;           // 0x0230 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)

public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class Engine.GameViewportClient");
		}

		return uClassPointer;
	};

	bool IsScaleformEnabled();
	void DisableScaleform();
	void EnableScaleform();
};

#ifdef _MSC_VER
#pragma pack(pop)
#endif
