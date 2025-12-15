// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ImportLocalizedDialogueCommandlet.h"

#ifdef UNREALED_ImportLocalizedDialogueCommandlet_generated_h
#error "ImportLocalizedDialogueCommandlet.generated.h already included, missing '#pragma once' in ImportLocalizedDialogueCommandlet.h"
#endif
#define UNREALED_ImportLocalizedDialogueCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UImportLocalizedDialogueCommandlet ***************************************
struct Z_Construct_UClass_UImportLocalizedDialogueCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UImportLocalizedDialogueCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUImportLocalizedDialogueCommandlet(); \
	friend struct ::Z_Construct_UClass_UImportLocalizedDialogueCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UImportLocalizedDialogueCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UImportLocalizedDialogueCommandlet, UGatherTextCommandletBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UImportLocalizedDialogueCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UImportLocalizedDialogueCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImportLocalizedDialogueCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportLocalizedDialogueCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportLocalizedDialogueCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportLocalizedDialogueCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImportLocalizedDialogueCommandlet(UImportLocalizedDialogueCommandlet&&) = delete; \
	UImportLocalizedDialogueCommandlet(const UImportLocalizedDialogueCommandlet&) = delete; \
	NO_API virtual ~UImportLocalizedDialogueCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h_17_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h_20_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImportLocalizedDialogueCommandlet;

// ********** End Class UImportLocalizedDialogueCommandlet *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
