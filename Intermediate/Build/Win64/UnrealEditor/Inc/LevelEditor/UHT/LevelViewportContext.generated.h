// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportToolbar/LevelViewportContext.h"

#ifdef LEVELEDITOR_LevelViewportContext_generated_h
#error "LevelViewportContext.generated.h already included, missing '#pragma once' in LevelViewportContext.h"
#endif
#define LEVELEDITOR_LevelViewportContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULegacyLevelViewportToolbarContext ***************************************
struct Z_Construct_UClass_ULegacyLevelViewportToolbarContext_Statics;
LEVELEDITOR_API UClass* Z_Construct_UClass_ULegacyLevelViewportToolbarContext_NoRegister();

#define FID_Engine_Source_Editor_LevelEditor_Private_ViewportToolbar_LevelViewportContext_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULegacyLevelViewportToolbarContext(); \
	friend struct ::Z_Construct_UClass_ULegacyLevelViewportToolbarContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LEVELEDITOR_API UClass* ::Z_Construct_UClass_ULegacyLevelViewportToolbarContext_NoRegister(); \
public: \
	DECLARE_CLASS2(ULegacyLevelViewportToolbarContext, ULevelViewportToolBarContext, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelEditor"), Z_Construct_UClass_ULegacyLevelViewportToolbarContext_NoRegister) \
	DECLARE_SERIALIZER(ULegacyLevelViewportToolbarContext)


#define FID_Engine_Source_Editor_LevelEditor_Private_ViewportToolbar_LevelViewportContext_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEVELEDITOR_API ULegacyLevelViewportToolbarContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULegacyLevelViewportToolbarContext(ULegacyLevelViewportToolbarContext&&) = delete; \
	ULegacyLevelViewportToolbarContext(const ULegacyLevelViewportToolbarContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEVELEDITOR_API, ULegacyLevelViewportToolbarContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULegacyLevelViewportToolbarContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULegacyLevelViewportToolbarContext) \
	LEVELEDITOR_API virtual ~ULegacyLevelViewportToolbarContext();


#define FID_Engine_Source_Editor_LevelEditor_Private_ViewportToolbar_LevelViewportContext_h_17_PROLOG
#define FID_Engine_Source_Editor_LevelEditor_Private_ViewportToolbar_LevelViewportContext_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_LevelEditor_Private_ViewportToolbar_LevelViewportContext_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_LevelEditor_Private_ViewportToolbar_LevelViewportContext_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULegacyLevelViewportToolbarContext;

// ********** End Class ULegacyLevelViewportToolbarContext *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_LevelEditor_Private_ViewportToolbar_LevelViewportContext_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
