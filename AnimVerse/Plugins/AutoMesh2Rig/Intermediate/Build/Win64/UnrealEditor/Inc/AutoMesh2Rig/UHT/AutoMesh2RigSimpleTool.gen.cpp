// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoMesh2Rig/Private/Tools/AutoMesh2RigSimpleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoMesh2RigSimpleTool() {}

// Begin Cross Module References
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigSimpleTool();
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigSimpleTool_NoRegister();
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder();
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder_NoRegister();
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties();
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
UPackage* Z_Construct_UPackage__Script_AutoMesh2Rig();
// End Cross Module References

// Begin Class UAutoMesh2RigSimpleToolBuilder
void UAutoMesh2RigSimpleToolBuilder::StaticRegisterNativesUAutoMesh2RigSimpleToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoMesh2RigSimpleToolBuilder);
UClass* Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder_NoRegister()
{
	return UAutoMesh2RigSimpleToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for UAutoMesh2RigSimpleTool\n */" },
#endif
		{ "IncludePath", "Tools/AutoMesh2RigSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for UAutoMesh2RigSimpleTool" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoMesh2RigSimpleToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoMesh2Rig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder_Statics::ClassParams = {
	&UAutoMesh2RigSimpleToolBuilder::StaticClass,
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
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder()
{
	if (!Z_Registration_Info_UClass_UAutoMesh2RigSimpleToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoMesh2RigSimpleToolBuilder.OuterSingleton, Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoMesh2RigSimpleToolBuilder.OuterSingleton;
}
template<> AUTOMESH2RIG_API UClass* StaticClass<UAutoMesh2RigSimpleToolBuilder>()
{
	return UAutoMesh2RigSimpleToolBuilder::StaticClass();
}
UAutoMesh2RigSimpleToolBuilder::UAutoMesh2RigSimpleToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoMesh2RigSimpleToolBuilder);
UAutoMesh2RigSimpleToolBuilder::~UAutoMesh2RigSimpleToolBuilder() {}
// End Class UAutoMesh2RigSimpleToolBuilder

// Begin Class UAutoMesh2RigSimpleToolProperties
void UAutoMesh2RigSimpleToolProperties::StaticRegisterNativesUAutoMesh2RigSimpleToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoMesh2RigSimpleToolProperties);
UClass* Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_NoRegister()
{
	return UAutoMesh2RigSimpleToolProperties::StaticClass();
}
struct Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Settings UObject for UAutoMesh2RigSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
#endif
		{ "IncludePath", "Tools/AutoMesh2RigSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings UObject for UAutoMesh2RigSimpleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowExtendedInfo_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown. */" },
#endif
		{ "DisplayName", "Show Extended Info" },
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, dialog should display extended information about the actor clicked on. Otherwise, only basic info will be shown." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ShowExtendedInfo_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowExtendedInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoMesh2RigSimpleToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit(void* Obj)
{
	((UAutoMesh2RigSimpleToolProperties*)Obj)->ShowExtendedInfo = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::NewProp_ShowExtendedInfo = { "ShowExtendedInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAutoMesh2RigSimpleToolProperties), &Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::NewProp_ShowExtendedInfo_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowExtendedInfo_MetaData), NewProp_ShowExtendedInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::NewProp_ShowExtendedInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoMesh2Rig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::ClassParams = {
	&UAutoMesh2RigSimpleToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties()
{
	if (!Z_Registration_Info_UClass_UAutoMesh2RigSimpleToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoMesh2RigSimpleToolProperties.OuterSingleton, Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoMesh2RigSimpleToolProperties.OuterSingleton;
}
template<> AUTOMESH2RIG_API UClass* StaticClass<UAutoMesh2RigSimpleToolProperties>()
{
	return UAutoMesh2RigSimpleToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoMesh2RigSimpleToolProperties);
UAutoMesh2RigSimpleToolProperties::~UAutoMesh2RigSimpleToolProperties() {}
// End Class UAutoMesh2RigSimpleToolProperties

// Begin Class UAutoMesh2RigSimpleTool
void UAutoMesh2RigSimpleTool::StaticRegisterNativesUAutoMesh2RigSimpleTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoMesh2RigSimpleTool);
UClass* Z_Construct_UClass_UAutoMesh2RigSimpleTool_NoRegister()
{
	return UAutoMesh2RigSimpleTool::StaticClass();
}
struct Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAutoMesh2RigSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\n * clicks left mouse button. All the action is in the ::OnClicked handler.\n */" },
#endif
		{ "IncludePath", "Tools/AutoMesh2RigSimpleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigSimpleTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAutoMesh2RigSimpleTool is an example Tool that opens a message box displaying info about an actor that the user\nclicks left mouse button. All the action is in the ::OnClicked handler." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigSimpleTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoMesh2RigSimpleTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoMesh2RigSimpleTool, Properties), Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleClickTool,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoMesh2Rig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::ClassParams = {
	&UAutoMesh2RigSimpleTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoMesh2RigSimpleTool()
{
	if (!Z_Registration_Info_UClass_UAutoMesh2RigSimpleTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoMesh2RigSimpleTool.OuterSingleton, Z_Construct_UClass_UAutoMesh2RigSimpleTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoMesh2RigSimpleTool.OuterSingleton;
}
template<> AUTOMESH2RIG_API UClass* StaticClass<UAutoMesh2RigSimpleTool>()
{
	return UAutoMesh2RigSimpleTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoMesh2RigSimpleTool);
UAutoMesh2RigSimpleTool::~UAutoMesh2RigSimpleTool() {}
// End Class UAutoMesh2RigSimpleTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Private_Tools_AutoMesh2RigSimpleTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoMesh2RigSimpleToolBuilder, UAutoMesh2RigSimpleToolBuilder::StaticClass, TEXT("UAutoMesh2RigSimpleToolBuilder"), &Z_Registration_Info_UClass_UAutoMesh2RigSimpleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoMesh2RigSimpleToolBuilder), 3414996843U) },
		{ Z_Construct_UClass_UAutoMesh2RigSimpleToolProperties, UAutoMesh2RigSimpleToolProperties::StaticClass, TEXT("UAutoMesh2RigSimpleToolProperties"), &Z_Registration_Info_UClass_UAutoMesh2RigSimpleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoMesh2RigSimpleToolProperties), 969030046U) },
		{ Z_Construct_UClass_UAutoMesh2RigSimpleTool, UAutoMesh2RigSimpleTool::StaticClass, TEXT("UAutoMesh2RigSimpleTool"), &Z_Registration_Info_UClass_UAutoMesh2RigSimpleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoMesh2RigSimpleTool), 1417192749U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Private_Tools_AutoMesh2RigSimpleTool_h_2197304619(TEXT("/Script/AutoMesh2Rig"),
	Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Private_Tools_AutoMesh2RigSimpleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Private_Tools_AutoMesh2RigSimpleTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
