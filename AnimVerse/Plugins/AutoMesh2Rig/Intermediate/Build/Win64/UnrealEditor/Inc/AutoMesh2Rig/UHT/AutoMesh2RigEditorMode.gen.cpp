// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoMesh2Rig/Public/AutoMesh2RigEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoMesh2RigEditorMode() {}

// Begin Cross Module References
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigEditorMode();
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigEditorMode_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UEdMode();
UPackage* Z_Construct_UPackage__Script_AutoMesh2Rig();
// End Cross Module References

// Begin Class UAutoMesh2RigEditorMode
void UAutoMesh2RigEditorMode::StaticRegisterNativesUAutoMesh2RigEditorMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoMesh2RigEditorMode);
UClass* Z_Construct_UClass_UAutoMesh2RigEditorMode_NoRegister()
{
	return UAutoMesh2RigEditorMode::StaticClass();
}
struct Z_Construct_UClass_UAutoMesh2RigEditorMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class provides an example of how to extend a UEdMode to add some simple tools\n * using the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\n * forward events to a UEdModeInteractiveToolsContext instance, which\n * has all the logic for interacting with the InputRouter, ToolManager, etc.\n * The functions provided here are the minimum to get started inserting some custom behavior.\n * Take a look at the UEdMode markup for more extensibility options.\n */" },
#endif
		{ "IncludePath", "AutoMesh2RigEditorMode.h" },
		{ "ModuleRelativePath", "Public/AutoMesh2RigEditorMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class provides an example of how to extend a UEdMode to add some simple tools\nusing the InteractiveTools framework. The various UEdMode input event handlers (see UEdMode.h)\nforward events to a UEdModeInteractiveToolsContext instance, which\nhas all the logic for interacting with the InputRouter, ToolManager, etc.\nThe functions provided here are the minimum to get started inserting some custom behavior.\nTake a look at the UEdMode markup for more extensibility options." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoMesh2RigEditorMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoMesh2RigEditorMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdMode,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoMesh2Rig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigEditorMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoMesh2RigEditorMode_Statics::ClassParams = {
	&UAutoMesh2RigEditorMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigEditorMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoMesh2RigEditorMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoMesh2RigEditorMode()
{
	if (!Z_Registration_Info_UClass_UAutoMesh2RigEditorMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoMesh2RigEditorMode.OuterSingleton, Z_Construct_UClass_UAutoMesh2RigEditorMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoMesh2RigEditorMode.OuterSingleton;
}
template<> AUTOMESH2RIG_API UClass* StaticClass<UAutoMesh2RigEditorMode>()
{
	return UAutoMesh2RigEditorMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoMesh2RigEditorMode);
// End Class UAutoMesh2RigEditorMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Public_AutoMesh2RigEditorMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoMesh2RigEditorMode, UAutoMesh2RigEditorMode::StaticClass, TEXT("UAutoMesh2RigEditorMode"), &Z_Registration_Info_UClass_UAutoMesh2RigEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoMesh2RigEditorMode), 2492247717U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Public_AutoMesh2RigEditorMode_h_2347043448(TEXT("/Script/AutoMesh2Rig"),
	Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Public_AutoMesh2RigEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Public_AutoMesh2RigEditorMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
