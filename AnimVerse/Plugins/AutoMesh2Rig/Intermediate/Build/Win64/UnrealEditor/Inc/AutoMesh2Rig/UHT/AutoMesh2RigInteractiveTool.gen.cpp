// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AutoMesh2Rig/Private/Tools/AutoMesh2RigInteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoMesh2RigInteractiveTool() {}

// Begin Cross Module References
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveTool();
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveTool_NoRegister();
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder();
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder_NoRegister();
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties();
AUTOMESH2RIG_API UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
UPackage* Z_Construct_UPackage__Script_AutoMesh2Rig();
// End Cross Module References

// Begin Class UAutoMesh2RigInteractiveToolBuilder
void UAutoMesh2RigInteractiveToolBuilder::StaticRegisterNativesUAutoMesh2RigInteractiveToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoMesh2RigInteractiveToolBuilder);
UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder_NoRegister()
{
	return UAutoMesh2RigInteractiveToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Builder for UAutoMesh2RigInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/AutoMesh2RigInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Builder for UAutoMesh2RigInteractiveTool" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoMesh2RigInteractiveToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoMesh2Rig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder_Statics::ClassParams = {
	&UAutoMesh2RigInteractiveToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder()
{
	if (!Z_Registration_Info_UClass_UAutoMesh2RigInteractiveToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoMesh2RigInteractiveToolBuilder.OuterSingleton, Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoMesh2RigInteractiveToolBuilder.OuterSingleton;
}
template<> AUTOMESH2RIG_API UClass* StaticClass<UAutoMesh2RigInteractiveToolBuilder>()
{
	return UAutoMesh2RigInteractiveToolBuilder::StaticClass();
}
UAutoMesh2RigInteractiveToolBuilder::UAutoMesh2RigInteractiveToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoMesh2RigInteractiveToolBuilder);
UAutoMesh2RigInteractiveToolBuilder::~UAutoMesh2RigInteractiveToolBuilder() {}
// End Class UAutoMesh2RigInteractiveToolBuilder

// Begin Class UAutoMesh2RigInteractiveToolProperties
void UAutoMesh2RigInteractiveToolProperties::StaticRegisterNativesUAutoMesh2RigInteractiveToolProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoMesh2RigInteractiveToolProperties);
UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_NoRegister()
{
	return UAutoMesh2RigInteractiveToolProperties::StaticClass();
}
struct Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Property set for the UAutoMesh2RigInteractiveTool\n */" },
#endif
		{ "IncludePath", "Tools/AutoMesh2RigInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Property set for the UAutoMesh2RigInteractiveTool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First point of measurement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Second point of measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Second point of measurement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Options" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current distance measurement */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current distance measurement" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_Distance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoMesh2RigInteractiveToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoMesh2RigInteractiveToolProperties, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPoint_MetaData), NewProp_StartPoint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoMesh2RigInteractiveToolProperties, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndPoint_MetaData), NewProp_EndPoint_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoMesh2RigInteractiveToolProperties, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::NewProp_StartPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::NewProp_EndPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::NewProp_Distance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoMesh2Rig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::ClassParams = {
	&UAutoMesh2RigInteractiveToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties()
{
	if (!Z_Registration_Info_UClass_UAutoMesh2RigInteractiveToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoMesh2RigInteractiveToolProperties.OuterSingleton, Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoMesh2RigInteractiveToolProperties.OuterSingleton;
}
template<> AUTOMESH2RIG_API UClass* StaticClass<UAutoMesh2RigInteractiveToolProperties>()
{
	return UAutoMesh2RigInteractiveToolProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoMesh2RigInteractiveToolProperties);
UAutoMesh2RigInteractiveToolProperties::~UAutoMesh2RigInteractiveToolProperties() {}
// End Class UAutoMesh2RigInteractiveToolProperties

// Begin Class UAutoMesh2RigInteractiveTool
void UAutoMesh2RigInteractiveTool::StaticRegisterNativesUAutoMesh2RigInteractiveTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAutoMesh2RigInteractiveTool);
UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveTool_NoRegister()
{
	return UAutoMesh2RigInteractiveTool::StaticClass();
}
struct Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAutoMesh2RigInteractiveTool is an example Tool that allows the user to measure the \n * distance between two points. The first point is set by click-dragging the mouse, and\n * the second point is set by shift-click-dragging the mouse.\n */" },
#endif
		{ "IncludePath", "Tools/AutoMesh2RigInteractiveTool.h" },
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAutoMesh2RigInteractiveTool is an example Tool that allows the user to measure the\ndistance between two points. The first point is set by click-dragging the mouse, and\nthe second point is set by shift-click-dragging the mouse." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Properties of the tool are stored here */" },
#endif
		{ "ModuleRelativePath", "Private/Tools/AutoMesh2RigInteractiveTool.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Properties of the tool are stored here" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutoMesh2RigInteractiveTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAutoMesh2RigInteractiveTool, Properties), Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::NewProp_Properties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
	(UObject* (*)())Z_Construct_UPackage__Script_AutoMesh2Rig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::ClassParams = {
	&UAutoMesh2RigInteractiveTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAutoMesh2RigInteractiveTool()
{
	if (!Z_Registration_Info_UClass_UAutoMesh2RigInteractiveTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAutoMesh2RigInteractiveTool.OuterSingleton, Z_Construct_UClass_UAutoMesh2RigInteractiveTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAutoMesh2RigInteractiveTool.OuterSingleton;
}
template<> AUTOMESH2RIG_API UClass* StaticClass<UAutoMesh2RigInteractiveTool>()
{
	return UAutoMesh2RigInteractiveTool::StaticClass();
}
UAutoMesh2RigInteractiveTool::UAutoMesh2RigInteractiveTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAutoMesh2RigInteractiveTool);
UAutoMesh2RigInteractiveTool::~UAutoMesh2RigInteractiveTool() {}
// End Class UAutoMesh2RigInteractiveTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Private_Tools_AutoMesh2RigInteractiveTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAutoMesh2RigInteractiveToolBuilder, UAutoMesh2RigInteractiveToolBuilder::StaticClass, TEXT("UAutoMesh2RigInteractiveToolBuilder"), &Z_Registration_Info_UClass_UAutoMesh2RigInteractiveToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoMesh2RigInteractiveToolBuilder), 246179991U) },
		{ Z_Construct_UClass_UAutoMesh2RigInteractiveToolProperties, UAutoMesh2RigInteractiveToolProperties::StaticClass, TEXT("UAutoMesh2RigInteractiveToolProperties"), &Z_Registration_Info_UClass_UAutoMesh2RigInteractiveToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoMesh2RigInteractiveToolProperties), 4013761644U) },
		{ Z_Construct_UClass_UAutoMesh2RigInteractiveTool, UAutoMesh2RigInteractiveTool::StaticClass, TEXT("UAutoMesh2RigInteractiveTool"), &Z_Registration_Info_UClass_UAutoMesh2RigInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAutoMesh2RigInteractiveTool), 3320555274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Private_Tools_AutoMesh2RigInteractiveTool_h_581820818(TEXT("/Script/AutoMesh2Rig"),
	Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Private_Tools_AutoMesh2RigInteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_bsh_AnimVerse_AI_AnimVerse_Plugins_AutoMesh2Rig_Source_AutoMesh2Rig_Private_Tools_AutoMesh2RigInteractiveTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
