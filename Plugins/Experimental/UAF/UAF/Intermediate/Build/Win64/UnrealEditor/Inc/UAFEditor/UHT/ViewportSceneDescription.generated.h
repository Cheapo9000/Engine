// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UAF/Viewport/ViewportSceneDescription.h"

#ifdef UAFEDITOR_ViewportSceneDescription_generated_h
#error "ViewportSceneDescription.generated.h already included, missing '#pragma once' in ViewportSceneDescription.h"
#endif
#define UAFEDITOR_ViewportSceneDescription_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUAFViewportSceneDescription *********************************************
struct Z_Construct_UClass_UUAFViewportSceneDescription_Statics;
UAFEDITOR_API UClass* Z_Construct_UClass_UUAFViewportSceneDescription_NoRegister();

#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Public_UAF_Viewport_ViewportSceneDescription_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUAFViewportSceneDescription(); \
	friend struct ::Z_Construct_UClass_UUAFViewportSceneDescription_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UAFEDITOR_API UClass* ::Z_Construct_UClass_UUAFViewportSceneDescription_NoRegister(); \
public: \
	DECLARE_CLASS2(UUAFViewportSceneDescription, UWorkspaceViewportSceneDescription, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UAFEditor"), Z_Construct_UClass_UUAFViewportSceneDescription_NoRegister) \
	DECLARE_SERIALIZER(UUAFViewportSceneDescription)


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Public_UAF_Viewport_ViewportSceneDescription_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUAFViewportSceneDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUAFViewportSceneDescription(UUAFViewportSceneDescription&&) = delete; \
	UUAFViewportSceneDescription(const UUAFViewportSceneDescription&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUAFViewportSceneDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUAFViewportSceneDescription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUAFViewportSceneDescription) \
	NO_API virtual ~UUAFViewportSceneDescription();


#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Public_UAF_Viewport_ViewportSceneDescription_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Public_UAF_Viewport_ViewportSceneDescription_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Public_UAF_Viewport_ViewportSceneDescription_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Public_UAF_Viewport_ViewportSceneDescription_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUAFViewportSceneDescription;

// ********** End Class UUAFViewportSceneDescription ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_UAF_UAF_Source_UAFEditor_Public_UAF_Viewport_ViewportSceneDescription_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
