// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerLifetimeExtension.h"

#ifdef CLONEREFFECTOR_CEClonerLifetimeExtension_generated_h
#error "CEClonerLifetimeExtension.generated.h already included, missing '#pragma once' in CEClonerLifetimeExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerLifetimeExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;

// ********** Begin Class UCEClonerLifetimeExtension ***********************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLifetimeScaleCurve); \
	DECLARE_FUNCTION(execGetLifetimeScaleEnabled); \
	DECLARE_FUNCTION(execSetLifetimeScaleEnabled); \
	DECLARE_FUNCTION(execGetLifetimeMax); \
	DECLARE_FUNCTION(execSetLifetimeMax); \
	DECLARE_FUNCTION(execGetLifetimeMin); \
	DECLARE_FUNCTION(execSetLifetimeMin); \
	DECLARE_FUNCTION(execGetLifetimeEnabled); \
	DECLARE_FUNCTION(execSetLifetimeEnabled);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_ACCESSORS \
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


struct Z_Construct_UClass_UCEClonerLifetimeExtension_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerLifetimeExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerLifetimeExtension(); \
	friend struct ::Z_Construct_UClass_UCEClonerLifetimeExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerLifetimeExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerLifetimeExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerLifetimeExtension_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerLifetimeExtension)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerLifetimeExtension(UCEClonerLifetimeExtension&&) = delete; \
	UCEClonerLifetimeExtension(const UCEClonerLifetimeExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerLifetimeExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerLifetimeExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerLifetimeExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerLifetimeExtension();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerLifetimeExtension;

// ********** End Class UCEClonerLifetimeExtension *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerLifetimeExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
