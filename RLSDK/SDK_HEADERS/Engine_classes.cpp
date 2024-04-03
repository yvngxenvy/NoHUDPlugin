/*
#############################################################################################
# Rocket League (2.35) SDK
# Generated with the CodeRedGenerator v9.9.9
# ========================================================================================= #
# File: Engine_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK, 999envy
# Links: www.github.com/CodeRedModding/CodeRed-Generator, www.twitter.com/ItsBranK
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

// Function Engine.GameViewportClient.IsScaleformEnabled
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UGameViewportClient::IsScaleformEnabled()
{
	static UFunction* uFnIsScaleformEnabled = nullptr;

	if (!uFnIsScaleformEnabled)
	{
		uFnIsScaleformEnabled = UFunction::FindFunction("Function Engine.GameViewportClient.IsScaleformEnabled");
	}

	UGameViewportClient_execIsScaleformEnabled_Params IsScaleformEnabled_Params;

	uFnIsScaleformEnabled->FunctionFlags |= ~0x400;
	this->ProcessEvent(uFnIsScaleformEnabled, &IsScaleformEnabled_Params, nullptr);
	uFnIsScaleformEnabled->FunctionFlags |= 0x400;

	return IsScaleformEnabled_Params.ReturnValue;
};

// Function Engine.GameViewportClient.DisableScaleform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameViewportClient::DisableScaleform()
{
	static UFunction* uFnDisableScaleform = nullptr;

	if (!uFnDisableScaleform)
	{
		uFnDisableScaleform = UFunction::FindFunction("Function Engine.GameViewportClient.DisableScaleform");
	}

	UGameViewportClient_execDisableScaleform_Params DisableScaleform_Params;

	uFnDisableScaleform->FunctionFlags |= ~0x400;
	this->ProcessEvent(uFnDisableScaleform, &DisableScaleform_Params, nullptr);
	uFnDisableScaleform->FunctionFlags |= 0x400;
};

// Function Engine.GameViewportClient.EnableScaleform
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter Info:

void UGameViewportClient::EnableScaleform()
{
	static UFunction* uFnEnableScaleform = nullptr;

	if (!uFnEnableScaleform)
	{
		uFnEnableScaleform = UFunction::FindFunction("Function Engine.GameViewportClient.EnableScaleform");
	}

	UGameViewportClient_execEnableScaleform_Params EnableScaleform_Params;

	uFnEnableScaleform->FunctionFlags |= ~0x400;
	this->ProcessEvent(uFnEnableScaleform, &EnableScaleform_Params, nullptr);
	uFnEnableScaleform->FunctionFlags |= 0x400;
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
