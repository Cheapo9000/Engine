// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ReplaceAssetsCommandlet.h"

#ifdef UNREALED_ReplaceAssetsCommandlet_generated_h
#error "ReplaceAssetsCommandlet.generated.h already included, missing '#pragma once' in ReplaceAssetsCommandlet.h"
#endif
#define UNREALED_ReplaceAssetsCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReplaceAssetsCommandlet *************************************************
struct Z_Construct_UClass_UReplaceAssetsCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UReplaceAssetsCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUReplaceAssetsCommandlet(); \
	friend struct ::Z_Construct_UClass_UReplaceAssetsCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UReplaceAssetsCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UReplaceAssetsCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UReplaceAssetsCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UReplaceAssetsCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReplaceAssetsCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReplaceAssetsCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReplaceAssetsCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReplaceAssetsCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReplaceAssetsCommandlet(UReplaceAssetsCommandlet&&) = delete; \
	UReplaceAssetsCommandlet(const UReplaceAssetsCommandlet&) = delete; \
	NO_API virtual ~UReplaceAssetsCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h_11_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h_14_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReplaceAssetsCommandlet;

// ********** End Class UReplaceAssetsCommandlet ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
