// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layers/CompositeLayerSceneCapture.h"

#ifdef COMPOSITE_CompositeLayerSceneCapture_generated_h
#error "CompositeLayerSceneCapture.generated.h already included, missing '#pragma once' in CompositeLayerSceneCapture.h"
#endif
#define COMPOSITE_CompositeLayerSceneCapture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UCompositeLayerSceneCapture **********************************************
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSceneCapture_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetVisibleInSceneCaptureOnly); \
	DECLARE_FUNCTION(execIsVisibleInSceneCaptureOnly); \
	DECLARE_FUNCTION(execSetCustomRenderPass); \
	DECLARE_FUNCTION(execIsCustomRenderPass); \
	DECLARE_FUNCTION(execSetActors); \
	DECLARE_FUNCTION(execGetActors);


struct Z_Construct_UClass_UCompositeLayerSceneCapture_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositeLayerSceneCapture_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSceneCapture_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeLayerSceneCapture(); \
	friend struct ::Z_Construct_UClass_UCompositeLayerSceneCapture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositeLayerSceneCapture_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeLayerSceneCapture, UCompositeLayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositeLayerSceneCapture_NoRegister) \
	DECLARE_SERIALIZER(UCompositeLayerSceneCapture)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSceneCapture_h_20_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeLayerSceneCapture(UCompositeLayerSceneCapture&&) = delete; \
	UCompositeLayerSceneCapture(const UCompositeLayerSceneCapture&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositeLayerSceneCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeLayerSceneCapture); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeLayerSceneCapture)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSceneCapture_h_17_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSceneCapture_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSceneCapture_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSceneCapture_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSceneCapture_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeLayerSceneCapture;

// ********** End Class UCompositeLayerSceneCapture ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSceneCapture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
