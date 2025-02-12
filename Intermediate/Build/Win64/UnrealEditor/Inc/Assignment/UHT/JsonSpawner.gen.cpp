// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment/JsonSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonSpawner() {}

// Begin Cross Module References
ASSIGNMENT_API UClass* Z_Construct_UClass_AJsonSpawner();
ASSIGNMENT_API UClass* Z_Construct_UClass_AJsonSpawner_NoRegister();
ASSIGNMENT_API UClass* Z_Construct_UClass_ASpawnableBox_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Assignment();
// End Cross Module References

// Begin Class AJsonSpawner
void AJsonSpawner::StaticRegisterNativesAJsonSpawner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJsonSpawner);
UClass* Z_Construct_UClass_AJsonSpawner_NoRegister()
{
	return AJsonSpawner::StaticClass();
}
struct Z_Construct_UClass_AJsonSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "JsonSpawner.h" },
		{ "ModuleRelativePath", "JsonSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxClass_MetaData[] = {
		{ "Category", "JsonSpawner" },
		{ "ModuleRelativePath", "JsonSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BoxClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJsonSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AJsonSpawner_Statics::NewProp_BoxClass = { "BoxClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJsonSpawner, BoxClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASpawnableBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxClass_MetaData), NewProp_BoxClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJsonSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJsonSpawner_Statics::NewProp_BoxClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJsonSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJsonSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJsonSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJsonSpawner_Statics::ClassParams = {
	&AJsonSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AJsonSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AJsonSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJsonSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_AJsonSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJsonSpawner()
{
	if (!Z_Registration_Info_UClass_AJsonSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJsonSpawner.OuterSingleton, Z_Construct_UClass_AJsonSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJsonSpawner.OuterSingleton;
}
template<> ASSIGNMENT_API UClass* StaticClass<AJsonSpawner>()
{
	return AJsonSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJsonSpawner);
AJsonSpawner::~AJsonSpawner() {}
// End Class AJsonSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_JsonSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJsonSpawner, AJsonSpawner::StaticClass, TEXT("AJsonSpawner"), &Z_Registration_Info_UClass_AJsonSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJsonSpawner), 249004593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_JsonSpawner_h_605915894(TEXT("/Script/Assignment"),
	Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_JsonSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_JsonSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
