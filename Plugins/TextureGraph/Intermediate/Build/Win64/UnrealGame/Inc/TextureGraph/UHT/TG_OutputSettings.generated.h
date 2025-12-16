// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TG_OutputSettings.h"

#ifdef TEXTUREGRAPH_TG_OutputSettings_generated_h
#error "TG_OutputSettings.generated.h already included, missing '#pragma once' in TG_OutputSettings.h"
#endif
#define TEXTUREGRAPH_TG_OutputSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOutputExpressionInfo *********************************************
struct Z_Construct_UScriptStruct_FOutputExpressionInfo_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_OutputSettings_h_19_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOutputExpressionInfo_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FOutputExpressionInfo;
// ********** End ScriptStruct FOutputExpressionInfo ***********************************************

// ********** Begin Class UTG_ExportSettings *******************************************************
struct Z_Construct_UClass_UTG_ExportSettings_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_ExportSettings_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_OutputSettings_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_ExportSettings(); \
	friend struct ::Z_Construct_UClass_UTG_ExportSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_ExportSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_ExportSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_ExportSettings_NoRegister) \
	DECLARE_SERIALIZER(UTG_ExportSettings)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_OutputSettings_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_ExportSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_ExportSettings(UTG_ExportSettings&&) = delete; \
	UTG_ExportSettings(const UTG_ExportSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_ExportSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_ExportSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_ExportSettings) \
	TEXTUREGRAPH_API virtual ~UTG_ExportSettings();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_OutputSettings_h_33_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_OutputSettings_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_OutputSettings_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_OutputSettings_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_ExportSettings;

// ********** End Class UTG_ExportSettings *********************************************************

// ********** Begin ScriptStruct FTG_OutputSettings ************************************************
struct Z_Construct_UScriptStruct_FTG_OutputSettings_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_OutputSettings_h_46_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTG_OutputSettings_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FTG_OutputSettings;
// ********** End ScriptStruct FTG_OutputSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_OutputSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
