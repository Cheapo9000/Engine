// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerEmitterSpawnExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerSpawnBehaviorMode : uint8;
enum class ECEClonerSpawnLoopMode : uint8;
#ifdef CLONEREFFECTOR_CEClonerEmitterSpawnExtension_generated_h
#error "CEClonerEmitterSpawnExtension.generated.h already included, missing '#pragma once' in CEClonerEmitterSpawnExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerEmitterSpawnExtension_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSpawnRate); \
	DECLARE_FUNCTION(execSetSpawnRate); \
	DECLARE_FUNCTION(execGetSpawnBehaviorMode); \
	DECLARE_FUNCTION(execSetSpawnBehaviorMode); \
	DECLARE_FUNCTION(execGetSpawnLoopInterval); \
	DECLARE_FUNCTION(execSetSpawnLoopInterval); \
	DECLARE_FUNCTION(execGetSpawnLoopIterations); \
	DECLARE_FUNCTION(execSetSpawnLoopIterations); \
	DECLARE_FUNCTION(execGetSpawnLoopMode); \
	DECLARE_FUNCTION(execSetSpawnLoopMode);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_ACCESSORS \
static void GetSpawnLoopMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnLoopMode_WrapperImpl(void* Object, const void* InValue); \
static void GetSpawnLoopIterations_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnLoopIterations_WrapperImpl(void* Object, const void* InValue); \
static void GetSpawnLoopInterval_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnLoopInterval_WrapperImpl(void* Object, const void* InValue); \
static void GetSpawnBehaviorMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnBehaviorMode_WrapperImpl(void* Object, const void* InValue); \
static void GetSpawnRate_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnRate_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerEmitterSpawnExtension(); \
	friend struct Z_Construct_UClass_UCEClonerEmitterSpawnExtension_Statics; \
public: \
	DECLARE_CLASS(UCEClonerEmitterSpawnExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerEmitterSpawnExtension)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerEmitterSpawnExtension(UCEClonerEmitterSpawnExtension&&); \
	UCEClonerEmitterSpawnExtension(const UCEClonerEmitterSpawnExtension&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerEmitterSpawnExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerEmitterSpawnExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerEmitterSpawnExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerEmitterSpawnExtension();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerEmitterSpawnExtension>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
