// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportTransformer.h"

#ifdef VIEWPORTINTERACTION_ViewportTransformer_generated_h
#error "ViewportTransformer.generated.h already included, missing '#pragma once' in ViewportTransformer.h"
#endif
#define VIEWPORTINTERACTION_ViewportTransformer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UViewportInteractor;
class UViewportWorldInteraction;

// ********** Begin Class UViewportTransformer *****************************************************
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnStopDragging); \
	DECLARE_FUNCTION(execOnStartDragging); \
	DECLARE_FUNCTION(execShouldCenterTransformGizmoPivot); \
	DECLARE_FUNCTION(execCanAlignToActors); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execInit);


struct Z_Construct_UClass_UViewportTransformer_Statics;
VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportTransformer_NoRegister();

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportTransformer(); \
	friend struct ::Z_Construct_UClass_UViewportTransformer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend VIEWPORTINTERACTION_API UClass* ::Z_Construct_UClass_UViewportTransformer_NoRegister(); \
public: \
	DECLARE_CLASS2(UViewportTransformer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), Z_Construct_UClass_UViewportTransformer_NoRegister) \
	DECLARE_SERIALIZER(UViewportTransformer)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VIEWPORTINTERACTION_API UViewportTransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UViewportTransformer(UViewportTransformer&&) = delete; \
	UViewportTransformer(const UViewportTransformer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VIEWPORTINTERACTION_API, UViewportTransformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportTransformer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportTransformer) \
	VIEWPORTINTERACTION_API virtual ~UViewportTransformer();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_17_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UViewportTransformer;

// ********** End Class UViewportTransformer *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
