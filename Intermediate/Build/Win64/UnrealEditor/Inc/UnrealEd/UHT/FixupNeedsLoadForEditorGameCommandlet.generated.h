// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/FixupNeedsLoadForEditorGameCommandlet.h"

#ifdef UNREALED_FixupNeedsLoadForEditorGameCommandlet_generated_h
#error "FixupNeedsLoadForEditorGameCommandlet.generated.h already included, missing '#pragma once' in FixupNeedsLoadForEditorGameCommandlet.h"
#endif
#define UNREALED_FixupNeedsLoadForEditorGameCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFixupNeedsLoadForEditorGameCommandlet ***********************************
struct Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFixupNeedsLoadForEditorGameCommandlet(); \
	friend struct ::Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UFixupNeedsLoadForEditorGameCommandlet, UResavePackagesCommandlet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UFixupNeedsLoadForEditorGameCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFixupNeedsLoadForEditorGameCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFixupNeedsLoadForEditorGameCommandlet(UFixupNeedsLoadForEditorGameCommandlet&&) = delete; \
	UFixupNeedsLoadForEditorGameCommandlet(const UFixupNeedsLoadForEditorGameCommandlet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFixupNeedsLoadForEditorGameCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFixupNeedsLoadForEditorGameCommandlet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFixupNeedsLoadForEditorGameCommandlet) \
	NO_API virtual ~UFixupNeedsLoadForEditorGameCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h_10_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFixupNeedsLoadForEditorGameCommandlet;

// ********** End Class UFixupNeedsLoadForEditorGameCommandlet *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
