// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layers/CompositeLayerBase.h"

#ifdef COMPOSITE_CompositeLayerBase_generated_h
#error "CompositeLayerBase.generated.h already included, missing '#pragma once' in CompositeLayerBase.h"
#endif
#define COMPOSITE_CompositeLayerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCompositeLayerBase ******************************************************
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execIsEnabled);


struct Z_Construct_UClass_UCompositeLayerBase_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositeLayerBase_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeLayerBase(); \
	friend struct ::Z_Construct_UClass_UCompositeLayerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositeLayerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeLayerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositeLayerBase_NoRegister) \
	DECLARE_SERIALIZER(UCompositeLayerBase)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerBase_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeLayerBase(UCompositeLayerBase&&) = delete; \
	UCompositeLayerBase(const UCompositeLayerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositeLayerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeLayerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeLayerBase)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerBase_h_20_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerBase_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeLayerBase;

// ********** End Class UCompositeLayerBase ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
