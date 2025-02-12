// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssignmentWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAssignmentCharacter;
#ifdef ASSIGNMENT_AssignmentWeaponComponent_generated_h
#error "AssignmentWeaponComponent.generated.h already included, missing '#pragma once' in AssignmentWeaponComponent.h"
#endif
#define ASSIGNMENT_AssignmentWeaponComponent_generated_h

#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssignmentWeaponComponent(); \
	friend struct Z_Construct_UClass_UAssignmentWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UAssignmentWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment"), NO_API) \
	DECLARE_SERIALIZER(UAssignmentWeaponComponent)


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssignmentWeaponComponent(UAssignmentWeaponComponent&&); \
	UAssignmentWeaponComponent(const UAssignmentWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssignmentWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssignmentWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssignmentWeaponComponent) \
	NO_API virtual ~UAssignmentWeaponComponent();


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentWeaponComponent_h_11_PROLOG
#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT_API UClass* StaticClass<class UAssignmentWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
