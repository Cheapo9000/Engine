// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/MakeBinaryConfigCommandlet.h"

#ifdef UNREALED_MakeBinaryConfigCommandlet_generated_h
#error "MakeBinaryConfigCommandlet.generated.h already included, missing '#pragma once' in MakeBinaryConfigCommandlet.h"
#endif
#define UNREALED_MakeBinaryConfigCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMakeBinaryConfigCommandlet **********************************************
struct Z_Construct_UClass_UMakeBinaryConfigCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UMakeBinaryConfigCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMakeBinaryConfigCommandlet(); \
	friend struct ::Z_Construct_UClass_UMakeBinaryConfigCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UMakeBinaryConfigCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UMakeBinaryConfigCommandlet, UCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UMakeBinaryConfigCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UMakeBinaryConfigCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMakeBinaryConfigCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMakeBinaryConfigCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMakeBinaryConfigCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMakeBinaryConfigCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMakeBinaryConfigCommandlet(UMakeBinaryConfigCommandlet&&) = delete; \
	UMakeBinaryConfigCommandlet(const UMakeBinaryConfigCommandlet&) = delete; \
	NO_API virtual ~UMakeBinaryConfigCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMakeBinaryConfigCommandlet;

// ********** End Class UMakeBinaryConfigCommandlet ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_MakeBinaryConfigCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
