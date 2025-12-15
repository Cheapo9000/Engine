// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Commandlets/ImportDialogueScriptCommandlet.h"

#ifdef UNREALED_ImportDialogueScriptCommandlet_generated_h
#error "ImportDialogueScriptCommandlet.generated.h already included, missing '#pragma once' in ImportDialogueScriptCommandlet.h"
#endif
#define UNREALED_ImportDialogueScriptCommandlet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UImportDialogueScriptCommandlet ******************************************
struct Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics;
UNREALED_API UClass* Z_Construct_UClass_UImportDialogueScriptCommandlet_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUImportDialogueScriptCommandlet(); \
	friend struct ::Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UImportDialogueScriptCommandlet_NoRegister(); \
public: \
	DECLARE_CLASS2(UImportDialogueScriptCommandlet, UGatherTextCommandletBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UImportDialogueScriptCommandlet_NoRegister) \
	DECLARE_SERIALIZER(UImportDialogueScriptCommandlet)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UImportDialogueScriptCommandlet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UImportDialogueScriptCommandlet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UImportDialogueScriptCommandlet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UImportDialogueScriptCommandlet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UImportDialogueScriptCommandlet(UImportDialogueScriptCommandlet&&) = delete; \
	UImportDialogueScriptCommandlet(const UImportDialogueScriptCommandlet&) = delete; \
	NO_API virtual ~UImportDialogueScriptCommandlet();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h_13_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h_16_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UImportDialogueScriptCommandlet;

// ********** End Class UImportDialogueScriptCommandlet ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
