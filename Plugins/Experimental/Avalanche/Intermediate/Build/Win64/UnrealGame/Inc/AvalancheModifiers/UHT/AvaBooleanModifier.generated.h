// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaBooleanModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaBooleanMode : uint8;
#ifdef AVALANCHEMODIFIERS_AvaBooleanModifier_generated_h
#error "AvaBooleanModifier.generated.h already included, missing '#pragma once' in AvaBooleanModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaBooleanModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBooleanModifier_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execSetChannel); \
	DECLARE_FUNCTION(execGetMode); \
	DECLARE_FUNCTION(execSetMode);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBooleanModifier_h_29_ACCESSORS \
static void GetMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetMode_WrapperImpl(void* Object, const void* InValue); \
static void GetChannel_WrapperImpl(const void* Object, void* OutValue); \
static void SetChannel_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBooleanModifier_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaBooleanModifier(); \
	friend struct Z_Construct_UClass_UAvaBooleanModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaBooleanModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaBooleanModifier) \
	virtual UObject* _getUObject() const override { return const_cast<UAvaBooleanModifier*>(this); }


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBooleanModifier_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaBooleanModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaBooleanModifier(UAvaBooleanModifier&&); \
	UAvaBooleanModifier(const UAvaBooleanModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaBooleanModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaBooleanModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaBooleanModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaBooleanModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBooleanModifier_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBooleanModifier_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBooleanModifier_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBooleanModifier_h_29_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBooleanModifier_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBooleanModifier_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaBooleanModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaBooleanModifier_h


#define FOREACH_ENUM_EAVABOOLEANMODE(op) \
	op(EAvaBooleanMode::None) \
	op(EAvaBooleanMode::Subtract) \
	op(EAvaBooleanMode::Intersect) \
	op(EAvaBooleanMode::Union) 

enum class EAvaBooleanMode : uint8;
template<> struct TIsUEnumClass<EAvaBooleanMode> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaBooleanMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
