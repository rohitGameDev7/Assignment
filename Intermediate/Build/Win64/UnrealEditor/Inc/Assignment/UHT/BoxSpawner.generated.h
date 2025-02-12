// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoxSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT_BoxSpawner_generated_h
#error "BoxSpawner.generated.h already included, missing '#pragma once' in BoxSpawner.h"
#endif
#define ASSIGNMENT_BoxSpawner_generated_h

#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnBox);


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxSpawner(); \
	friend struct Z_Construct_UClass_ABoxSpawner_Statics; \
public: \
	DECLARE_CLASS(ABoxSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment"), NO_API) \
	DECLARE_SERIALIZER(ABoxSpawner)


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABoxSpawner(ABoxSpawner&&); \
	ABoxSpawner(const ABoxSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoxSpawner) \
	NO_API virtual ~ABoxSpawner();


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_8_PROLOG
#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_11_INCLASS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT_API UClass* StaticClass<class ABoxSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_BoxSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
