// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaMaterialParameterModifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAvaMaterialParameterMap;
#ifdef AVALANCHEMODIFIERS_AvaMaterialParameterModifier_generated_h
#error "AvaMaterialParameterModifier.generated.h already included, missing '#pragma once' in AvaMaterialParameterModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaMaterialParameterModifier_generated_h

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvaMaterialParameterMap_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


template<> AVALANCHEMODIFIERS_API UScriptStruct* StaticStruct<struct FAvaMaterialParameterMap>();

#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUpdateChildren); \
	DECLARE_FUNCTION(execSetUpdateChildren); \
	DECLARE_FUNCTION(execGetMaterialParameters); \
	DECLARE_FUNCTION(execSetMaterialParameters);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_40_ACCESSORS \
static void GetMaterialParameters_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaterialParameters_WrapperImpl(void* Object, const void* InValue); \
static void GetbUpdateChildren_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUpdateChildren_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMaterialParameterModifier(); \
	friend struct Z_Construct_UClass_UAvaMaterialParameterModifier_Statics; \
public: \
	DECLARE_CLASS(UAvaMaterialParameterModifier, UAvaArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), AVALANCHEMODIFIERS_API) \
	DECLARE_SERIALIZER(UAvaMaterialParameterModifier)


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAvaMaterialParameterModifier(UAvaMaterialParameterModifier&&); \
	UAvaMaterialParameterModifier(const UAvaMaterialParameterModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaMaterialParameterModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMaterialParameterModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMaterialParameterModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaMaterialParameterModifier();


#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_37_PROLOG
#define FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_40_ACCESSORS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AVALANCHEMODIFIERS_API UClass* StaticClass<class UAvaMaterialParameterModifier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
