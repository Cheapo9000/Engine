// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerStepExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEClonerStepExtension_generated_h
#error "CEClonerStepExtension.generated.h already included, missing '#pragma once' in CEClonerStepExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerStepExtension_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDeltaStepScale); \
	DECLARE_FUNCTION(execSetDeltaStepScale); \
	DECLARE_FUNCTION(execGetDeltaStepRotation); \
	DECLARE_FUNCTION(execSetDeltaStepRotation); \
	DECLARE_FUNCTION(execGetDeltaStepPosition); \
	DECLARE_FUNCTION(execSetDeltaStepPosition); \
	DECLARE_FUNCTION(execGetDeltaStepEnabled); \
	DECLARE_FUNCTION(execSetDeltaStepEnabled);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_ACCESSORS \
static void GetbDeltaStepEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbDeltaStepEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetDeltaStepPosition_WrapperImpl(const void* Object, void* OutValue); \
static void SetDeltaStepPosition_WrapperImpl(void* Object, const void* InValue); \
static void GetDeltaStepRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetDeltaStepRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetDeltaStepScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetDeltaStepScale_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerStepExtension(); \
	friend struct Z_Construct_UClass_UCEClonerStepExtension_Statics; \
public: \
	DECLARE_CLASS(UCEClonerStepExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerStepExtension)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerStepExtension(UCEClonerStepExtension&&); \
	UCEClonerStepExtension(const UCEClonerStepExtension&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerStepExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerStepExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerStepExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerStepExtension();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerStepExtension>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerStepExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
