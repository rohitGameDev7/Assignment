// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment/BoxSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxSpawner() {}

// Begin Cross Module References
ASSIGNMENT_API UClass* Z_Construct_UClass_ABoxSpawner();
ASSIGNMENT_API UClass* Z_Construct_UClass_ABoxSpawner_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Assignment();
// End Cross Module References

// Begin Class ABoxSpawner Function SpawnBox
struct Z_Construct_UFunction_ABoxSpawner_SpawnBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function to Spawn a Box */" },
#endif
		{ "ModuleRelativePath", "BoxSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to Spawn a Box" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABoxSpawner_SpawnBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABoxSpawner, nullptr, "SpawnBox", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABoxSpawner_SpawnBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABoxSpawner_SpawnBox_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABoxSpawner_SpawnBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABoxSpawner_SpawnBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABoxSpawner::execSpawnBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnBox();
	P_NATIVE_END;
}
// End Class ABoxSpawner Function SpawnBox

// Begin Class ABoxSpawner
void ABoxSpawner::StaticRegisterNativesABoxSpawner()
{
	UClass* Class = ABoxSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnBox", &ABoxSpawner::execSpawnBox },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoxSpawner);
UClass* Z_Construct_UClass_ABoxSpawner_NoRegister()
{
	return ABoxSpawner::StaticClass();
}
struct Z_Construct_UClass_ABoxSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BoxSpawner.h" },
		{ "ModuleRelativePath", "BoxSpawner.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Box Spawn Interval */" },
#endif
		{ "ModuleRelativePath", "BoxSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box Spawn Interval" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnArea_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Box Spawn Range */" },
#endif
		{ "ModuleRelativePath", "BoxSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box Spawn Range" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnArea;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABoxSpawner_SpawnBox, "SpawnBox" }, // 611076214
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABoxSpawner_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxSpawner, SpawnInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnInterval_MetaData), NewProp_SpawnInterval_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABoxSpawner_Statics::NewProp_SpawnArea = { "SpawnArea", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoxSpawner, SpawnArea), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnArea_MetaData), NewProp_SpawnArea_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxSpawner_Statics::NewProp_SpawnInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxSpawner_Statics::NewProp_SpawnArea,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABoxSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoxSpawner_Statics::ClassParams = {
	&ABoxSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABoxSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoxSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoxSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoxSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoxSpawner()
{
	if (!Z_Registration_Info_UClass_ABoxSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoxSpawner.OuterSingleton, Z_Construct_UClass_ABoxSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoxSpawner.OuterSingleton;
}
template<> ASSIGNMENT_API UClass* StaticClass<ABoxSpawner>()
{
	return ABoxSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxSpawner);
ABoxSpawner::~ABoxSpawner() {}
// End Class ABoxSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoxSpawner, ABoxSpawner::StaticClass, TEXT("ABoxSpawner"), &Z_Registration_Info_UClass_ABoxSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoxSpawner), 3147821267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_3895558972(TEXT("/Script/Assignment"),
	Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
