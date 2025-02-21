// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaPlaneCutModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaPlaneCutModifier_generated_h
#error "AvaPlaneCutModifier.generated.h already included, missing '#pragma once' in AvaPlaneCutModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaPlaneCutModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPlaneCutModifier_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFillHoles); \
	DECLARE_FUNCTION(execSetFillHoles); \
	DECLARE_FUNCTION(execGetInvertCut); \
	DECLARE_FUNCTION(execSetInvertCut); \
	DECLARE_FUNCTION(execGetPlaneRotation); \
	DECLARE_FUNCTION(execSetPlaneRotation); \
	DECLARE_FUNCTION(execGetPlaneOrigin); \
	DECLARE_FUNCTION(execSetPlaneOrigin);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPlaneCutModifier_h_13_ACCESSORS \
static void GetPlaneOrigin_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlaneOrigin_WrapperImpl(void* Object, const void* InValue); \
static void GetPlaneRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetPlaneRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetbInvertCut_WrapperImpl(const void* Object, void* OutValue); \
static void SetbInvertCut_WrapperImpl(void* Object, const void* InValue); \
static void GetbFillHoles_WrapperImpl(const void* Object, void* OutValue); \
static void SetbFillHoles_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPlaneCutModifier_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPlaneCutModifier(); \
	friend struct Z_Construct_UClass_UAvaPlaneCutModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaPlaneCutModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaPlaneCutModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPlaneCutModifier_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaPlaneCutModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaPlaneCutModifier(UAvaPlaneCutModifier&&); \
	UAvaPlaneCutModifier(const UAvaPlaneCutModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaPlaneCutModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPlaneCutModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaPlaneCutModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaPlaneCutModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPlaneCutModifier_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPlaneCutModifier_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPlaneCutModifier_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPlaneCutModifier_h_13_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPlaneCutModifier_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPlaneCutModifier_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaPlaneCutModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaPlaneCutModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
