// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerConstraintExtension.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
enum class ECEClonerCompareMode : uint8;
enum class ECEClonerGridConstraint : uint8;
enum class ECEClonerPlane : uint8;
enum class ECEClonerTextureSampleChannel : uint8;
#ifdef CLONEREFFECTOR_CEClonerConstraintExtension_generated_h
#error "CEClonerConstraintExtension.generated.h already included, missing '#pragma once' in CEClonerConstraintExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerConstraintExtension_generated_h

#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerConstraintExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTextureThreshold); \
	DECLARE_FUNCTION(execSetTextureThreshold); \
	DECLARE_FUNCTION(execGetTextureCompareMode); \
	DECLARE_FUNCTION(execSetTextureCompareMode); \
	DECLARE_FUNCTION(execGetTexturePlane); \
	DECLARE_FUNCTION(execSetTexturePlane); \
	DECLARE_FUNCTION(execGetTextureSampleMode); \
	DECLARE_FUNCTION(execSetTextureSampleMode); \
	DECLARE_FUNCTION(execGetTextureAsset); \
	DECLARE_FUNCTION(execSetTextureAsset); \
	DECLARE_FUNCTION(execGetCylinderCenter); \
	DECLARE_FUNCTION(execSetCylinderCenter); \
	DECLARE_FUNCTION(execGetCylinderHeight); \
	DECLARE_FUNCTION(execSetCylinderHeight); \
	DECLARE_FUNCTION(execGetCylinderRadius); \
	DECLARE_FUNCTION(execSetCylinderRadius); \
	DECLARE_FUNCTION(execGetSphereCenter); \
	DECLARE_FUNCTION(execSetSphereCenter); \
	DECLARE_FUNCTION(execGetSphereRadius); \
	DECLARE_FUNCTION(execSetSphereRadius); \
	DECLARE_FUNCTION(execGetInvertConstraint); \
	DECLARE_FUNCTION(execSetInvertConstraint); \
	DECLARE_FUNCTION(execGetConstraint); \
	DECLARE_FUNCTION(execSetConstraint);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerConstraintExtension_h_13_ACCESSORS \
static void GetConstraint_WrapperImpl(const void* Object, void* OutValue); \
static void SetConstraint_WrapperImpl(void* Object, const void* InValue); \
static void GetbInvertConstraint_WrapperImpl(const void* Object, void* OutValue); \
static void SetbInvertConstraint_WrapperImpl(void* Object, const void* InValue); \
static void GetSphereRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetSphereRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetSphereCenter_WrapperImpl(const void* Object, void* OutValue); \
static void SetSphereCenter_WrapperImpl(void* Object, const void* InValue); \
static void GetCylinderRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetCylinderRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetCylinderHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetCylinderHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetCylinderCenter_WrapperImpl(const void* Object, void* OutValue); \
static void SetCylinderCenter_WrapperImpl(void* Object, const void* InValue); \
static void GetTextureAsset_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextureAsset_WrapperImpl(void* Object, const void* InValue); \
static void GetTexturePlane_WrapperImpl(const void* Object, void* OutValue); \
static void SetTexturePlane_WrapperImpl(void* Object, const void* InValue); \
static void GetTextureSampleMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextureSampleMode_WrapperImpl(void* Object, const void* InValue); \
static void GetTextureCompareMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextureCompareMode_WrapperImpl(void* Object, const void* InValue); \
static void GetTextureThreshold_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextureThreshold_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerConstraintExtension_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerConstraintExtension(); \
	friend struct Z_Construct_UClass_UCEClonerConstraintExtension_Statics; \
public: \
	DECLARE_CLASS(UCEClonerConstraintExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), CLONEREFFECTOR_API) \
	DECLARE_SERIALIZER(UCEClonerConstraintExtension)


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerConstraintExtension_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCEClonerConstraintExtension(UCEClonerConstraintExtension&&); \
	UCEClonerConstraintExtension(const UCEClonerConstraintExtension&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerConstraintExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerConstraintExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerConstraintExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerConstraintExtension();


#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerConstraintExtension_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerConstraintExtension_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerConstraintExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerConstraintExtension_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerConstraintExtension_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerConstraintExtension_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CLONEREFFECTOR_API UClass* StaticClass<class UCEClonerConstraintExtension>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerConstraintExtension_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
