// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaMirrorModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AVALANCHEMODIFIERS_AvaMirrorModifier_generated_h
#error "AvaMirrorModifier.generated.h already included, missing '#pragma once' in AvaMirrorModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaMirrorModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMirrorModifier_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWeldAlongPlane); \
	DECLARE_FUNCTION(execSetWeldAlongPlane); \
	DECLARE_FUNCTION(execGetFlipCutSide); \
	DECLARE_FUNCTION(execSetFlipCutSide); \
	DECLARE_FUNCTION(execGetApplyPlaneCut); \
	DECLARE_FUNCTION(execSetApplyPlaneCut); \
	DECLARE_FUNCTION(execGetMirrorFrameRotation); \
	DECLARE_FUNCTION(execSetMirrorFrameRotation); \
	DECLARE_FUNCTION(execGetMirrorFramePosition); \
	DECLARE_FUNCTION(execSetMirrorFramePosition);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMirrorModifier_h_14_ACCESSORS \
static void GetMirrorFramePosition_WrapperImpl(const void* Object, void* OutValue); \
static void SetMirrorFramePosition_WrapperImpl(void* Object, const void* InValue); \
static void GetMirrorFrameRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetMirrorFrameRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetbApplyPlaneCut_WrapperImpl(const void* Object, void* OutValue); \
static void SetbApplyPlaneCut_WrapperImpl(void* Object, const void* InValue); \
static void GetbFlipCutSide_WrapperImpl(const void* Object, void* OutValue); \
static void SetbFlipCutSide_WrapperImpl(void* Object, const void* InValue); \
static void GetbWeldAlongPlane_WrapperImpl(const void* Object, void* OutValue); \
static void SetbWeldAlongPlane_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMirrorModifier_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMirrorModifier(); \
	friend struct Z_Construct_UClass_UAvaMirrorModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaMirrorModifier, UAvaGeometryBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaMirrorModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMirrorModifier_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AVALANCHEMODIFIERS_API UAvaMirrorModifier(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaMirrorModifier(UAvaMirrorModifier&&); \
	UAvaMirrorModifier(const UAvaMirrorModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaMirrorModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMirrorModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMirrorModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaMirrorModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMirrorModifier_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMirrorModifier_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMirrorModifier_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMirrorModifier_h_14_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMirrorModifier_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMirrorModifier_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaMirrorModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMirrorModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
