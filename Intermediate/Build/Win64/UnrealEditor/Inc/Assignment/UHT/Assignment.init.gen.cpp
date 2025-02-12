// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssignment_init() {}
	ASSIGNMENT_API UFunction* Z_Construct_UDelegateFunction_Assignment_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Assignment;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Assignment()
	{
		if (!Z_Registration_Info_UPackage__Script_Assignment.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Assignment_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Assignment",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCD83387A,
				0x52BDD740,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Assignment.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Assignment.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Assignment(Z_Construct_UPackage__Script_Assignment, TEXT("/Script/Assignment"), Z_Registration_Info_UPackage__Script_Assignment, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCD83387A, 0x52BDD740));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
