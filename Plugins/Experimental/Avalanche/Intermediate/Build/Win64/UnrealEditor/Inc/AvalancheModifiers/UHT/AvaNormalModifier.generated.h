// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaNormalModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaNormalModifierSplitMethod : uint8;
#ifdef AVALANCHEMODIFIERS_AvaNormalModifier_generated_h
#error "AvaNormalModifier.generated.h already included, missing '#pragma once' in AvaNormalModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaNormalModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaNormalModifier_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPolyGroupLayers); \
	DECLARE_FUNCTION(execGetPolyGroupLayerIdx); \
	DECLARE_FUNCTION(execSetPolyGroupLayerIdx); \
	DECLARE_FUNCTION(execGetAngleThreshold); \
	DECLARE_FUNCTION(execSetAngleThreshold); \
	DECLARE_FUNCTION(execGetSplitMethod); \
	DECLARE_FUNCTION(execSetSplitMethod); \
	DECLARE_FUNCTION(execGetInvert); \
	DECLARE_FUNCTION(execSetInvert); \
	DECLARE_FUNCTION(execGetAreaWeighted); \
	DECLARE_FUNCTION(execSetAreaWeighted); \
	DECLARE_FUNCTION(execGetAngleWeighted); \
	DECLARE_FUNCTION(execSetAngleWeighted);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaNormalModifier_h_26_ACCESSORS \
static void GetbAngleWeighted_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAngleWeighted_WrapperImpl(void* Object, const void* InValue); \
static void GetbAreaWeighted_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAreaWeighted_WrapperImpl(void* Object, const void* InValue); \
static void GetbInvert_WrapperImpl(const void* Object, void* OutValue); \
static void SetbInvert_WrapperImpl(void* Object, const void* InValue); \
static void GetSplitMethod_WrapperImpl(const void* Object, void* OutValue); \
static void SetSplitMethod_WrapperImpl(void* Object, const void* InValue); \
static void GetAngleThreshold_WrapperImpl(const void* Object, void* OutValue); \
static void SetAngleThreshold_WrapperImpl(void* Object, const void* InValue); \
static void GetPolyGroupLayer_WrapperImpl(const void* Object, void* OutValue); \
static void SetPolyGroupLayer_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaNormalModifier_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaNormalModifier(); \
	friend struct Z_Construct_UClass_UAvaNormalModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaNormalModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaNormalModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaNormalModifier_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaNormalModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaNormalModifier(UAvaNormalModifier&&); \
	UAvaNormalModifier(const UAvaNormalModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaNormalModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaNormalModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaNormalModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaNormalModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaNormalModifier_h_23_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaNormalModifier_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaNormalModifier_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaNormalModifier_h_26_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaNormalModifier_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaNormalModifier_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaNormalModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaNormalModifier_h


#define FOREACH_ENUM_EAVANORMALMODIFIERSPLITMETHOD(op) \
	op(EAvaNormalModifierSplitMethod::None) \
	op(EAvaNormalModifierSplitMethod::Vertex) \
	op(EAvaNormalModifierSplitMethod::Triangle) \
	op(EAvaNormalModifierSplitMethod::PolyGroup) \
	op(EAvaNormalModifierSplitMethod::Threshold) 

enum class EAvaNormalModifierSplitMethod : uint8;
template<> struct TIsUEnumClass<EAvaNormalModifierSplitMethod> { enum { Value = true }; };
template<> AVALANCHEMODIFIERS_API UEnum* StaticEnum<EAvaNormalModifierSplitMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
