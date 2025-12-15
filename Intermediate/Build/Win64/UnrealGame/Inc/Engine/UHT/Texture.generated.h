// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Texture.h"

#ifdef ENGINE_Texture_generated_h
#error "Texture.generated.h already included, missing '#pragma once' in Texture.h"
#endif
#define ENGINE_Texture_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;

// ********** Begin ScriptStruct FTextureSourceLayerColorInfo **************************************
struct Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_50_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTextureSourceLayerColorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTextureSourceLayerColorInfo;
// ********** End ScriptStruct FTextureSourceLayerColorInfo ****************************************

// ********** Begin ScriptStruct FTextureSourceBlock ***********************************************
struct Z_Construct_UScriptStruct_FTextureSourceBlock_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_64_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTextureSourceBlock_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTextureSourceBlock;
// ********** End ScriptStruct FTextureSourceBlock *************************************************

// ********** Begin ScriptStruct FTextureSource ****************************************************
struct Z_Construct_UScriptStruct_FTextureSource_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTextureSource_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTextureSource;
// ********** End ScriptStruct FTextureSource ******************************************************

// ********** Begin ScriptStruct FTexturePlatformData **********************************************
struct Z_Construct_UScriptStruct_FTexturePlatformData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_840_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTexturePlatformData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTexturePlatformData;
// ********** End ScriptStruct FTexturePlatformData ************************************************

// ********** Begin ScriptStruct FTextureFormatSettings ********************************************
struct Z_Construct_UScriptStruct_FTextureFormatSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1142_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTextureFormatSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTextureFormatSettings;
// ********** End ScriptStruct FTextureFormatSettings **********************************************

// ********** Begin ScriptStruct FTextureSourceColorSettings ***************************************
struct Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1178_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTextureSourceColorSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FTextureSourceColorSettings;
// ********** End ScriptStruct FTextureSourceColorSettings *****************************************

// ********** Begin Class UTexture *****************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_RPC_WRAPPERS \
	DECLARE_FUNCTION(execBlueprint_GetBuiltTextureSize); \
	DECLARE_FUNCTION(execGetTextureStreamingMethod); \
	DECLARE_FUNCTION(execBlueprint_GetTextureSourceIdString); \
	DECLARE_FUNCTION(execComputeTextureSourceChannelMinMax); \
	DECLARE_FUNCTION(execBlueprint_GetTextureSourceDiskAndMemorySize); \
	DECLARE_FUNCTION(execBlueprint_GetMemorySize); \
	DECLARE_FUNCTION(execAreDownscalePropertiesEditable);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execSetVirtualTextureStreaming);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_ACCESSORS \
static void GetCompositeTexture_WrapperImpl(const void* Object, void* OutValue); \
static void SetCompositeTexture_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTexture, ENGINE_API)


struct Z_Construct_UClass_UTexture_Statics;
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_INCLASS \
private: \
	static void StaticRegisterNativesUTexture(); \
	friend struct ::Z_Construct_UClass_UTexture_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UTexture_NoRegister(); \
public: \
	DECLARE_CLASS2(UTexture, UStreamableRenderAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UTexture_NoRegister) \
	DECLARE_SERIALIZER(UTexture) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UTexture*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTexture(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexture) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexture); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTexture(UTexture&&) = delete; \
	UTexture(const UTexture&) = delete;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1217_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h_1220_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTexture;

// ********** End Class UTexture *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Texture_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
