// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeTexturePatch.h"

#ifdef LANDSCAPEPATCH_LandscapeTexturePatch_generated_h
#error "LandscapeTexturePatch.generated.h already included, missing '#pragma once' in LandscapeTexturePatch.h"
#endif
#define LANDSCAPEPATCH_LandscapeTexturePatch_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
class UTextureRenderTarget2D;
enum class ELandscapeTextureHeightPatchEncoding : uint8;
enum class ELandscapeTextureHeightPatchZeroHeightMeaning : uint8;
enum class ELandscapeTexturePatchBlendMode : uint8;
enum class ELandscapeTexturePatchFalloffMode : uint8;
enum class ELandscapeTexturePatchSourceMode : uint8;
struct FLandscapeTexturePatchEncodingSettings;

// ********** Begin ScriptStruct FLandscapeTexturePatchEncodingSettings ****************************
struct Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics;
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_134_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FLandscapeTexturePatchEncodingSettings_Statics; \
	LANDSCAPEPATCH_API static class UScriptStruct* StaticStruct();


struct FLandscapeTexturePatchEncodingSettings;
// ********** End ScriptStruct FLandscapeTexturePatchEncodingSettings ******************************

// ********** Begin Class ULandscapeWeightPatchTextureInfo *****************************************
struct Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics;
LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_NoRegister();

#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_161_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeWeightPatchTextureInfo(); \
	friend struct ::Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPEPATCH_API UClass* ::Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeWeightPatchTextureInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LandscapePatch"), Z_Construct_UClass_ULandscapeWeightPatchTextureInfo_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeWeightPatchTextureInfo)


#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_161_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPEPATCH_API ULandscapeWeightPatchTextureInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeWeightPatchTextureInfo(ULandscapeWeightPatchTextureInfo&&) = delete; \
	ULandscapeWeightPatchTextureInfo(const ULandscapeWeightPatchTextureInfo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPEPATCH_API, ULandscapeWeightPatchTextureInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeWeightPatchTextureInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeWeightPatchTextureInfo) \
	LANDSCAPEPATCH_API virtual ~ULandscapeWeightPatchTextureInfo();


#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_158_PROLOG
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_161_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_161_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeWeightPatchTextureInfo;

// ********** End Class ULandscapeWeightPatchTextureInfo *******************************************

// ********** Begin Class ULandscapeTexturePatch ***************************************************
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSnapToLandscape); \
	DECLARE_FUNCTION(execRequestReinitializeWeights); \
	DECLARE_FUNCTION(execRequestReinitializeHeight); \
	DECLARE_FUNCTION(execSetEditVisibilityLayer); \
	DECLARE_FUNCTION(execClearWeightPatchBlendModeOverride); \
	DECLARE_FUNCTION(execSetWeightPatchBlendModeOverride); \
	DECLARE_FUNCTION(execSetUseAlphaChannelForWeightPatch); \
	DECLARE_FUNCTION(execGetWeightPatchRenderTarget); \
	DECLARE_FUNCTION(execSetWeightPatchTextureAsset); \
	DECLARE_FUNCTION(execSetWeightPatchSourceMode); \
	DECLARE_FUNCTION(execGetWeightPatchTextureAsset); \
	DECLARE_FUNCTION(execGetWeightPatchSourceMode); \
	DECLARE_FUNCTION(execGetAllWeightPatchLayerNames); \
	DECLARE_FUNCTION(execDisableAllWeightPatches); \
	DECLARE_FUNCTION(execRemoveAllWeightPatches); \
	DECLARE_FUNCTION(execRemoveWeightPatch); \
	DECLARE_FUNCTION(execAddWeightPatch); \
	DECLARE_FUNCTION(execSetZeroHeightMeaning); \
	DECLARE_FUNCTION(execSetHeightEncodingSettings); \
	DECLARE_FUNCTION(execResetHeightEncodingMode); \
	DECLARE_FUNCTION(execSetHeightEncodingMode); \
	DECLARE_FUNCTION(execSetUseAlphaChannelForHeight); \
	DECLARE_FUNCTION(execSetHeightRenderTargetFormat); \
	DECLARE_FUNCTION(execGetHeightRenderTarget); \
	DECLARE_FUNCTION(execSetHeightTextureAsset); \
	DECLARE_FUNCTION(execSetHeightSourceMode); \
	DECLARE_FUNCTION(execGetHeightSourceMode); \
	DECLARE_FUNCTION(execSetBlendMode); \
	DECLARE_FUNCTION(execGetBlendMode); \
	DECLARE_FUNCTION(execSetFalloffMode); \
	DECLARE_FUNCTION(execGetFalloffMode); \
	DECLARE_FUNCTION(execSetFalloff); \
	DECLARE_FUNCTION(execGetFalloff); \
	DECLARE_FUNCTION(execGetInitResolutionFromLandscape); \
	DECLARE_FUNCTION(execSetResolution); \
	DECLARE_FUNCTION(execGetResolution); \
	DECLARE_FUNCTION(execGetFullUnscaledWorldSize); \
	DECLARE_FUNCTION(execSetUnscaledCoverage); \
	DECLARE_FUNCTION(execGetUnscaledCoverage); \
	DECLARE_FUNCTION(execGetPatchToWorldTransform);


#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_227_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeTexturePatch, LANDSCAPEPATCH_API)


