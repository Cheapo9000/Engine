// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerRangeExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLONEREFFECTOR_CEClonerRangeExtension_generated_h
#error "CEClonerRangeExtension.generated.h already included, missing '#pragma once' in CEClonerRangeExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerRangeExtension_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerRangeExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRangeScaleUniformMax); \
	DECLARE_FUNCTION(execSetRangeScaleUniformMax); \
	DECLARE_FUNCTION(execGetRangeScaleUniformMin); \
	DECLARE_FUNCTION(execSetRangeScaleUniformMin); \
	DECLARE_FUNCTION(execGetRangeScaleMax); \
	DECLARE_FUNCTION(execSetRangeScaleMax); \
	DECLARE_FUNCTION(execGetRangeScaleMin); \
	DECLARE_FUNCTION(execSetRangeScaleMin); \
	DECLARE_FUNCTION(execGetRangeScaleUniform); \
	DECLARE_FUNCTION(execSetRangeScaleUniform); \
	DECLARE_FUNCTION(execGetRangeRotationMax); \
	DECLARE_FUNCTION(execSetRangeRotationMax); \
	DECLARE_FUNCTION(execGetRangeRotationMin); \
	DECLARE_FUNCTION(execSetRangeRotationMin); \
	DECLARE_FUNCTION(execGetRangeOffsetMax); \
	DECLARE_FUNCTION(execSetRangeOffsetMax); \
	DECLARE_FUNCTION(execGetRangeOffsetMin); \
	DECLARE_FUNCTION(execSetRangeOffsetMin); \
	DECLARE_FUNCTION(execGetRangeMirrored); \
	DECLARE_FUNCTION(execSetRangeMirrored); \
	DECLARE_FUNCTION(execGetRangeEnabled); \
	DECLARE_FUNCTION(execSetRangeEnabled);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerRangeExtension_h_13_ACCESSORS \
static void GetbRangeEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRangeEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetbRangeMirrored_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRangeMirrored_WrapperImpl(void* Object, const void* InValue); \
static void GetRangeOffsetMin_WrapperImpl(const void* Object, void* OutValue); \
static void SetRangeOffsetMin_WrapperImpl(void* Object, const void* InValue); \
static void GetRangeOffsetMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetRangeOffsetMax_WrapperImpl(void* Object, const void* InValue); \
static void GetRangeRotationMin_WrapperImpl(const void* Object, void* OutValue); \
static void SetRangeRotationMin_WrapperImpl(void* Object, const void* InValue); \
static void GetRangeRotationMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetRangeRotationMax_WrapperImpl(void* Object, const void* InValue); \
static void GetbRangeScaleUniform_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRangeScaleUniform_WrapperImpl(void* Object, const void* InValue); \
static void GetRangeScaleMin_WrapperImpl(const void* Object, void* OutValue); \
static void SetRangeScaleMin_WrapperImpl(void* Object, const void* InValue); \
static void GetRangeScaleMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetRangeScaleMax_WrapperImpl(void* Object, const void* InValue); \
static void GetRangeScaleUniformMin_WrapperImpl(const void* Object, void* OutValue); \
static void SetRangeScaleUniformMin_WrapperImpl(void* Object, const void* InValue); \
static void GetRangeScaleUniformMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetRangeScaleUniformMax_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerRangeExtension_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerRangeExtension(); \
	friend struct Z_Construct_UClass_UCEClonerRangeExtension_Statics; \
public: \
	DECLARE_CLASS(UCEClonerRangeExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerRangeExtension)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerRangeExtension_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerRangeExtension(UCEClonerRangeExtension&&); \
	UCEClonerRangeExtension(const UCEClonerRangeExtension&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerRangeExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerRangeExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerRangeExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerRangeExtension();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerRangeExtension_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerRangeExtension_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerRangeExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerRangeExtension_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerRangeExtension_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerRangeExtension_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerRangeExtension>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerRangeExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
