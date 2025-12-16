// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layers/CompositeLayerSingleLightShadow.h"

#ifdef COMPOSITE_CompositeLayerSingleLightShadow_generated_h
#error "CompositeLayerSingleLightShadow.generated.h already included, missing '#pragma once' in CompositeLayerSingleLightShadow.h"
#endif
#define COMPOSITE_CompositeLayerSingleLightShadow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UCompositeLayerSingleLightShadow *****************************************
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSingleLightShadow_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetShadowCastingActors); \
	DECLARE_FUNCTION(execGetShadowCastingActors);


struct Z_Construct_UClass_UCompositeLayerSingleLightShadow_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositeLayerSingleLightShadow_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSingleLightShadow_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeLayerSingleLightShadow(); \
	friend struct ::Z_Construct_UClass_UCompositeLayerSingleLightShadow_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositeLayerSingleLightShadow_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeLayerSingleLightShadow, UCompositeLayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositeLayerSingleLightShadow_NoRegister) \
	DECLARE_SERIALIZER(UCompositeLayerSingleLightShadow)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSingleLightShadow_h_31_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeLayerSingleLightShadow(UCompositeLayerSingleLightShadow&&) = delete; \
	UCompositeLayerSingleLightShadow(const UCompositeLayerSingleLightShadow&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositeLayerSingleLightShadow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeLayerSingleLightShadow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeLayerSingleLightShadow)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSingleLightShadow_h_28_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSingleLightShadow_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSingleLightShadow_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSingleLightShadow_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSingleLightShadow_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeLayerSingleLightShadow;

// ********** End Class UCompositeLayerSingleLightShadow *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerSingleLightShadow_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
