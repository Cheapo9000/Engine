// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/Mix/MixSettings.h"

#ifdef TEXTUREGRAPHENGINE_MixSettings_generated_h
#error "MixSettings.generated.h already included, missing '#pragma once' in MixSettings.h"
#endif
#define TEXTUREGRAPHENGINE_MixSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMixSettings *************************************************************
struct Z_Construct_UClass_UMixSettings_Statics;
TEXTUREGRAPHENGINE_API UClass* Z_Construct_UClass_UMixSettings_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixSettings_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMixSettings(); \
	friend struct ::Z_Construct_UClass_UMixSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHENGINE_API UClass* ::Z_Construct_UClass_UMixSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UMixSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEngine"), Z_Construct_UClass_UMixSettings_NoRegister) \
	DECLARE_SERIALIZER(UMixSettings)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixSettings_h_113_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPHENGINE_API UMixSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMixSettings(UMixSettings&&) = delete; \
	UMixSettings(const UMixSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPHENGINE_API, UMixSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMixSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMixSettings)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixSettings_h_110_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixSettings_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixSettings_h_113_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixSettings_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMixSettings;

// ********** End Class UMixSettings ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEngine_Model_Mix_MixSettings_h

// ********** Begin Enum PBRWorkflowMode ***********************************************************
#define FOREACH_ENUM_PBRWORKFLOWMODE(op) \
	op(PBRWorkflowMode::Specular) \
	op(PBRWorkflowMode::Metalness) \
	op(PBRWorkflowMode::Both) 

enum class PBRWorkflowMode;
template<> struct TIsUEnumClass<PBRWorkflowMode> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<PBRWorkflowMode>();
// ********** End Enum PBRWorkflowMode *************************************************************

// ********** Begin Enum ETileSize *****************************************************************
#define FOREACH_ENUM_ETILESIZE(op) \
	op(ETileSize::Tile1) \
	op(ETileSize::Tile2) \
	op(ETileSize::Tile4) \
	op(ETileSize::Tile8) \
	op(ETileSize::Tile16) 

enum class ETileSize;
template<> struct TIsUEnumClass<ETileSize> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETileSize>();
// ********** End Enum ETileSize *******************************************************************

// ********** Begin Enum EResolution ***************************************************************
#define FOREACH_ENUM_ERESOLUTION(op) \
	op(EResolution::Auto) \
	op(EResolution::Resolution8) \
	op(EResolution::Resolution16) \
	op(EResolution::Resolution32) \
	op(EResolution::Resolution64) \
	op(EResolution::Resolution128) \
	op(EResolution::Resolution256) \
	op(EResolution::Resolution512) \
	op(EResolution::Resolution1024) \
	op(EResolution::Resolution2048) \
	op(EResolution::Resolution4096) \
	op(EResolution::Resolution8192) 

enum class EResolution;
template<> struct TIsUEnumClass<EResolution> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EResolution>();
// ********** End Enum EResolution *****************************************************************

// ********** Begin Enum ETSBufferFormat ***********************************************************
#define FOREACH_ENUM_ETSBUFFERFORMAT(op) \
	op(ETSBufferFormat::Auto) \
	op(ETSBufferFormat::Byte) \
	op(ETSBufferFormat::Half) \
	op(ETSBufferFormat::Float) 

enum class ETSBufferFormat;
template<> struct TIsUEnumClass<ETSBufferFormat> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETSBufferFormat>();
// ********** End Enum ETSBufferFormat *************************************************************

// ********** Begin Enum ETSBufferChannels *********************************************************
#define FOREACH_ENUM_ETSBUFFERCHANNELS(op) \
	op(ETSBufferChannels::Auto) \
	op(ETSBufferChannels::One) \
	op(ETSBufferChannels::Two) \
	op(ETSBufferChannels::Three) \
	op(ETSBufferChannels::Four) 

enum class ETSBufferChannels;
template<> struct TIsUEnumClass<ETSBufferChannels> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETSBufferChannels>();
// ********** End Enum ETSBufferChannels ***********************************************************

// ********** Begin Enum ETG_TextureFormat *********************************************************
#define FOREACH_ENUM_ETG_TEXTUREFORMAT(op) \
	op(ETG_TextureFormat::Auto) \
	op(ETG_TextureFormat::G8) \
	op(ETG_TextureFormat::BGRA8) \
	op(ETG_TextureFormat::R16F) \
	op(ETG_TextureFormat::RGBA16F) \
	op(ETG_TextureFormat::R32F) \
	op(ETG_TextureFormat::RGBA32F) 

enum class ETG_TextureFormat : uint8;
template<> struct TIsUEnumClass<ETG_TextureFormat> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETG_TextureFormat>();
// ********** End Enum ETG_TextureFormat ***********************************************************

// ********** Begin Enum ETG_TexturePresetType *****************************************************
#define FOREACH_ENUM_ETG_TEXTUREPRESETTYPE(op) \
	op(ETG_TexturePresetType::None) \
	op(ETG_TexturePresetType::Diffuse) \
	op(ETG_TexturePresetType::Emissive) \
	op(ETG_TexturePresetType::FX) \
	op(ETG_TexturePresetType::Normal) \
	op(ETG_TexturePresetType::MaskComp) \
	op(ETG_TexturePresetType::Specular) \
	op(ETG_TexturePresetType::Tangent) 

enum class ETG_TexturePresetType : uint8;
template<> struct TIsUEnumClass<ETG_TexturePresetType> { enum { Value = true }; };
template<> TEXTUREGRAPHENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ETG_TexturePresetType>();
// ********** End Enum ETG_TexturePresetType *******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
