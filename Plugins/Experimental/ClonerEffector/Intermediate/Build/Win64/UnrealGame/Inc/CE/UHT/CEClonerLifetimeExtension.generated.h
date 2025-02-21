// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerLifetimeExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
#ifdef CLONEREFFECTOR_CEClonerLifetimeExtension_generated_h
#error "CEClonerLifetimeExtension.generated.h already included, missing '#pragma once' in CEClonerLifetimeExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerLifetimeExtension_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLifetimeScaleCurve); \
	DECLARE_FUNCTION(execGetLifetimeScaleEnabled); \
	DECLARE_FUNCTION(execSetLifetimeScaleEnabled); \
	DECLARE_FUNCTION(execGetLifetimeMax); \
	DECLARE_FUNCTION(execSetLifetimeMax); \
	DECLARE_FUNCTION(execGetLifetimeMin); \
	DECLARE_FUNCTION(execSetLifetimeMin); \
	DECLARE_FUNCTION(execGetLifetimeEnabled); \
	DECLARE_FUNCTION(execSetLifetimeEnabled);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_ACCESSORS \
static void GetbLifetimeEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbLifetimeEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetLifetimeMin_WrapperImpl(const void* Object, void* OutValue); \
static void SetLifetimeMin_WrapperImpl(void* Object, const void* InValue); \
static void GetLifetimeMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetLifetimeMax_WrapperImpl(void* Object, const void* InValue); \
static void GetbLifetimeScaleEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbLifetimeScaleEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetLifetimeScaleCurve_WrapperImpl(const void* Object, void* OutValue); \
static void SetLifetimeScaleCurve_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerLifetimeExtension(); \
	friend struct Z_Construct_UClass_UCEClonerLifetimeExtension_Statics; \
public: \
	DECLARE_CLASS(UCEClonerLifetimeExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerLifetimeExtension)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerLifetimeExtension(UCEClonerLifetimeExtension&&); \
	UCEClonerLifetimeExtension(const UCEClonerLifetimeExtension&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerLifetimeExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerLifetimeExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerLifetimeExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerLifetimeExtension();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerLifetimeExtension>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
