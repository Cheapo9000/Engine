// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaSizeToTextureModifier.h"

#ifdef AVALANCHEMODIFIERS_AvaSizeToTextureModifier_generated_h
#error "AvaSizeToTextureModifier.generated.h already included, missing '#pragma once' in AvaSizeToTextureModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaSizeToTextureModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
enum class EAvaSizeToTextureRule : uint8;

// ********** Begin Class UAvaSizeToTextureModifier ************************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSizeToTextureModifier_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFixedWidth); \
	DECLARE_FUNCTION(execSetFixedWidth); \
	DECLARE_FUNCTION(execGetFixedHeight); \
	DECLARE_FUNCTION(execSetFixedHeight); \
	DECLARE_FUNCTION(execGetRule); \
	DECLARE_FUNCTION(execSetRule); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetTexture);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSizeToTextureModifier_h_38_ACCESSORS \
static void GetTexture_WrapperImpl(const void* Object, void* OutValue); \
static void SetTexture_WrapperImpl(void* Object, const void* InValue); \
static void GetRule_WrapperImpl(const void* Object, void* OutValue); \
static void SetRule_WrapperImpl(void* Object, const void* InValue); \
static void GetFixedHeight_WrapperImpl(const void* Object, void* OutValue); \
static void SetFixedHeight_WrapperImpl(void* Object, const void* InValue); \
static void GetFixedWidth_WrapperImpl(const void* Object, void* OutValue); \
static void SetFixedWidth_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaSizeToTextureModifier_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaSizeToTextureModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSizeToTextureModifier_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSizeToTextureModifier(); \
	friend struct ::Z_Construct_UClass_UAvaSizeToTextureModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaSizeToTextureModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaSizeToTextureModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaSizeToTextureModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaSizeToTextureModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaSizeToTextureModifier*>(this); }


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSizeToTextureModifier_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaSizeToTextureModifier(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaSizeToTextureModifier(UAvaSizeToTextureModifier&&) = delete; \
	UAvaSizeToTextureModifier(const UAvaSizeToTextureModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaSizeToTextureModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSizeToTextureModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSizeToTextureModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaSizeToTextureModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSizeToTextureModifier_h_34_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSizeToTextureModifier_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSizeToTextureModifier_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSizeToTextureModifier_h_38_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSizeToTextureModifier_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSizeToTextureModifier_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaSizeToTextureModifier;

// ********** End Class UAvaSizeToTextureModifier **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSizeToTextureModifier_h

// ********** Begin Enum EAvaSizeToTextureRule *****************************************************
#define FOREACH_ENUM_EAVASIZETOTEXTURERULE(op) \
	op(EAvaSizeToTextureRule::AdaptiveWidth) \
	op(EAvaSizeToTextureRule::AdaptiveHeight) \
	op(EAvaSizeToTextureRule::FixedHeight) \
	op(EAvaSizeToTextureRule::FixedWidth) 

enum class EAvaSizeToTextureRule : uint8;
template<> struct TIsUEnumClass<EAvaSizeToTextureRule> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAvaSizeToTextureRule>();
// ********** End Enum EAvaSizeToTextureRule *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
