// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/AvaMaterialParameterModifier.h"

#ifdef AVALANCHEMODIFIERS_AvaMaterialParameterModifier_generated_h
#error "AvaMaterialParameterModifier.generated.h already included, missing '#pragma once' in AvaMaterialParameterModifier.h"
#endif
#define AVALANCHEMODIFIERS_AvaMaterialParameterModifier_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAvaMaterialParameterMap;

// ********** Begin ScriptStruct FAvaMaterialParameterMapScalar ************************************
struct Z_Construct_UScriptStruct_FAvaMaterialParameterMapScalar_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaMaterialParameterMapScalar_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


struct FAvaMaterialParameterMapScalar;
// ********** End ScriptStruct FAvaMaterialParameterMapScalar **************************************

// ********** Begin ScriptStruct FAvaMaterialParameterMapVector ************************************
struct Z_Construct_UScriptStruct_FAvaMaterialParameterMapVector_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaMaterialParameterMapVector_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


struct FAvaMaterialParameterMapVector;
// ********** End ScriptStruct FAvaMaterialParameterMapVector **************************************

// ********** Begin ScriptStruct FAvaMaterialParameterMapTexture ***********************************
struct Z_Construct_UScriptStruct_FAvaMaterialParameterMapTexture_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_40_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaMaterialParameterMapTexture_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


struct FAvaMaterialParameterMapTexture;
// ********** End ScriptStruct FAvaMaterialParameterMapTexture *************************************

// ********** Begin ScriptStruct FAvaMaterialParameterMap ******************************************
struct Z_Construct_UScriptStruct_FAvaMaterialParameterMap_Statics;
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAvaMaterialParameterMap_Statics; \
	AVALANCHEMODIFIERS_API static class UScriptStruct* StaticStruct();


struct FAvaMaterialParameterMap;
// ********** End ScriptStruct FAvaMaterialParameterMap ********************************************

// ********** Begin Class UAvaMaterialParameterModifier ********************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUpdateChildren); \
	DECLARE_FUNCTION(execSetUpdateChildren); \
	DECLARE_FUNCTION(execGetMaterialParameters); \
	DECLARE_FUNCTION(execSetMaterialParameters);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_127_ACCESSORS \
static void GetMaterialParameters_WrapperImpl(const void* Object, void* OutValue); \
static void SetMaterialParameters_WrapperImpl(void* Object, const void* InValue); \
static void GetbUpdateChildren_WrapperImpl(const void* Object, void* OutValue); \
static void SetbUpdateChildren_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaMaterialParameterModifier_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaMaterialParameterModifier_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaMaterialParameterModifier(); \
	friend struct ::Z_Construct_UClass_UAvaMaterialParameterModifier_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaMaterialParameterModifier_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaMaterialParameterModifier, UActorModifierArrangeBaseModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaMaterialParameterModifier_NoRegister) \
	DECLARE_SERIALIZER(UAvaMaterialParameterModifier)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_127_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaMaterialParameterModifier(UAvaMaterialParameterModifier&&) = delete; \
	UAvaMaterialParameterModifier(const UAvaMaterialParameterModifier&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AVALANCHEMODIFIERS_API, UAvaMaterialParameterModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaMaterialParameterModifier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAvaMaterialParameterModifier) \
	AVALANCHEMODIFIERS_API virtual ~UAvaMaterialParameterModifier();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_124_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_127_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaMaterialParameterModifier;

// ********** End Class UAvaMaterialParameterModifier **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Modifiers_AvaMaterialParameterModifier_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
