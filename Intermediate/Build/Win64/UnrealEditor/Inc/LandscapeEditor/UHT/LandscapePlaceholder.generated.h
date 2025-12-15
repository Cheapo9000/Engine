// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Classes/LandscapePlaceholder.h"

#ifdef LANDSCAPEEDITOR_LandscapePlaceholder_generated_h
#error "LandscapePlaceholder.generated.h already included, missing '#pragma once' in LandscapePlaceholder.h"
#endif
#define LANDSCAPEEDITOR_LandscapePlaceholder_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALandscapePlaceholder ****************************************************
struct Z_Construct_UClass_ALandscapePlaceholder_Statics;
LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_ALandscapePlaceholder_NoRegister();

#define FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h_13_INCLASS \
private: \
	static void StaticRegisterNativesALandscapePlaceholder(); \
	friend struct ::Z_Construct_UClass_ALandscapePlaceholder_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPEEDITOR_API UClass* ::Z_Construct_UClass_ALandscapePlaceholder_NoRegister(); \
public: \
	DECLARE_CLASS2(ALandscapePlaceholder, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapeEditor"), Z_Construct_UClass_ALandscapePlaceholder_NoRegister) \
	DECLARE_SERIALIZER(ALandscapePlaceholder)


#define FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALandscapePlaceholder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapePlaceholder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALandscapePlaceholder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapePlaceholder); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALandscapePlaceholder(ALandscapePlaceholder&&) = delete; \
	ALandscapePlaceholder(const ALandscapePlaceholder&) = delete; \
	NO_API virtual ~ALandscapePlaceholder();


#define FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h_10_PROLOG
#define FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h_13_INCLASS \
	FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALandscapePlaceholder;

// ********** End Class ALandscapePlaceholder ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
