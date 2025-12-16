// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Layers/CompositeLayerShadowReflection.h"

#ifdef COMPOSITE_CompositeLayerShadowReflection_generated_h
#error "CompositeLayerShadowReflection.generated.h already included, missing '#pragma once' in CompositeLayerShadowReflection.h"
#endif
#define COMPOSITE_CompositeLayerShadowReflection_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin ScriptStruct FCompositeShadowReflectionPrimitiveState **************************
struct Z_Construct_UScriptStruct_FCompositeShadowReflectionPrimitiveState_Statics;
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerShadowReflection_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCompositeShadowReflectionPrimitiveState_Statics; \
	COMPOSITE_API static class UScriptStruct* StaticStruct();


struct FCompositeShadowReflectionPrimitiveState;
// ********** End ScriptStruct FCompositeShadowReflectionPrimitiveState ****************************

// ********** Begin Class UCompositeLayerShadowReflection ******************************************
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerShadowReflection_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetActors); \
	DECLARE_FUNCTION(execGetActors);


struct Z_Construct_UClass_UCompositeLayerShadowReflection_Statics;
COMPOSITE_API UClass* Z_Construct_UClass_UCompositeLayerShadowReflection_NoRegister();

#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerShadowReflection_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCompositeLayerShadowReflection(); \
	friend struct ::Z_Construct_UClass_UCompositeLayerShadowReflection_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMPOSITE_API UClass* ::Z_Construct_UClass_UCompositeLayerShadowReflection_NoRegister(); \
public: \
	DECLARE_CLASS2(UCompositeLayerShadowReflection, UCompositeLayerBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Composite"), Z_Construct_UClass_UCompositeLayerShadowReflection_NoRegister) \
	DECLARE_SERIALIZER(UCompositeLayerShadowReflection)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerShadowReflection_h_55_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCompositeLayerShadowReflection(UCompositeLayerShadowReflection&&) = delete; \
	UCompositeLayerShadowReflection(const UCompositeLayerShadowReflection&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPOSITE_API, UCompositeLayerShadowReflection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCompositeLayerShadowReflection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCompositeLayerShadowReflection)


#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerShadowReflection_h_52_PROLOG
#define FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerShadowReflection_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerShadowReflection_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerShadowReflection_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerShadowReflection_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCompositeLayerShadowReflection;

// ********** End Class UCompositeLayerShadowReflection ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Compositing_Composite_Source_Composite_Public_Layers_CompositeLayerShadowReflection_h

// ********** Begin Enum ECompositeHiddenInSceneCaptureConfiguration *******************************
#define FOREACH_ENUM_ECOMPOSITEHIDDENINSCENECAPTURECONFIGURATION(op) \
	op(ECompositeHiddenInSceneCaptureConfiguration::None) \
	op(ECompositeHiddenInSceneCaptureConfiguration::Visible) \
	op(ECompositeHiddenInSceneCaptureConfiguration::Hidden) 

enum class ECompositeHiddenInSceneCaptureConfiguration : uint8;
template<> struct TIsUEnumClass<ECompositeHiddenInSceneCaptureConfiguration> { enum { Value = true }; };
template<> COMPOSITE_NON_ATTRIBUTED_API UEnum* StaticEnum<ECompositeHiddenInSceneCaptureConfiguration>();
// ********** End Enum ECompositeHiddenInSceneCaptureConfiguration *********************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
