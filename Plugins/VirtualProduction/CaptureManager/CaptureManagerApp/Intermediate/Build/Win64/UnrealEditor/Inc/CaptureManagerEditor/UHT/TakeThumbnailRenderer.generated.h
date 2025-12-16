// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/TakeThumbnailRenderer.h"

#ifdef CAPTUREMANAGEREDITOR_TakeThumbnailRenderer_generated_h
#error "TakeThumbnailRenderer.generated.h already included, missing '#pragma once' in TakeThumbnailRenderer.h"
#endif
#define CAPTUREMANAGEREDITOR_TakeThumbnailRenderer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTakeThumbnailRenderer ***************************************************
struct Z_Construct_UClass_UTakeThumbnailRenderer_Statics;
CAPTUREMANAGEREDITOR_API UClass* Z_Construct_UClass_UTakeThumbnailRenderer_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_UI_TakeThumbnailRenderer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTakeThumbnailRenderer(); \
	friend struct ::Z_Construct_UClass_UTakeThumbnailRenderer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CAPTUREMANAGEREDITOR_API UClass* ::Z_Construct_UClass_UTakeThumbnailRenderer_NoRegister(); \
public: \
	DECLARE_CLASS2(UTakeThumbnailRenderer, UDefaultSizedThumbnailRenderer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CaptureManagerEditor"), Z_Construct_UClass_UTakeThumbnailRenderer_NoRegister) \
	DECLARE_SERIALIZER(UTakeThumbnailRenderer)


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_UI_TakeThumbnailRenderer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CAPTUREMANAGEREDITOR_API UTakeThumbnailRenderer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTakeThumbnailRenderer(UTakeThumbnailRenderer&&) = delete; \
	UTakeThumbnailRenderer(const UTakeThumbnailRenderer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CAPTUREMANAGEREDITOR_API, UTakeThumbnailRenderer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTakeThumbnailRenderer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTakeThumbnailRenderer) \
	CAPTUREMANAGEREDITOR_API virtual ~UTakeThumbnailRenderer();


#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_UI_TakeThumbnailRenderer_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_UI_TakeThumbnailRenderer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_UI_TakeThumbnailRenderer_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_UI_TakeThumbnailRenderer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTakeThumbnailRenderer;

// ********** End Class UTakeThumbnailRenderer *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_CaptureManager_CaptureManagerApp_Source_CaptureManagerEditor_Private_UI_TakeThumbnailRenderer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
