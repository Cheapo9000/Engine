// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Effector/Effects/CEEffectorDelayEffect.h"

#ifdef CLONEREFFECTOR_CEEffectorDelayEffect_generated_h
#error "CEEffectorDelayEffect.generated.h already included, missing '#pragma once' in CEEffectorDelayEffect.h"
#endif
#define CLONEREFFECTOR_CEEffectorDelayEffect_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEEffectorDelayEffect ***************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Effects_CEEffectorDelayEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDelaySpringFalloff); \
	DECLARE_FUNCTION(execSetDelaySpringFalloff); \
	DECLARE_FUNCTION(execGetDelaySpringFrequency); \
	DECLARE_FUNCTION(execSetDelaySpringFrequency); \
	DECLARE_FUNCTION(execGetDelayOutDuration); \
	DECLARE_FUNCTION(execSetDelayOutDuration); \
	DECLARE_FUNCTION(execGetDelayInDuration); \
	DECLARE_FUNCTION(execSetDelayInDuration); \
	DECLARE_FUNCTION(execGetDelayEnabled); \
	DECLARE_FUNCTION(execSetDelayEnabled);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Effects_CEEffectorDelayEffect_h_15_ACCESSORS \
static void GetbDelayEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbDelayEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetDelayInDuration_WrapperImpl(const void* Object, void* OutValue); \
static void SetDelayInDuration_WrapperImpl(void* Object, const void* InValue); \
static void GetDelayOutDuration_WrapperImpl(const void* Object, void* OutValue); \
static void SetDelayOutDuration_WrapperImpl(void* Object, const void* InValue); \
static void GetDelaySpringFrequency_WrapperImpl(const void* Object, void* OutValue); \
static void SetDelaySpringFrequency_WrapperImpl(void* Object, const void* InValue); \
static void GetDelaySpringFalloff_WrapperImpl(const void* Object, void* OutValue); \
static void SetDelaySpringFalloff_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEEffectorDelayEffect_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEEffectorDelayEffect_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Effects_CEEffectorDelayEffect_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEEffectorDelayEffect(); \
	friend struct ::Z_Construct_UClass_UCEEffectorDelayEffect_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEEffectorDelayEffect_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEEffectorDelayEffect, UCEEffectorEffectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEEffectorDelayEffect_NoRegister) \
	DECLARE_SERIALIZER(UCEEffectorDelayEffect)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Effects_CEEffectorDelayEffect_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEEffectorDelayEffect(UCEEffectorDelayEffect&&) = delete; \
	UCEEffectorDelayEffect(const UCEEffectorDelayEffect&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEEffectorDelayEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEEffectorDelayEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEEffectorDelayEffect) \
	CLONEREFFECTOR_API virtual ~UCEEffectorDelayEffect();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Effects_CEEffectorDelayEffect_h_12_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Effects_CEEffectorDelayEffect_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Effects_CEEffectorDelayEffect_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Effects_CEEffectorDelayEffect_h_15_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Effects_CEEffectorDelayEffect_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Effects_CEEffectorDelayEffect_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEEffectorDelayEffect;

// ********** End Class UCEEffectorDelayEffect *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Effector_Effects_CEEffectorDelayEffect_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
