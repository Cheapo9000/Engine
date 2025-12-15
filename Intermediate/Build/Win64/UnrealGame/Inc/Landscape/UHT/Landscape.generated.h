// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Landscape.h"

#ifdef LANDSCAPE_Landscape_generated_h
#error "Landscape.generated.h already included, missing '#pragma once' in Landscape.h"
#endif
#define LANDSCAPE_Landscape_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget;
class UTextureRenderTarget2D;

// ********** Begin ScriptStruct FLandscapeLayerBrush **********************************************
struct Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_123_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeLayerBrush;
// ********** End ScriptStruct FLandscapeLayerBrush ************************************************

// ********** Begin ScriptStruct FLandscapeLayer ***************************************************
struct Z_Construct_UScriptStruct_FLandscapeLayer_Statics;
#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_170_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeLayer_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


struct FLandscapeLayer;
// ********** End ScriptStruct FLandscapeLayer *****************************************************

// ********** Begin Class ALandscape ***************************************************************
#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_281_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTargetLayerNames); \
	DECLARE_FUNCTION(execRenderWeightmaps); \
	DECLARE_FUNCTION(execRenderWeightmap); \
	DECLARE_FUNCTION(execRenderHeightmap);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_281_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execForceLayersFullUpdate);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_281_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_ALandscape_Statics;
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();

#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_281_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscape(); \
	friend struct ::Z_Construct_UClass_ALandscape_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPE_API UClass* ::Z_Construct_UClass_ALandscape_NoRegister(); \
public: \
	DECLARE_CLASS2(ALandscape, ALandscapeProxy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), Z_Construct_UClass_ALandscape_NoRegister) \
	DECLARE_SERIALIZER(ALandscape)


#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_281_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALandscape(ALandscape&&) = delete; \
	ALandscape(const ALandscape&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscape); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscape) \
	LANDSCAPE_API virtual ~ALandscape();


#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_275_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_281_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_281_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_281_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_281_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_281_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALandscape;

// ********** End Class ALandscape *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h

// ********** Begin Enum ERTDrawingType ************************************************************
#define FOREACH_ENUM_ERTDRAWINGTYPE(op) \
	op(ERTDrawingType::RTAtlas) \
	op(ERTDrawingType::RTAtlasToNonAtlas) \
	op(ERTDrawingType::RTNonAtlasToAtlas) \
	op(ERTDrawingType::RTNonAtlas) \
	op(ERTDrawingType::RTMips) 

enum class ERTDrawingType : uint8;
template<> struct TIsUEnumClass<ERTDrawingType> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ERTDrawingType>();
// ********** End Enum ERTDrawingType **************************************************************

// ********** Begin Enum EHeightmapRTType **********************************************************
#define FOREACH_ENUM_EHEIGHTMAPRTTYPE(op) \
	op(EHeightmapRTType::HeightmapRT_CombinedAtlas) \
	op(EHeightmapRTType::HeightmapRT_CombinedNonAtlas) \
	op(EHeightmapRTType::HeightmapRT_Scratch1) \
	op(EHeightmapRTType::HeightmapRT_Scratch2) \
	op(EHeightmapRTType::HeightmapRT_Scratch3) \
	op(EHeightmapRTType::HeightmapRT_Mip1) \
	op(EHeightmapRTType::HeightmapRT_Mip2) \
	op(EHeightmapRTType::HeightmapRT_Mip3) \
	op(EHeightmapRTType::HeightmapRT_Mip4) \
	op(EHeightmapRTType::HeightmapRT_Mip5) \
	op(EHeightmapRTType::HeightmapRT_Mip6) \
	op(EHeightmapRTType::HeightmapRT_Mip7) \
	op(EHeightmapRTType::HeightmapRT_Count) 

enum class EHeightmapRTType : uint8;
template<> struct TIsUEnumClass<EHeightmapRTType> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<EHeightmapRTType>();
// ********** End Enum EHeightmapRTType ************************************************************

// ********** Begin Enum EWeightmapRTType **********************************************************
#define FOREACH_ENUM_EWEIGHTMAPRTTYPE(op) \
	op(EWeightmapRTType::WeightmapRT_Scratch_RGBA) \
	op(EWeightmapRTType::WeightmapRT_Scratch1) \
	op(EWeightmapRTType::WeightmapRT_Scratch2) \
	op(EWeightmapRTType::WeightmapRT_Scratch3) \
	op(EWeightmapRTType::WeightmapRT_Mip0) \
	op(EWeightmapRTType::WeightmapRT_Mip1) \
	op(EWeightmapRTType::WeightmapRT_Mip2) \
	op(EWeightmapRTType::WeightmapRT_Mip3) \
	op(EWeightmapRTType::WeightmapRT_Mip4) \
	op(EWeightmapRTType::WeightmapRT_Mip5) \
	op(EWeightmapRTType::WeightmapRT_Mip6) \
	op(EWeightmapRTType::WeightmapRT_Mip7) \
	op(EWeightmapRTType::WeightmapRT_Count) 

enum class EWeightmapRTType : uint8;
template<> struct TIsUEnumClass<EWeightmapRTType> { enum { Value = true }; };
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<EWeightmapRTType>();
// ********** End Enum EWeightmapRTType ************************************************************

// ********** Begin Enum ELandscapeBlendMode *******************************************************
#define FOREACH_ENUM_ELANDSCAPEBLENDMODE(op) \
	op(LSBM_AdditiveBlend) \
	op(LSBM_AlphaBlend) 

enum ELandscapeBlendMode : int;
template<> LANDSCAPE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeBlendMode>();
// ********** End Enum ELandscapeBlendMode *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
