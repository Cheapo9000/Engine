// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaBendModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaBendModifier_generated_h
#error "AvaBendModifier.generated.h already included, missing '#pragma once' in AvaBendModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaBendModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBendModifier_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBidirectional); \
	DECLARE_FUNCTION(execSetBidirectional); \
	DECLARE_FUNCTION(execGetSymmetricExtents); \
	DECLARE_FUNCTION(execSetSymmetricExtents); \
	DECLARE_FUNCTION(execGetBendRotation); \
	DECLARE_FUNCTION(execSetBendRotation); \
	DECLARE_FUNCTION(execGetBendPosition); \
	DECLARE_FUNCTION(execSetBendPosition); \
	DECLARE_FUNCTION(execGetExtent); \
	DECLARE_FUNCTION(execSetExtent); \
	DECLARE_FUNCTION(execGetAngle); \
	DECLARE_FUNCTION(execSetAngle);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBendModifier_h_11_ACCESSORS \
static void GetBendPosition_WrapperImpl(const void* Object, void* OutValue); \
static void SetBendPosition_WrapperImpl(void* Object, const void* InValue); \
static void GetBendRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetBendRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetAngle_WrapperImpl(const void* Object, void* OutValue); \
static void SetAngle_WrapperImpl(void* Object, const void* InValue); \
static void GetExtent_WrapperImpl(const void* Object, void* OutValue); \
static void SetExtent_WrapperImpl(void* Object, const void* InValue); \
static void GetbSymmetricExtents_WrapperImpl(const void* Object, void* OutValue); \
static void SetbSymmetricExtents_WrapperImpl(void* Object, const void* InValue); \
static void GetbBidirectional_WrapperImpl(const void* Object, void* OutValue); \
static void SetbBidirectional_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBendModifier_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaBendModifier(); \
	friend struct Z_Construct_UClass_UAvaBendModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaBendModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaBendModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBendModifier_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaBendModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaBendModifier(UAvaBendModifier&&); \
	UAvaBendModifier(const UAvaBendModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaBendModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaBendModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaBendModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaBendModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBendModifier_h_8_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBendModifier_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBendModifier_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBendModifier_h_11_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBendModifier_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBendModifier_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaBendModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBendModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
