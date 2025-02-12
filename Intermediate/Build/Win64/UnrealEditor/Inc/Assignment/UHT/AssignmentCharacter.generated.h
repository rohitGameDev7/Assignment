// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssignmentCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT_AssignmentCharacter_generated_h
#error "AssignmentCharacter.generated.h already included, missing '#pragma once' in AssignmentCharacter.h"
#endif
#define ASSIGNMENT_AssignmentCharacter_generated_h

#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddScore);


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssignmentCharacter(); \
	friend struct Z_Construct_UClass_AAssignmentCharacter_Statics; \
public: \
	DECLARE_CLASS(AAssignmentCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment"), NO_API) \
	DECLARE_SERIALIZER(AAssignmentCharacter)


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAssignmentCharacter(AAssignmentCharacter&&); \
	AAssignmentCharacter(const AAssignmentCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssignmentCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssignmentCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssignmentCharacter) \
	NO_API virtual ~AAssignmentCharacter();


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentCharacter_h_19_PROLOG
#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT_API UClass* StaticClass<class AAssignmentCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
