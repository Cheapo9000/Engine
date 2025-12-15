// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeBlueprintBrush.h"

#ifdef LANDSCAPEEDITORUTILITIES_LandscapeBlueprintBrush_generated_h
#error "LandscapeBlueprintBrush.generated.h already included, missing '#pragma once' in LandscapeBlueprintBrush.h"
#endif
#define LANDSCAPEEDITORUTILITIES_LandscapeBlueprintBrush_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALandscapeBlueprintBrush *************************************************
struct Z_Construct_UClass_ALandscapeBlueprintBrush_Statics;
LANDSCAPEEDITORUTILITIES_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrush_NoRegister();

#define FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeBlueprintBrush(); \
	friend struct ::Z_Construct_UClass_ALandscapeBlueprintBrush_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPEEDITORUTILITIES_API UClass* ::Z_Construct_UClass_ALandscapeBlueprintBrush_NoRegister(); \
public: \
	DECLARE_CLASS2(ALandscapeBlueprintBrush, ALandscapeBlueprintBrushBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapeEditorUtilities"), Z_Construct_UClass_ALandscapeBlueprintBrush_NoRegister) \
	DECLARE_SERIALIZER(ALandscapeBlueprintBrush)


#define FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPEEDITORUTILITIES_API ALandscapeBlueprintBrush(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeBlueprintBrush) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPEEDITORUTILITIES_API, ALandscapeBlueprintBrush); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeBlueprintBrush); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALandscapeBlueprintBrush(ALandscapeBlueprintBrush&&) = delete; \
	ALandscapeBlueprintBrush(const ALandscapeBlueprintBrush&) = delete; \
	LANDSCAPEEDITORUTILITIES_API virtual ~ALandscapeBlueprintBrush();


#define FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_12_PROLOG
#define FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_15_INCLASS \
	FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALandscapeBlueprintBrush;

// ********** End Class ALandscapeBlueprintBrush ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
