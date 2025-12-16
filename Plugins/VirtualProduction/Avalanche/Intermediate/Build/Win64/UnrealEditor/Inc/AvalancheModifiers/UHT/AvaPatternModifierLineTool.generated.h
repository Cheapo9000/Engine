// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/AvaPatternModifierLineTool.h"

#ifdef AVALANCHEMODIFIERS_AvaPatternModifierLineTool_generated_h
#error "AvaPatternModifierLineTool.generated.h already included, missing '#pragma once' in AvaPatternModifierLineTool.h"
#endif
#define AVALANCHEMODIFIERS_AvaPatternModifierLineTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaPatternModifierAxis : uint8;
enum class EAvaPatternModifierLineAlignment : uint8;

// ********** Begin Class UAvaPatternModifierLineTool **********************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierLineTool_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetLineScale); \
	DECLARE_FUNCTION(execGetLineScale); \
	DECLARE_FUNCTION(execSetLineRotation); \
	DECLARE_FUNCTION(execGetLineRotation); \
	DECLARE_FUNCTION(execSetLineAccumulateTransform); \
	DECLARE_FUNCTION(execGetLineAccumulateTransform); \
	DECLARE_FUNCTION(execSetLineSpacing); \
	DECLARE_FUNCTION(execGetLineSpacing); \
	DECLARE_FUNCTION(execSetLineCount); \
	DECLARE_FUNCTION(execGetLineCount); \
	DECLARE_FUNCTION(execSetLineAlignment); \
	DECLARE_FUNCTION(execGetLineAlignment); \
	DECLARE_FUNCTION(execSetLineAxis); \
	DECLARE_FUNCTION(execGetLineAxis);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierLineTool_h_13_ACCESSORS \
static void GetLineAxis_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineAxis_WrapperImpl(void* Object, const void* InValue); \
static void GetLineAlignment_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineAlignment_WrapperImpl(void* Object, const void* InValue); \
static void GetLineCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineCount_WrapperImpl(void* Object, const void* InValue); \
static void GetLineSpacing_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineSpacing_WrapperImpl(void* Object, const void* InValue); \
static void GetbLineAccumulateTransform_WrapperImpl(const void* Object, void* OutValue); \
static void SetbLineAccumulateTransform_WrapperImpl(void* Object, const void* InValue); \
static void GetLineRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetLineScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetLineScale_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaPatternModifierLineTool_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaPatternModifierLineTool_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierLineTool_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPatternModifierLineTool(); \
	friend struct ::Z_Construct_UClass_UAvaPatternModifierLineTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaPatternModifierLineTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPatternModifierLineTool, UAvaPatternModifierTool, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaPatternModifierLineTool_NoRegister) \
	DECLARE_SERIALIZER(UAvaPatternModifierLineTool)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierLineTool_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPatternModifierLineTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPatternModifierLineTool(UAvaPatternModifierLineTool&&) = delete; \
	UAvaPatternModifierLineTool(const UAvaPatternModifierLineTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPatternModifierLineTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPatternModifierLineTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPatternModifierLineTool) \
	NO_API virtual ~UAvaPatternModifierLineTool();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierLineTool_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierLineTool_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierLineTool_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierLineTool_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierLineTool_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierLineTool_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPatternModifierLineTool;

// ********** End Class UAvaPatternModifierLineTool ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierLineTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
