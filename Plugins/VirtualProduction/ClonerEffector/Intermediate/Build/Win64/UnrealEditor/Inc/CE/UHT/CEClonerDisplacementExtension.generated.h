// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerDisplacementExtension.h"

#ifdef CLONEREFFECTOR_CEClonerDisplacementExtension_generated_h
#error "CEClonerDisplacementExtension.generated.h already included, missing '#pragma once' in CEClonerDisplacementExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerDisplacementExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
enum class ECEClonerPlane : uint8;
enum class ECEClonerTextureSampleChannel : uint8;

// ********** Begin Class UCEClonerDisplacementExtension *******************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerDisplacementExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDisplacementTextureClamp); \
	DECLARE_FUNCTION(execSetDisplacementTextureClamp); \
	DECLARE_FUNCTION(execGetDisplacementTextureScale); \
	DECLARE_FUNCTION(execSetDisplacementTextureScale); \
	DECLARE_FUNCTION(execGetDisplacementTextureRotation); \
	DECLARE_FUNCTION(execSetDisplacementTextureRotation); \
	DECLARE_FUNCTION(execGetDisplacementTextureOffset); \
	DECLARE_FUNCTION(execSetDisplacementTextureOffset); \
	DECLARE_FUNCTION(execGetDisplacementTexturePlane); \
	DECLARE_FUNCTION(execSetDisplacementTexturePlane); \
	DECLARE_FUNCTION(execGetDisplacementTextureSampleMode); \
	DECLARE_FUNCTION(execSetDisplacementTextureSampleMode); \
	DECLARE_FUNCTION(execGetDisplacementTextureAsset); \
	DECLARE_FUNCTION(execSetDisplacementTextureAsset); \
	DECLARE_FUNCTION(execGetDisplacementScaleMax); \
	DECLARE_FUNCTION(execSetDisplacementScaleMax); \
	DECLARE_FUNCTION(execGetDisplacementRotationMax); \
	DECLARE_FUNCTION(execSetDisplacementRotationMax); \
	DECLARE_FUNCTION(execGetDisplacementOffsetMax); \
	DECLARE_FUNCTION(execSetDisplacementOffsetMax); \
	DECLARE_FUNCTION(execGetDisplacementInvert); \
	DECLARE_FUNCTION(execSetDisplacementInvert); \
	DECLARE_FUNCTION(execGetDisplacementEnabled); \
	DECLARE_FUNCTION(execSetDisplacementEnabled);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerDisplacementExtension_h_13_ACCESSORS \
static void GetbDisplacementEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbDisplacementEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetbDisplacementInvert_WrapperImpl(const void* Object, void* OutValue); \
static void SetbDisplacementInvert_WrapperImpl(void* Object, const void* InValue); \
static void GetDisplacementOffsetMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplacementOffsetMax_WrapperImpl(void* Object, const void* InValue); \
static void GetDisplacementRotationMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplacementRotationMax_WrapperImpl(void* Object, const void* InValue); \
static void GetDisplacementScaleMax_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplacementScaleMax_WrapperImpl(void* Object, const void* InValue); \
static void GetDisplacementTextureAsset_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplacementTextureAsset_WrapperImpl(void* Object, const void* InValue); \
static void GetDisplacementTexturePlane_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplacementTexturePlane_WrapperImpl(void* Object, const void* InValue); \
static void GetDisplacementTextureSampleMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplacementTextureSampleMode_WrapperImpl(void* Object, const void* InValue); \
static void GetDisplacementTextureOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplacementTextureOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetDisplacementTextureRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplacementTextureRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetDisplacementTextureScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetDisplacementTextureScale_WrapperImpl(void* Object, const void* InValue); \
static void GetbDisplacementTextureClamp_WrapperImpl(const void* Object, void* OutValue); \
static void SetbDisplacementTextureClamp_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEClonerDisplacementExtension_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerDisplacementExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerDisplacementExtension_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerDisplacementExtension(); \
	friend struct ::Z_Construct_UClass_UCEClonerDisplacementExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerDisplacementExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerDisplacementExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerDisplacementExtension_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerDisplacementExtension)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerDisplacementExtension_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerDisplacementExtension(UCEClonerDisplacementExtension&&) = delete; \
	UCEClonerDisplacementExtension(const UCEClonerDisplacementExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerDisplacementExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerDisplacementExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerDisplacementExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerDisplacementExtension();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerDisplacementExtension_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerDisplacementExtension_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerDisplacementExtension_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerDisplacementExtension_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerDisplacementExtension_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerDisplacementExtension_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerDisplacementExtension;

// ********** End Class UCEClonerDisplacementExtension *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerDisplacementExtension_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
