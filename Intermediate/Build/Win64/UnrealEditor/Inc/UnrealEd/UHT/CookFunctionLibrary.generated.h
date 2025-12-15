// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cooker/CookFunctionLibrary.h"

#ifdef UNREALED_CookFunctionLibrary_generated_h
#error "CookFunctionLibrary.generated.h already included, missing '#pragma once' in CookFunctionLibrary.h"
#endif
#define UNREALED_CookFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UCookFunctionLibrary *****************************************************
#define FID_Engine_Source_Editor_UnrealEd_Private_Cooker_CookFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCookAsset);


struct Z_Construct_UClass_UCookFunctionLibrary_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCookFunctionLibrary_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Private_Cooker_CookFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCookFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UCookFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCookFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UCookFunctionLibrary, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCookFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UCookFunctionLibrary)


#define FID_Engine_Source_Editor_UnrealEd_Private_Cooker_CookFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCookFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCookFunctionLibrary(UCookFunctionLibrary&&) = delete; \
	UCookFunctionLibrary(const UCookFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCookFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookFunctionLibrary) \
	NO_API virtual ~UCookFunctionLibrary();


#define FID_Engine_Source_Editor_UnrealEd_Private_Cooker_CookFunctionLibrary_h_9_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Private_Cooker_CookFunctionLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Private_Cooker_CookFunctionLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Private_Cooker_CookFunctionLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Private_Cooker_CookFunctionLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCookFunctionLibrary;

// ********** End Class UCookFunctionLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Private_Cooker_CookFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
