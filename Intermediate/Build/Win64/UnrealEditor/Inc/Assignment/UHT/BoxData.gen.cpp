// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment/BoxData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxData() {}

// Begin Cross Module References
ASSIGNMENT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_Assignment();
// End Cross Module References

// Begin ScriptStruct FBoxData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoxData;
class UScriptStruct* FBoxData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoxData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoxData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoxData, (UObject*)Z_Construct_UPackage__Script_Assignment(), TEXT("BoxData"));
	}
	return Z_Registration_Info_UScriptStruct_BoxData.OuterSingleton;
}
template<> ASSIGNMENT_API UScriptStruct* StaticStruct<FBoxData>()
{
	return FBoxData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoxData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Allows struct to be used in Blueprints\n" },
#endif
		{ "ModuleRelativePath", "BoxData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows struct to be used in Blueprints" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "BoxData" },
		{ "ModuleRelativePath", "BoxData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "BoxData" },
		{ "ModuleRelativePath", "BoxData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "BoxData" },
		{ "ModuleRelativePath", "BoxData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoxData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoxData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxData, Color), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoxData_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxData, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoxData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoxData, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoxData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxData_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxData_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoxData_Statics::NewProp_Score,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoxData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment,
	nullptr,
	&NewStructOps,
	"BoxData",
	Z_Construct_UScriptStruct_FBoxData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxData_Statics::PropPointers),
	sizeof(FBoxData),
	alignof(FBoxData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoxData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoxData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoxData()
{
	if (!Z_Registration_Info_UScriptStruct_BoxData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoxData.InnerSingleton, Z_Construct_UScriptStruct_FBoxData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoxData.InnerSingleton;
}
// End ScriptStruct FBoxData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBoxData::StaticStruct, Z_Construct_UScriptStruct_FBoxData_Statics::NewStructOps, TEXT("BoxData"), &Z_Registration_Info_UScriptStruct_BoxData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoxData), 3187020512U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxData_h_1251159990(TEXT("/Script/Assignment"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
