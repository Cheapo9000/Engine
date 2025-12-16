// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/TG_BlueprintFunctionLibrary.h"

#ifdef TEXTUREGRAPH_TG_BlueprintFunctionLibrary_generated_h
#error "TG_BlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in TG_BlueprintFunctionLibrary.h"
#endif
#define TEXTUREGRAPH_TG_BlueprintFunctionLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTexture;
class UTextureGraph;
class UTextureGraphBase;
class UTextureRenderTarget2D;
enum class ETG_TextureFormat : uint8;
enum class ETG_TexturePresetType : uint8;
struct FLinearColor;
struct FTG_OutputSettings;

// ********** Begin Class UTG_BlueprintFunctionLibrary *********************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_BlueprintFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExportTextureGraph); \
	DECLARE_FUNCTION(execRenderTextureGraph); \
	DECLARE_FUNCTION(execGetSettingsParameterValue); \
	DECLARE_FUNCTION(execSetSettingsParameterValue); \
	DECLARE_FUNCTION(execGetColorParameterValue); \
	DECLARE_FUNCTION(execSetColorParameterValue); \
	DECLARE_FUNCTION(execGetVectorParameterValue); \
	DECLARE_FUNCTION(execSetVectorParameterValue); \
	DECLARE_FUNCTION(execGetStringParameterValue); \
	DECLARE_FUNCTION(execSetStringParameterValue); \
	DECLARE_FUNCTION(execGetBoolParameterValue); \
	DECLARE_FUNCTION(execSetBoolParameterValue); \
	DECLARE_FUNCTION(execGetScalarParameterValue); \
	DECLARE_FUNCTION(execSetScalarParameterValue); \
	DECLARE_FUNCTION(execGetTextureParameterValue); \
	DECLARE_FUNCTION(execSetTextureParameterValue);


struct Z_Construct_UClass_UTG_BlueprintFunctionLibrary_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_BlueprintFunctionLibrary_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_BlueprintFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_BlueprintFunctionLibrary(); \
	friend struct ::Z_Construct_UClass_UTG_BlueprintFunctionLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_BlueprintFunctionLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_BlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_BlueprintFunctionLibrary_NoRegister) \
	DECLARE_SERIALIZER(UTG_BlueprintFunctionLibrary)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_BlueprintFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTG_BlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_BlueprintFunctionLibrary(UTG_BlueprintFunctionLibrary&&) = delete; \
	UTG_BlueprintFunctionLibrary(const UTG_BlueprintFunctionLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTG_BlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_BlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_BlueprintFunctionLibrary) \
	NO_API virtual ~UTG_BlueprintFunctionLibrary();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_BlueprintFunctionLibrary_h_18_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_BlueprintFunctionLibrary_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_BlueprintFunctionLibrary_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_BlueprintFunctionLibrary_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_BlueprintFunctionLibrary_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_BlueprintFunctionLibrary;

// ********** End Class UTG_BlueprintFunctionLibrary ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Blueprint_TG_BlueprintFunctionLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
