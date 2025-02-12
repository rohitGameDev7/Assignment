// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpawnableBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
#ifdef ASSIGNMENT_SpawnableBox_generated_h
#error "SpawnableBox.generated.h already included, missing '#pragma once' in SpawnableBox.h"
#endif
#define ASSIGNMENT_SpawnableBox_generated_h

#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeBox); \
	DECLARE_FUNCTION(execDestroyBox); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnableBox(); \
	friend struct Z_Construct_UClass_ASpawnableBox_Statics; \
public: \
	DECLARE_CLASS(ASpawnableBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment"), NO_API) \
	DECLARE_SERIALIZER(ASpawnableBox)


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASpawnableBox(ASpawnableBox&&); \
	ASpawnableBox(const ASpawnableBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnableBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnableBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnableBox) \
	NO_API virtual ~ASpawnableBox();


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_8_PROLOG
#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_11_INCLASS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT_API UClass* StaticClass<class ASpawnableBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_SpawnableBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
