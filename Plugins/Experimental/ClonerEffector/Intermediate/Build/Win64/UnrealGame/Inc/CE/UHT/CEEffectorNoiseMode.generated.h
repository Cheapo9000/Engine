// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Modes/CEEffectorNoiseMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEEffectorNoiseMode_generated_h
#error "CEEffectorNoiseMode.generated.h already included, missing '#pragma once' in CEEffectorNoiseMode.h"
#endif
#define CLONEREFFECTOR_CEEffectorNoiseMode_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorNoiseMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFrequency); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execGetPan); \
	DECLARE_FUNCTION(execSetPan); \
	DECLARE_FUNCTION(execGetScaleStrength); \
	DECLARE_FUNCTION(execSetScaleStrength); \
	DECLARE_FUNCTION(execGetRotationStrength); \
	DECLARE_FUNCTION(execSetRotationStrength); \
	DECLARE_FUNCTION(execGetLocationStrength); \
	DECLARE_FUNCTION(execSetLocationStrength);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorNoiseMode_h_15_ACCESSORS \
static void GetLocationStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetLocationStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetRotationStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetRotationStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetScaleStrength_WrapperImpl(const void* Object, void* OutValue); \
static void SetScaleStrength_WrapperImpl(void* Object, const void* InValue); \
static void GetPan_WrapperImpl(const void* Object, void* OutValue); \
static void SetPan_WrapperImpl(void* Object, const void* InValue); \
static void GetFrequency_WrapperImpl(const void* Object, void* OutValue); \
static void SetFrequency_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorNoiseMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorNoiseMode(); \
	friend struct Z_Construct_UClass_UCEEffectorNoiseMode_Statics; \
public: \
	DECLARE_CLASS(UCEEffectorNoiseMode, UCEEffectorModeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEEffectorNoiseMode)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorNoiseMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEEffectorNoiseMode(UCEEffectorNoiseMode&&); \
	UCEEffectorNoiseMode(const UCEEffectorNoiseMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorNoiseMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorNoiseMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorNoiseMode) \
	CLONEREFFECTOR_API virtual ~UCEEffectorNoiseMode();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorNoiseMode_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorNoiseMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorNoiseMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorNoiseMode_h_15_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorNoiseMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorNoiseMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEEffectorNoiseMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Effector_Modes_CEEffectorNoiseMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