struct Z_Construct_UClass_ULandscapeTexturePatch_Statics;
LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeTexturePatch_NoRegister();

#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_227_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeTexturePatch(); \
	friend struct ::Z_Construct_UClass_ULandscapeTexturePatch_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend LANDSCAPEPATCH_API UClass* ::Z_Construct_UClass_ULandscapeTexturePatch_NoRegister(); \
public: \
	DECLARE_CLASS2(ULandscapeTexturePatch, ULandscapePatchComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LandscapePatch"), Z_Construct_UClass_ULandscapeTexturePatch_NoRegister) \
	DECLARE_SERIALIZER(ULandscapeTexturePatch) \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_227_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_227_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPEPATCH_API ULandscapeTexturePatch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULandscapeTexturePatch(ULandscapeTexturePatch&&) = delete; \
	ULandscapeTexturePatch(const ULandscapeTexturePatch&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPEPATCH_API, ULandscapeTexturePatch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeTexturePatch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeTexturePatch) \
	LANDSCAPEPATCH_API virtual ~ULandscapeTexturePatch();


#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_224_PROLOG
#define FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_227_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_227_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h_227_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULandscapeTexturePatch;

// ********** End Class ULandscapeTexturePatch *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_LandscapePatch_Source_LandscapePatch_Public_LandscapeTexturePatch_h

// ********** Begin Enum ELandscapeTexturePatchSourceMode ******************************************
#define FOREACH_ENUM_ELANDSCAPETEXTUREPATCHSOURCEMODE(op) \
	op(ELandscapeTexturePatchSourceMode::None) \
	op(ELandscapeTexturePatchSourceMode::InternalTexture) \
	op(ELandscapeTexturePatchSourceMode::TextureBackedRenderTarget) \
	op(ELandscapeTexturePatchSourceMode::TextureAsset) 

enum class ELandscapeTexturePatchSourceMode : uint8;
template<> struct TIsUEnumClass<ELandscapeTexturePatchSourceMode> { enum { Value = true }; };
template<> LANDSCAPEPATCH_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeTexturePatchSourceMode>();
// ********** End Enum ELandscapeTexturePatchSourceMode ********************************************

// ********** Begin Enum ELandscapeTexturePatchBlendMode *******************************************
#define FOREACH_ENUM_ELANDSCAPETEXTUREPATCHBLENDMODE(op) \
	op(ELandscapeTexturePatchBlendMode::AlphaBlend) \
	op(ELandscapeTexturePatchBlendMode::Additive) \
	op(ELandscapeTexturePatchBlendMode::Min) \
	op(ELandscapeTexturePatchBlendMode::Max) 

enum class ELandscapeTexturePatchBlendMode : uint8;
template<> struct TIsUEnumClass<ELandscapeTexturePatchBlendMode> { enum { Value = true }; };
template<> LANDSCAPEPATCH_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeTexturePatchBlendMode>();
// ********** End Enum ELandscapeTexturePatchBlendMode *********************************************

// ********** Begin Enum ELandscapeTexturePatchFalloffMode *****************************************
#define FOREACH_ENUM_ELANDSCAPETEXTUREPATCHFALLOFFMODE(op) \
	op(ELandscapeTexturePatchFalloffMode::Circle) \
	op(ELandscapeTexturePatchFalloffMode::RoundedRectangle) 

enum class ELandscapeTexturePatchFalloffMode : uint8;
template<> struct TIsUEnumClass<ELandscapeTexturePatchFalloffMode> { enum { Value = true }; };
template<> LANDSCAPEPATCH_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeTexturePatchFalloffMode>();
// ********** End Enum ELandscapeTexturePatchFalloffMode *******************************************

// ********** Begin Enum ELandscapeTextureHeightPatchEncoding **************************************
#define FOREACH_ENUM_ELANDSCAPETEXTUREHEIGHTPATCHENCODING(op) \
	op(ELandscapeTextureHeightPatchEncoding::ZeroToOne) \
	op(ELandscapeTextureHeightPatchEncoding::WorldUnits) \
	op(ELandscapeTextureHeightPatchEncoding::NativePackedHeight) 

enum class ELandscapeTextureHeightPatchEncoding : uint8;
template<> struct TIsUEnumClass<ELandscapeTextureHeightPatchEncoding> { enum { Value = true }; };
template<> LANDSCAPEPATCH_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeTextureHeightPatchEncoding>();
// ********** End Enum ELandscapeTextureHeightPatchEncoding ****************************************

// ********** Begin Enum ELandscapeTextureHeightPatchZeroHeightMeaning *****************************
#define FOREACH_ENUM_ELANDSCAPETEXTUREHEIGHTPATCHZEROHEIGHTMEANING(op) \
	op(ELandscapeTextureHeightPatchZeroHeightMeaning::PatchZ) \
	op(ELandscapeTextureHeightPatchZeroHeightMeaning::LandscapeZ) \
	op(ELandscapeTextureHeightPatchZeroHeightMeaning::WorldZero) 

enum class ELandscapeTextureHeightPatchZeroHeightMeaning : uint8;
template<> struct TIsUEnumClass<ELandscapeTextureHeightPatchZeroHeightMeaning> { enum { Value = true }; };
template<> LANDSCAPEPATCH_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeTextureHeightPatchZeroHeightMeaning>();
// ********** End Enum ELandscapeTextureHeightPatchZeroHeightMeaning *******************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
