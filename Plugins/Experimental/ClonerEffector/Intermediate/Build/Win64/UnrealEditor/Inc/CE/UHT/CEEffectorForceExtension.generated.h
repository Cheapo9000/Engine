// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Extensions/CEEffectorForceExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEEffectorForceExtension_generated_h
#error "CEEffectorForceExtension.generated.h already included, missing '#pragma once' in CEEffectorForceExtension.h"
#endif
#define CLONEREFFECTOR_CEEffectorForceExtension_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Extensions_CEEffectorForceExtension_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVectorNoiseForceAmount); \
	DECLARE_FUNCTION(execSetVectorNoiseForceAmount); \
	DECLARE_FUNCTION(execGetVectorNoiseForceEnabled); \
	DECLARE_FUNCTION(execSetVectorNoiseForceEnabled); \
	DECLARE_FUNCTION(execGetDragForceRotational); \
	DECLARE_FUNCTION(execSetDragForceRotational); \
	DECLARE_FUNCTION(execGetDragForceLinear); \
	DECLARE_FUNCTION(execSetDragForceLinear); \
	DECLARE_FUNCTION(execGetDragForceEnabled); \
	DECLARE_FUNCTION(execSetDragForceEnabled); \
	DECLARE_FUNCTION(execGetGravityForceAcceleration); \
	DECLARE_FUNCTION(execSetGravityForceAcceleration); \
	DECLARE_FUNCTION(execGetGravityForceEnabled); \
	DECLARE_FUNCTION(execSetGravityForceEnabled); \
	DECLARE_FUNCTION(execGetAttractionForceFalloff); \
	DECLARE_FUNCTION(execSetAttractionForceFalloff); \
	DECLARE_FUNCTION(execGetAttractionForceStrength); \
	DECLARE_FUNCTION(execSetAttractionForceStrength); \
	DECLARE_FUNCTION(execGetAttractionForceEnabled); \
	DECLARE_FUNCTION(execSetAttractionForceEnabled); \
	DECLARE_FUNCTION(execGetCurlNoiseForceFrequency); \
	DECLARE_FUNCTION(execSetCurlNoiseForceFrequency); \
	DECLARE_FUNCTION(execGetCurlNoiseForceStrength); \
	DECLARE_FUNCTION(execSetCurlNoiseForceStrength); \
	DECLARE_FUNCTION(execGetCurlNoiseForceEnabled); \
	DECLARE_FUNCTION(execSetCurlNoiseForceEnabled); \
	DECLARE_FUNCTION(execGetVortexForceAxis); \
	DECLARE_FUNCTION(execSetVortexForceAxis); \
	DECLARE_FUNCTION(execGetVortexForceAmount); \
	DECLARE_FUNCTION(execSetVortexForceAmount); \
	DECLARE_FUNCTION(execGetVortexForceEnabled); \
	DECLARE_FUNCTION(execSetVortexForceEnabled); \
	DECLARE_FUNCTION(execGetOrientationForceMax); \
	DECLARE_FUNCTION(execSetOrientationForceMax); \
	DECLARE_FUNCTION(execGetOrientationForceMin); \
	DECLARE_FUNCTION(execSetOrientationForceMin); \
	DECLARE_FUNCTION(execGetOrientationForceRate); \
	DECLARE_FUNCTION(execSetOrientationForceRate); \
	DECLARE_FUNCTION(execGetOrientationForceEnabled); \
	DECLARE_FUNCTION(execSetOrientationForceEnabled); \
	DECLARE_FUNCTION(execGetForcesEnabled); \
	DECLARE_FUNCTION(execSetForcesEnabled);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Extensions_CEEffectorForceExtension_h_15_ACCESSORS \
static void GetbForcesEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbForcesEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetbOrientationForceEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbOrientationForceEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetOrientationForceRate_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientationForceRate_WrapperImpl(void* Object, const void* InValue); \
static void GetOrientationForceMin_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientationForceMin_WrapperImpl(void* Object, const void* InValue); \
static void GetOrientationForceMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetOrientationForceMax_WrapperImpl(void* Object, const void* InValue); \
static void GetbVortexForceEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbVortexForceEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetVortexForceAmount_WrapperImpl(const void* Object, void* OutValue); \
static void SetVortexForceAmount_WrapperImpl(void* Object, const void* InValue); \
static void GetVortexForceAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetVortexForceAxis_WrapperImpl(void* Object, const void* InValue); \
static void GetbCurlNoiseForceEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCurlNoiseForceEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetCurlNoiseForceStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetCurlNoiseForceStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetCurlNoiseForceFrequency_WrapperImpl(const void* Object, void* OutValue); \
static void SetCurlNoiseForceFrequency_WrapperImpl(void* Object, const void* InValue); \
static void GetbAttractionForceEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAttractionForceEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetAttractionForceStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetAttractionForceStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetAttractionForceFalloff_WrapperImpl(const void* Object, void* OutValue); \
static void SetAttractionForceFalloff_WrapperImpl(void* Object, const void* InValue); \
static void GetbGravityForceEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbGravityForceEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetGravityForceAcceleration_WrapperImpl(const void* Object, void* OutValue); \
static void SetGravityForceAcceleration_WrapperImpl(void* Object, const void* InValue); \
static void GetbDragForceEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbDragForceEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetDragForceLinear_WrapperImpl(const void* Object, void* OutValue); \
static void SetDragForceLinear_WrapperImpl(void* Object, const void* InValue); \
static void GetDragForceRotational_WrapperImpl(const void* Object, void* OutValue); \
static void SetDragForceRotational_WrapperImpl(void* Object, const void* InValue); \
static void GetbVectorNoiseForceEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbVectorNoiseForceEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetVectorNoiseForceAmount_WrapperImpl(const void* Object, void* OutValue); \
static void SetVectorNoiseForceAmount_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Extensions_CEEffectorForceExtension_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorForceExtension(); \
	friend struct Z_Construct_UClass_UCEEffectorForceExtension_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorForceExtension, UCEEffectorExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorForceExtension)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Extensions_CEEffectorForceExtension_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorForceExtension(UCEEffectorForceExtension&&); \
	UCEEffectorForceExtension(const UCEEffectorForceExtension&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorForceExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorForceExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorForceExtension) \
	CLONEREFFECTOR_API virtual ~UCEEffectorForceExtension();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Extensions_CEEffectorForceExtension_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Extensions_CEEffectorForceExtension_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Extensions_CEEffectorForceExtension_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Extensions_CEEffectorForceExtension_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Extensions_CEEffectorForceExtension_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Extensions_CEEffectorForceExtension_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorForceExtension>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Extensions_CEEffectorForceExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
