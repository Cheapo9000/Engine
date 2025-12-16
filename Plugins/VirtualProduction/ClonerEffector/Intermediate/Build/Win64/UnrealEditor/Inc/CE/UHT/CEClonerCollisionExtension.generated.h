// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerCollisionExtension.h"

#ifdef CLONEREFFECTOR_CEClonerCollisionExtension_generated_h
#error "CEClonerCollisionExtension.generated.h already included, missing '#pragma once' in CEClonerCollisionExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerCollisionExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECEClonerCollisionRadiusMode : uint8;

// ********** Begin Class UCEClonerCollisionExtension **********************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerCollisionExtension_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMassMax); \
	DECLARE_FUNCTION(execSetMassMax); \
	DECLARE_FUNCTION(execGetMassMin); \
	DECLARE_FUNCTION(execSetMassMin); \
	DECLARE_FUNCTION(execGetCollisionRadii); \
	DECLARE_FUNCTION(execGetCollisionRadiusMode); \
	DECLARE_FUNCTION(execSetCollisionRadiusMode); \
	DECLARE_FUNCTION(execGetCollisionGridSize); \
	DECLARE_FUNCTION(execSetCollisionGridSize); \
	DECLARE_FUNCTION(execGetCollisionGridResolution); \
	DECLARE_FUNCTION(execSetCollisionGridResolution); \
	DECLARE_FUNCTION(execGetCollisionIterations); \
	DECLARE_FUNCTION(execSetCollisionIterations); \
	DECLARE_FUNCTION(execGetCollisionVelocityEnabled); \
	DECLARE_FUNCTION(execSetCollisionVelocityEnabled); \
	DECLARE_FUNCTION(execGetParticleCollisionEnabled); \
	DECLARE_FUNCTION(execSetParticleCollisionEnabled); \
	DECLARE_FUNCTION(execGetSurfaceCollisionEnabled); \
	DECLARE_FUNCTION(execSetSurfaceCollisionEnabled);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerCollisionExtension_h_17_ACCESSORS \
static void GetbSurfaceCollisionEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbSurfaceCollisionEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetbParticleCollisionEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbParticleCollisionEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetbCollisionVelocityEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCollisionVelocityEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetCollisionIterations_WrapperImpl(const void* Object, void* OutValue); \
static void SetCollisionIterations_WrapperImpl(void* Object, const void* InValue); \
static void GetCollisionGridResolution_WrapperImpl(const void* Object, void* OutValue); \
static void SetCollisionGridResolution_WrapperImpl(void* Object, const void* InValue); \
static void GetCollisionGridSize_WrapperImpl(const void* Object, void* OutValue); \
static void SetCollisionGridSize_WrapperImpl(void* Object, const void* InValue); \
static void GetCollisionRadiusMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetCollisionRadiusMode_WrapperImpl(void* Object, const void* InValue); \
static void GetCollisionRadii_WrapperImpl(const void* Object, void* OutValue); \
static void GetMassMin_WrapperImpl(const void* Object, void* OutValue); \
static void SetMassMin_WrapperImpl(void* Object, const void* InValue); \
static void GetMassMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetMassMax_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEClonerCollisionExtension_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerCollisionExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerCollisionExtension_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerCollisionExtension(); \
	friend struct ::Z_Construct_UClass_UCEClonerCollisionExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerCollisionExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerCollisionExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerCollisionExtension_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerCollisionExtension)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerCollisionExtension_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerCollisionExtension(UCEClonerCollisionExtension&&) = delete; \
	UCEClonerCollisionExtension(const UCEClonerCollisionExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerCollisionExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerCollisionExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerCollisionExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerCollisionExtension();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerCollisionExtension_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerCollisionExtension_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerCollisionExtension_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerCollisionExtension_h_17_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerCollisionExtension_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerCollisionExtension_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerCollisionExtension;

// ********** End Class UCEClonerCollisionExtension ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerCollisionExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
