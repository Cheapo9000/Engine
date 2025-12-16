// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tools/AvaPatternModifierCircleTool.h"

#ifdef AVALANCHEMODIFIERS_AvaPatternModifierCircleTool_generated_h
#error "AvaPatternModifierCircleTool.generated.h already included, missing '#pragma once' in AvaPatternModifierCircleTool.h"
#endif
#define AVALANCHEMODIFIERS_AvaPatternModifierCircleTool_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAvaPatternModifierPlane : uint8;

// ********** Begin Class UAvaPatternModifierCircleTool ********************************************
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierCircleTool_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCircleScale); \
	DECLARE_FUNCTION(execGetCircleScale); \
	DECLARE_FUNCTION(execSetCircleRotation); \
	DECLARE_FUNCTION(execGetCircleRotation); \
	DECLARE_FUNCTION(execSetCircleAccumulateTransform); \
	DECLARE_FUNCTION(execGetCircleAccumulateTransform); \
	DECLARE_FUNCTION(execSetCircleCount); \
	DECLARE_FUNCTION(execGetCircleCount); \
	DECLARE_FUNCTION(execSetCircleFullAngle); \
	DECLARE_FUNCTION(execGetCircleFullAngle); \
	DECLARE_FUNCTION(execSetCircleStartAngle); \
	DECLARE_FUNCTION(execGetCircleStartAngle); \
	DECLARE_FUNCTION(execSetCircleRadius); \
	DECLARE_FUNCTION(execGetCircleRadius); \
	DECLARE_FUNCTION(execSetCirclePlane); \
	DECLARE_FUNCTION(execGetCirclePlane);


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierCircleTool_h_13_ACCESSORS \
static void GetCirclePlane_WrapperImpl(const void* Object, void* OutValue); \
static void SetCirclePlane_WrapperImpl(void* Object, const void* InValue); \
static void GetCircleRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetCircleRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetCircleStartAngle_WrapperImpl(const void* Object, void* OutValue); \
static void SetCircleStartAngle_WrapperImpl(void* Object, const void* InValue); \
static void GetCircleFullAngle_WrapperImpl(const void* Object, void* OutValue); \
static void SetCircleFullAngle_WrapperImpl(void* Object, const void* InValue); \
static void GetCircleCount_WrapperImpl(const void* Object, void* OutValue); \
static void SetCircleCount_WrapperImpl(void* Object, const void* InValue); \
static void GetbCircleAccumulateTransform_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCircleAccumulateTransform_WrapperImpl(void* Object, const void* InValue); \
static void GetCircleRotation_WrapperImpl(const void* Object, void* OutValue); \
static void SetCircleRotation_WrapperImpl(void* Object, const void* InValue); \
static void GetCircleScale_WrapperImpl(const void* Object, void* OutValue); \
static void SetCircleScale_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UAvaPatternModifierCircleTool_Statics;
AVALANCHEMODIFIERS_API UClass* Z_Construct_UClass_UAvaPatternModifierCircleTool_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierCircleTool_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAvaPatternModifierCircleTool(); \
	friend struct ::Z_Construct_UClass_UAvaPatternModifierCircleTool_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AVALANCHEMODIFIERS_API UClass* ::Z_Construct_UClass_UAvaPatternModifierCircleTool_NoRegister(); \
public: \
	DECLARE_CLASS2(UAvaPatternModifierCircleTool, UAvaPatternModifierTool, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AvalancheModifiers"), Z_Construct_UClass_UAvaPatternModifierCircleTool_NoRegister) \
	DECLARE_SERIALIZER(UAvaPatternModifierCircleTool)


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierCircleTool_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAvaPatternModifierCircleTool(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAvaPatternModifierCircleTool(UAvaPatternModifierCircleTool&&) = delete; \
	UAvaPatternModifierCircleTool(const UAvaPatternModifierCircleTool&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAvaPatternModifierCircleTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAvaPatternModifierCircleTool); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAvaPatternModifierCircleTool) \
	NO_API virtual ~UAvaPatternModifierCircleTool();


#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierCircleTool_h_10_PROLOG
#define FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierCircleTool_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierCircleTool_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierCircleTool_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierCircleTool_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierCircleTool_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAvaPatternModifierCircleTool;

// ********** End Class UAvaPatternModifierCircleTool **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_Avalanche_Source_AvalancheModifiers_Public_Tools_AvaPatternModifierCircleTool_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
