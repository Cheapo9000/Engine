// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaSubdivideModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaSubdivisionType : uint8;
#ifdef AVALANCHEMODIFIERS_AvaSubdivideModifier_generated_h
#error "AvaSubdivideModifier.generated.h already included, missing '#pragma once' in AvaSubdivideModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaSubdivideModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execSetType); \
	DECLARE_FUNCTION(execGetRecomputeNormals); \
	DECLARE_FUNCTION(execSetRecomputeNormals); \
	DECLARE_FUNCTION(execGetCuts); \
	DECLARE_FUNCTION(execSetCuts);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_ACCESSORS \
static void GetCuts_WrapperImpl(const void* Object, void* OutValue); \
static void SetCuts_WrapperImpl(void* Object, const void* InValue); \
static void GetbRecomputeNormals_WrapperImpl(const void* Object, void* OutValue); \
static void SetbRecomputeNormals_WrapperImpl(void* Object, const void* InValue); \
static void GetType_WrapperImpl(const void* Object, void* OutValue); \
static void SetType_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaSubdivideModifier(); \
	friend struct Z_Construct_UClass_UAvaSubdivideModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaSubdivideModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaSubdivideModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaSubdivideModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaSubdivideModifier(UAvaSubdivideModifier&&); \
	UAvaSubdivideModifier(const UAvaSubdivideModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaSubdivideModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaSubdivideModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaSubdivideModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaSubdivideModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaSubdivideModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaSubdivideModifier_h


#define FOREACH_ENUM_EAVASUBDIVISIONTYPE(op) \
	op(EAvaSubdivisionType::Selective) \
	op(EAvaSubdivisionType::Uniform) \
	op(EAvaSubdivisionType::PN) 

enum class EAvaSubdivisionType : uint8;
template<> struct TIsUEnumClass<EAvaSubdivisionType> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaSubdivisionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
