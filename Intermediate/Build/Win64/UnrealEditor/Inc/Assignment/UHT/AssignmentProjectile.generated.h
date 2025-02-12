// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssignmentProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ASSIGNMENT_AssignmentProjectile_generated_h
#error "AssignmentProjectile.generated.h already included, missing '#pragma once' in AssignmentProjectile.h"
#endif
#define ASSIGNMENT_AssignmentProjectile_generated_h

#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAssignmentProjectile(); \
	friend struct Z_Construct_UClass_AAssignmentProjectile_Statics; \
public: \
	DECLARE_CLASS(AAssignmentProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment"), NO_API) \
	DECLARE_SERIALIZER(AAssignmentProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAssignmentProjectile(AAssignmentProjectile&&); \
	AAssignmentProjectile(const AAssignmentProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAssignmentProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAssignmentProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAssignmentProjectile) \
	NO_API virtual ~AAssignmentProjectile();


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentProjectile_h_12_PROLOG
#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT_API UClass* StaticClass<class AAssignmentProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
