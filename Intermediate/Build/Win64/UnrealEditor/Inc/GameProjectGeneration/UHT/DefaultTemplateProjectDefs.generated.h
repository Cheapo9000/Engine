// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultTemplateProjectDefs.h"

#ifdef GAMEPROJECTGENERATION_DefaultTemplateProjectDefs_generated_h
#error "DefaultTemplateProjectDefs.generated.h already included, missing '#pragma once' in DefaultTemplateProjectDefs.h"
#endif
#define GAMEPROJECTGENERATION_DefaultTemplateProjectDefs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDefaultTemplateProjectDefs **********************************************
struct Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics;
GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UDefaultTemplateProjectDefs_NoRegister();

#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUDefaultTemplateProjectDefs(); \
	friend struct ::Z_Construct_UClass_UDefaultTemplateProjectDefs_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPROJECTGENERATION_API UClass* ::Z_Construct_UClass_UDefaultTemplateProjectDefs_NoRegister(); \
public: \
	DECLARE_CLASS2(UDefaultTemplateProjectDefs, UTemplateProjectDefs, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameProjectGeneration"), Z_Construct_UClass_UDefaultTemplateProjectDefs_NoRegister) \
	DECLARE_SERIALIZER(UDefaultTemplateProjectDefs)


#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPROJECTGENERATION_API UDefaultTemplateProjectDefs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultTemplateProjectDefs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPROJECTGENERATION_API, UDefaultTemplateProjectDefs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultTemplateProjectDefs); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDefaultTemplateProjectDefs(UDefaultTemplateProjectDefs&&) = delete; \
	UDefaultTemplateProjectDefs(const UDefaultTemplateProjectDefs&) = delete; \
	GAMEPROJECTGENERATION_API virtual ~UDefaultTemplateProjectDefs();


#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h_18_PROLOG
#define FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h_21_INCLASS \
	FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDefaultTemplateProjectDefs;

// ********** End Class UDefaultTemplateProjectDefs ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_GameProjectGeneration_Classes_DefaultTemplateProjectDefs_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
