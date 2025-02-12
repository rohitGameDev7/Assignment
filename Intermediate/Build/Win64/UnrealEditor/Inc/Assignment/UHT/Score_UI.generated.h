// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Score_UI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT_Score_UI_generated_h
#error "Score_UI.generated.h already included, missing '#pragma once' in Score_UI.h"
#endif
#define ASSIGNMENT_Score_UI_generated_h

#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_Score_UI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateScore);


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_Score_UI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScore_UI(); \
	friend struct Z_Construct_UClass_UScore_UI_Statics; \
public: \
	DECLARE_CLASS(UScore_UI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Assignment"), NO_API) \
	DECLARE_SERIALIZER(UScore_UI)


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_Score_UI_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScore_UI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UScore_UI(UScore_UI&&); \
	UScore_UI(const UScore_UI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScore_UI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScore_UI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScore_UI) \
	NO_API virtual ~UScore_UI();


#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_Score_UI_h_12_PROLOG
#define FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_Score_UI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_Score_UI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_Score_UI_h_15_INCLASS_NO_PURE_DECLS \
	FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_Score_UI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT_API UClass* StaticClass<class UScore_UI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Games_projects_Unreal_engine_Assignment_Source_Assignment_Score_UI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
