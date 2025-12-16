// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerStepExtension.h"

#ifdef CLONEREFFECTOR_CEClonerStepExtension_generated_h
#error "CEClonerStepExtension.generated.h already included, missing '#pragma once' in CEClonerStepExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerStepExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCEClonerStepExtension ***************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDeltaStepScale); \
	DECLARE_FUNCTION(execSetDeltaStepScale); \
	DECLARE_FUNCTION(execGetDeltaStepRotation); \
	DECLARE_FUNCTION(execSetDeltaStepRotation); \
	DECLARE_FUNCTION(execGetDeltaStepPosition); \
	DECLARE_FUNCTION(execSetDeltaStepPosition); \
	DECLARE_FUNCTION(execGetDeltaStepEnabled); \
	DECLARE_FUNCTION(execSetDeltaStepEnabled);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_ACCESSORS \
static void GetbDeltaStepEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbDeltaStepEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetDeltaStepPosition_WrapperImpl(const void* Object, void* OutValue); \
static void SetDeltaStepPosition_WrapperImpl(void* Object, const void* InValue); \
static void GetDeltaStepRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetDeltaStepRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetDeltaStepScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetDeltaStepScale_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEClonerStepExtension_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerStepExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerStepExtension(); \
	friend struct ::Z_Construct_UClass_UCEClonerStepExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerStepExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerStepExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerStepExtension_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerStepExtension)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerStepExtension(UCEClonerStepExtension&&) = delete; \
	UCEClonerStepExtension(const UCEClonerStepExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerStepExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerStepExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerStepExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerStepExtension();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerStepExtension;

// ********** End Class UCEClonerStepExtension *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
