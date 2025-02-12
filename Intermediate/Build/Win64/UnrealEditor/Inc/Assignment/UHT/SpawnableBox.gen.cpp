// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment/SpawnableBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnableBox() {}

// Begin Cross Module References
ASSIGNMENT_API UClass* Z_Construct_UClass_ASpawnableBox();
ASSIGNMENT_API UClass* Z_Construct_UClass_ASpawnableBox_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Assignment();
// End Cross Module References

// Begin Class ASpawnableBox Function DestroyBox
struct Z_Construct_UFunction_ASpawnableBox_DestroyBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnableBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnableBox_DestroyBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnableBox, nullptr, "DestroyBox", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnableBox_DestroyBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnableBox_DestroyBox_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASpawnableBox_DestroyBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnableBox_DestroyBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnableBox::execDestroyBox)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyBox();
	P_NATIVE_END;
}
// End Class ASpawnableBox Function DestroyBox

// Begin Class ASpawnableBox Function InitializeBox
struct Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics
{
	struct SpawnableBox_eventInitializeBox_Parms
	{
		float NewHealth;
		int32 NewScore;
		UMaterialInstanceDynamic* Material;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnableBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnableBox_eventInitializeBox_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnableBox_eventInitializeBox_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnableBox_eventInitializeBox_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::NewProp_NewScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnableBox, nullptr, "InitializeBox", nullptr, nullptr, Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::SpawnableBox_eventInitializeBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::SpawnableBox_eventInitializeBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnableBox_InitializeBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnableBox_InitializeBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnableBox::execInitializeBox)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewScore);
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeBox(Z_Param_NewHealth,Z_Param_NewScore,Z_Param_Material);
	P_NATIVE_END;
}
// End Class ASpawnableBox Function InitializeBox

// Begin Class ASpawnableBox Function TakeDamage
struct Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics
{
	struct SpawnableBox_eventTakeDamage_Parms
	{
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Function to Handle Damage */" },
#endif
		{ "ModuleRelativePath", "SpawnableBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to Handle Damage" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpawnableBox_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnableBox, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::SpawnableBox_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::SpawnableBox_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASpawnableBox_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnableBox_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASpawnableBox::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamage(Z_Param_DamageAmount);
	P_NATIVE_END;
}
// End Class ASpawnableBox Function TakeDamage

// Begin Class ASpawnableBox
void ASpawnableBox::StaticRegisterNativesASpawnableBox()
{
	UClass* Class = ASpawnableBox::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroyBox", &ASpawnableBox::execDestroyBox },
		{ "InitializeBox", &ASpawnableBox::execInitializeBox },
		{ "TakeDamage", &ASpawnableBox::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnableBox);
UClass* Z_Construct_UClass_ASpawnableBox_NoRegister()
{
	return ASpawnableBox::StaticClass();
}
struct Z_Construct_UClass_ASpawnableBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnableBox.h" },
		{ "ModuleRelativePath", "SpawnableBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Box Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Box Health */" },
#endif
		{ "ModuleRelativePath", "SpawnableBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[] = {
		{ "Category", "Box Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Box Score */" },
#endif
		{ "ModuleRelativePath", "SpawnableBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Box Score" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SpawnableBox.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnableBox_DestroyBox, "DestroyBox" }, // 1003224712
		{ &Z_Construct_UFunction_ASpawnableBox_InitializeBox, "InitializeBox" }, // 1569969959
		{ &Z_Construct_UFunction_ASpawnableBox_TakeDamage, "TakeDamage" }, // 996331960
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnableBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawnableBox_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnableBox, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASpawnableBox_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnableBox, Score), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Score_MetaData), NewProp_Score_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawnableBox_Statics::NewProp_BoxMesh = { "BoxMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnableBox, BoxMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxMesh_MetaData), NewProp_BoxMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnableBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnableBox_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnableBox_Statics::NewProp_Score,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnableBox_Statics::NewProp_BoxMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnableBox_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnableBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Assignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnableBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnableBox_Statics::ClassParams = {
	&ASpawnableBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASpawnableBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnableBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnableBox_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnableBox_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnableBox()
{
	if (!Z_Registration_Info_UClass_ASpawnableBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnableBox.OuterSingleton, Z_Construct_UClass_ASpawnableBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnableBox.OuterSingleton;
}
template<> ASSIGNMENT_API UClass* StaticClass<ASpawnableBox>()
{
	return ASpawnableBox::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnableBox);
ASpawnableBox::~ASpawnableBox() {}
// End Class ASpawnableBox

// Begin Registration
struct Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnableBox, ASpawnableBox::StaticClass, TEXT("ASpawnableBox"), &Z_Registration_Info_UClass_ASpawnableBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnableBox), 3296035461U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_1075869274(TEXT("/Script/Assignment"),
	Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
