// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaExtrudeModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaExtrudeMode : uint8;
#ifdef AVALANCHEMODIFIERS_AvaExtrudeModifier_generated_h
#error "AvaExtrudeModifier.generated.h already included, missing '#pragma once' in AvaExtrudeModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaExtrudeModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetExtrudeMode); \
	DECLARE_FUNCTION(execSetExtrudeMode); \
	DECLARE_FUNCTION(execGetCloseBack); \
	DECLARE_FUNCTION(execSetCloseBack); \
	DECLARE_FUNCTION(execGetDepth); \
	DECLARE_FUNCTION(execSetDepth);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_20_ACCESSORS \
static void GetDepth_WrapperImpl(const void* Object, void* OutValue); \
static void SetDepth_WrapperImpl(void* Object, const void* InValue); \
static void GetbCloseBack_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCloseBack_WrapperImpl(void* Object, const void* InValue); \
static void GetExtrudeMode_WrapperImpl(const void* Object, void* OutValue); \
static void SetExtrudeMode_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_20_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAvaExtrudeModifier, AVALANCHEMODIFIERS_API)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaExtrudeModifier(); \
	friend struct Z_Construct_UClass_UAvaExtrudeModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaExtrudeModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaExtrudeModifier) \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_20_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaExtrudeModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaExtrudeModifier(UAvaExtrudeModifier&&); \
	UAvaExtrudeModifier(const UAvaExtrudeModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaExtrudeModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaExtrudeModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaExtrudeModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaExtrudeModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_20_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaExtrudeModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaExtrudeModifier_h


#define FOREACH_ENUM_EAVAEXTRUDEMODE(op) \
	op(EAvaExtrudeMode::Opposite) \
	op(EAvaExtrudeMode::Front) \
	op(EAvaExtrudeMode::Symmetrical) 

enum class EAvaExtrudeMode : uint8;
template<> struct TIsUEnumClass<EAvaExtrudeMode> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaExtrudeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
