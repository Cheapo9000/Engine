// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeBlueprintBrushBase.h"

#ifdef LANDSCAPE_LandscapeBlueprintBrushBase_generated_h
#error "LandscapeBlueprintBrushBase.generated.h already included, missing '#pragma once' in LandscapeBlueprintBrushBase.h"
#endif
#define LANDSCAPE_LandscapeBlueprintBrushBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTextureRenderTarget2D;
struct FLandscapeBrushParameters;

// ********** Begin ScriptStruct FLandscapeBrushParameters *****************************************
struct Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics;
#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_18_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeBrushParameters;
// ********** End ScriptStruct FLandscapeBrushParameters *******************************************

// ********** Begin Class ALandscapeBlueprintBrushBase *********************************************
#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_47_RPC_WRAPPERS \
	LANDSCAPE_API virtual void Initialize_Implementation(FTransform const& InLandscapeTransform, FIntPoint const& InLandscapeSize, FIntPoint const& InLandscapeRenderTargetSize); \
	LANDSCAPE_API virtual UTextureRenderTarget2D* RenderLayer_Implementation(FLandscapeBrushParameters const& InParameters); \
	LANDSCAPE_API virtual UTextureRenderTarget2D* Render_Implementation(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName const& InWeightmapLayerName); \
	DECLARE_FUNCTION(execRequestLandscapeUpdate); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execRenderLayer); \
	DECLARE_FUNCTION(execRender);


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_47_ACCESSORS \
static void SetAffectHeightmap_WrapperImpl(void* Object, const void* InValue); \
static void SetAffectWeightmap_WrapperImpl(void* Object, const void* InValue); \
static void SetAffectVisibilityLayer_WrapperImpl(void* Object, const void* InValue); \
static void SetbUsePowerOfTwoRenderTarget_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_47_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_47_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeBlueprintBrushBase(); \
	friend struct ::Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister(); \
public: \
	DECLARE_CLASS2(ALandscapeBlueprintBrushBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister) \
	DECLARE_SERIALIZER(ALandscapeBlueprintBrushBase)


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeBlueprintBrushBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeBlueprintBrushBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeBlueprintBrushBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeBlueprintBrushBase); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALandscapeBlueprintBrushBase(ALandscapeBlueprintBrushBase&&) = delete; \
	ALandscapeBlueprintBrushBase(const ALandscapeBlueprintBrushBase&) = delete; \
	LANDSCAPE_API virtual ~ALandscapeBlueprintBrushBase();


#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_40_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_47_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_47_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_47_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_47_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALandscapeBlueprintBrushBase;

// ********** End Class ALandscapeBlueprintBrushBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
