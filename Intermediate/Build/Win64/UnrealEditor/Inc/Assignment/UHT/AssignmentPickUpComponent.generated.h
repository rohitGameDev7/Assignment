// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssignmentPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AAssignmentCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ASSIGNMENT_AssignmentPickUpComponent_generated_h
#error "AssignmentPickUpComponent.generated.h already included, missing '#pragma once' in AssignmentPickUpComponent.h"
#endif
#define ASSIGNMENT_AssignmentPickUpComponent_generated_h

#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentPickUpComponent_h_12_DELEGATE \
ASSIGNMENT_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AAssignmentCharacter* PickUpCharacter);


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssignmentPickUpComponent(); \
	friend struct Z_Construct_UClass_UAssignmentPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UAssignmentPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment"), NO_API) \
	DECLARE_SERIALIZER(UAssignmentPickUpComponent)


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAssignmentPickUpComponent(UAssignmentPickUpComponent&&); \
	UAssignmentPickUpComponent(const UAssignmentPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssignmentPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssignmentPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssignmentPickUpComponent) \
	NO_API virtual ~UAssignmentPickUpComponent();


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentPickUpComponent_h_14_PROLOG
#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT_API UClass* StaticClass<class UAssignmentPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_AssignmentPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
