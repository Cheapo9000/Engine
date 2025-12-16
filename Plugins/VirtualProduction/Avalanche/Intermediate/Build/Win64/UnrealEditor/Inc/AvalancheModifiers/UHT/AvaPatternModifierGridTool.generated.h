// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/AvaPatternModifierGridTool.h"

#ifdef AVALANCHEMODIFIERS_AvaPatternModifierGridTool_generated_h
#error "AvaPatternModifierGridTool.generated.h already included, missing '#pragma once' in AvaPatternModifierGridTool.h"
#endif
#define AVALANCHEMODIFIERS_AvaPatternModifierGridTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaPatternModifierGridAlignment : uint8;
enum class EAvaPatternModifierPlane : uint8;

// ********** Begin Class UAvaPatternModifierGridTool **********************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierGridTool_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetGridScale); \
	DECLARE_FUNCTION(execGetGridScale); \
	DECLARE_FUNCTION(execSetGridRotation); \
	DECLARE_FUNCTION(execGetGridRotation); \
	DECLARE_FUNCTION(execSetGridAccumulateTransform); \
	DECLARE_FUNCTION(execGetGridAccumulateTransform); \
	DECLARE_FUNCTION(execSetGridSpacingY); \
	DECLARE_FUNCTION(execGetGridSpacingY); \
	DECLARE_FUNCTION(execSetGridSpacingX); \
	DECLARE_FUNCTION(execGetGridSpacingX); \
	DECLARE_FUNCTION(execSetGridCountY); \
	DECLARE_FUNCTION(execGetGridCountY); \
	DECLARE_FUNCTION(execSetGridCountX); \
	DECLARE_FUNCTION(execGetGridCountX); \
	DECLARE_FUNCTION(execSetGridAlignment); \
	DECLARE_FUNCTION(execGetGridAlignment); \
	DECLARE_FUNCTION(execSetGridPlane); \
	DECLARE_FUNCTION(execGetGridPlane);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierGridTool_h_13_ACCESSORS \
static void GetGridPlane_WrapperImpl(const void* Object, void* OutValue); \
static void SetGridPlane_WrapperImpl(void* Object, const void* InValue); \
static void GetGridAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetGridAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetGridCountX_WrapperImpl(const void* Object, void* OutValue); \
static void SetGridCountX_WrapperImpl(void* Object, const void* InValue); \
static void GetGridCountY_WrapperImpl(const void* Object, void* OutValue); \
static void SetGridCountY_WrapperImpl(void* Object, const void* InValue); \
static void GetGridSpacingX_WrapperImpl(const void* Object, void* OutValue); \
static void SetGridSpacingX_WrapperImpl(void* Object, const void* InValue); \
static void GetGridSpacingY_WrapperImpl(const void* Object, void* OutValue); \
static void SetGridSpacingY_WrapperImpl(void* Object, const void* InValue); \
static void GetbGridAccumulateTransform_WrapperImpl(const void* Object, void* OutValue); \
static void SetbGridAccumulateTransform_WrapperImpl(void* Object, const void* InValue); \
static void GetGridRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetGridRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetGridScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetGridScale_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaPatternModifierGridTool_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaPatternModifierGridTool_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierGridTool_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPatternModifierGridTool(); \
	friend struct ::Z_Construct_UClass_UAvaPatternModifierGridTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaPatternModifierGridTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPatternModifierGridTool, UAvaPatternModifierTool, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaPatternModifierGridTool_NoRegister) \
	DECLARE_SERIALIZER(UAvaPatternModifierGridTool)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierGridTool_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPatternModifierGridTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPatternModifierGridTool(UAvaPatternModifierGridTool&&) = delete; \
	UAvaPatternModifierGridTool(const UAvaPatternModifierGridTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPatternModifierGridTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPatternModifierGridTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPatternModifierGridTool) \
	NO_API virtual ~UAvaPatternModifierGridTool();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierGridTool_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierGridTool_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierGridTool_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierGridTool_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierGridTool_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierGridTool_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPatternModifierGridTool;

// ********** End Class UAvaPatternModifierGridTool ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierGridTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
