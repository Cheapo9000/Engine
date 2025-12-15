// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeSplineSelection.h"

#ifdef LANDSCAPEEDITOR_LandscapeSplineSelection_generated_h
#error "LandscapeSplineSelection.generated.h already included, missing '#pragma once' in LandscapeSplineSelection.h"
#endif
#define LANDSCAPEEDITOR_LandscapeSplineSelection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULandscapeSplineSelection ************************************************
struct Z_Construct_UClass_ULandscapeSplineSelection_Statics;
LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_ULandscapeSplineSelection_NoRegister();

#define FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeSplineSelection_h_37_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeSplineSelection(); \
	friend struct ::Z_Construct_UClass_ULandscapeSplineSelection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPEEDITOR_API UClass* ::Z_Construct_UClass_ULandscapeSplineSelection_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeSplineSelection, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LandscapeEditor"), Z_Construct_UClass_ULandscapeSplineSelection_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeSplineSelection)


#define FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeSplineSelection_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPEEDITOR_API ULandscapeSplineSelection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSplineSelection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPEEDITOR_API, ULandscapeSplineSelection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSplineSelection); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeSplineSelection(ULandscapeSplineSelection&&) = delete; \
	ULandscapeSplineSelection(const ULandscapeSplineSelection&) = delete; \
	LANDSCAPEEDITOR_API virtual ~ULandscapeSplineSelection();


#define FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeSplineSelection_h_34_PROLOG
#define FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeSplineSelection_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeSplineSelection_h_37_INCLASS \
	FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeSplineSelection_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeSplineSelection;

// ********** End Class ULandscapeSplineSelection **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LandscapeEditor_Private_LandscapeSplineSelection_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
