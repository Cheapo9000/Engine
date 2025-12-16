// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cloner/Extensions/CEClonerTextureExtension.h"

#ifdef CLONEREFFECTOR_CEClonerTextureExtension_generated_h
#error "CEClonerTextureExtension.generated.h already included, missing '#pragma once' in CEClonerTextureExtension.h"
#endif
#define CLONEREFFECTOR_CEClonerTextureExtension_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
enum class ECEClonerPlane : uint8;
enum class ECEClonerTextureProvider : uint8;

// ********** Begin Class UCEClonerTextureExtension ************************************************
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerTextureExtension_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomTextureUVClamp); \
	DECLARE_FUNCTION(execSetCustomTextureUVClamp); \
	DECLARE_FUNCTION(execGetCustomTextureUVScale); \
	DECLARE_FUNCTION(execSetCustomTextureUVScale); \
	DECLARE_FUNCTION(execGetCustomTextureUVRotation); \
	DECLARE_FUNCTION(execSetCustomTextureUVRotation); \
	DECLARE_FUNCTION(execGetCustomTextureUVOffset); \
	DECLARE_FUNCTION(execSetCustomTextureUVOffset); \
	DECLARE_FUNCTION(execGetCustomTextureUVPlane); \
	DECLARE_FUNCTION(execSetCustomTextureUVPlane); \
	DECLARE_FUNCTION(execGetTextureUVProvider); \
	DECLARE_FUNCTION(execSetTextureUVProvider); \
	DECLARE_FUNCTION(execGetCustomTextureAsset); \
	DECLARE_FUNCTION(execSetCustomTextureAsset); \
	DECLARE_FUNCTION(execGetTextureProvider); \
	DECLARE_FUNCTION(execSetTextureProvider); \
	DECLARE_FUNCTION(execGetTextureEnabled); \
	DECLARE_FUNCTION(execSetTextureEnabled);


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerTextureExtension_h_24_ACCESSORS \
static void GetbTextureEnabled_WrapperImpl(const void* Object, void* OutValue); \
static void SetbTextureEnabled_WrapperImpl(void* Object, const void* InValue); \
static void GetTextureProvider_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextureProvider_WrapperImpl(void* Object, const void* InValue); \
static void GetCustomTextureAsset_WrapperImpl(const void* Object, void* OutValue); \
static void SetCustomTextureAsset_WrapperImpl(void* Object, const void* InValue); \
static void GetTextureUVProvider_WrapperImpl(const void* Object, void* OutValue); \
static void SetTextureUVProvider_WrapperImpl(void* Object, const void* InValue); \
static void GetCustomTextureUVPlane_WrapperImpl(const void* Object, void* OutValue); \
static void SetCustomTextureUVPlane_WrapperImpl(void* Object, const void* InValue); \
static void GetCustomTextureUVOffset_WrapperImpl(const void* Object, void* OutValue); \
static void SetCustomTextureUVOffset_WrapperImpl(void* Object, const void* InValue); \
static void GetCustomTextureUVRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetCustomTextureUVRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetCustomTextureUVScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetCustomTextureUVScale_WrapperImpl(void* Object, const void* InValue); \
static void GetbCustomTextureUVClamp_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCustomTextureUVClamp_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UCEClonerTextureExtension_Statics;
CLONEREFFECTOR_API UClass* Z_Construct_UClass_UCEClonerTextureExtension_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerTextureExtension_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCEClonerTextureExtension(); \
	friend struct ::Z_Construct_UClass_UCEClonerTextureExtension_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CLONEREFFECTOR_API UClass* ::Z_Construct_UClass_UCEClonerTextureExtension_NoRegister(); \
public: \
	DECLARE_CLASS2(UCEClonerTextureExtension, UCEClonerExtensionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ClonerEffector"), Z_Construct_UClass_UCEClonerTextureExtension_NoRegister) \
	DECLARE_SERIALIZER(UCEClonerTextureExtension)


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerTextureExtension_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCEClonerTextureExtension(UCEClonerTextureExtension&&) = delete; \
	UCEClonerTextureExtension(const UCEClonerTextureExtension&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CLONEREFFECTOR_API, UCEClonerTextureExtension); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCEClonerTextureExtension); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCEClonerTextureExtension) \
	CLONEREFFECTOR_API virtual ~UCEClonerTextureExtension();


#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerTextureExtension_h_21_PROLOG
#define FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerTextureExtension_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerTextureExtension_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerTextureExtension_h_24_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerTextureExtension_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerTextureExtension_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCEClonerTextureExtension;

// ********** End Class UCEClonerTextureExtension **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_ClonerEffector_Source_ClonerEffector_Public_Cloner_Extensions_CEClonerTextureExtension_h

// ********** Begin Enum ECEClonerTextureProvider **************************************************
#define FOREACH_ENUM_ECECLONERTEXTUREPROVIDER(op) \
	op(ECEClonerTextureProvider::Constraint) \
	op(ECEClonerTextureProvider::Displacement) \
	op(ECEClonerTextureProvider::Custom) 

enum class ECEClonerTextureProvider : uint8;
template<> struct TIsUEnumClass<ECEClonerTextureProvider> { enum { Value = true }; };
template<> CLONEREFFECTOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ECEClonerTextureProvider>();
// ********** End Enum ECEClonerTextureProvider ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
