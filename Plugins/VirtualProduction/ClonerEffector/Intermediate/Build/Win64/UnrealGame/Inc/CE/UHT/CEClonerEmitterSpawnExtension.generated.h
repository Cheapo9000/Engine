// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerEmitterSpawnExtension.h"

#ifdef CLONEREFFECTOR_CEClonerEmitterSpawnExtension_generated_h
#error "CEClonerEmitterSpawnExtension.generated.h already included, missing '#pragma once' in CEClonerEmitterSpawnExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerEmitterSpawnExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerSpawnBehaviorMode : uint8;
enum class ECEClonerSpawnLoopMode : uint8;

// ********** Begin Class UCEClonerEmitterSpawnExtension *******************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSpawnMaxTotalCount); \
	DECLARE_FUNCTION(execSetSpawnMaxTotalCount); \
	DECLARE_FUNCTION(execGetSpawnMaxFrameCount); \
	DECLARE_FUNCTION(execSetSpawnMaxFrameCount); \
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


#if WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetUseLocalSpace); \
	DECLARE_FUNCTION(execSetUseLocalSpace);
#else // WITH_EDITOR
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_ACCESSORS \
static void GetSpawnLoopMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnLoopMode_WrapperImpl(void* Object, const void* InValue); \
static void GetSpawnLoopIterations_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnLoopIterations_WrapperImpl(void* Object, const void* InValue); \
static void GetSpawnBehaviorMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnBehaviorMode_WrapperImpl(void* Object, const void* InValue); \
static void GetSpawnLoopInterval_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnLoopInterval_WrapperImpl(void* Object, const void* InValue); \
static void GetSpawnRate_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnRate_WrapperImpl(void* Object, const void* InValue); \
static void GetSpawnMaxFrameCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnMaxFrameCount_WrapperImpl(void* Object, const void* InValue); \
static void GetSpawnMaxTotalCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetSpawnMaxTotalCount_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEClonerEmitterSpawnExtension_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerEmitterSpawnExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerEmitterSpawnExtension(); \
	friend struct ::Z_Construct_UClass_UCEClonerEmitterSpawnExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerEmitterSpawnExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerEmitterSpawnExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerEmitterSpawnExtension_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerEmitterSpawnExtension)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerEmitterSpawnExtension(UCEClonerEmitterSpawnExtension&&) = delete; \
	UCEClonerEmitterSpawnExtension(const UCEClonerEmitterSpawnExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerEmitterSpawnExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerEmitterSpawnExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerEmitterSpawnExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerEmitterSpawnExtension();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_13_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerEmitterSpawnExtension;

// ********** End Class UCEClonerEmitterSpawnExtension *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerEmitterSpawnExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
