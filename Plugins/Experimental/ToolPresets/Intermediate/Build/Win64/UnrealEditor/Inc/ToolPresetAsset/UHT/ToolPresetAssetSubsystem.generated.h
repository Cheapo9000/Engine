// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolPresetAssetSubsystem.h"

#ifdef TOOLPRESETASSET_ToolPresetAssetSubsystem_generated_h
#error "ToolPresetAssetSubsystem.generated.h already included, missing '#pragma once' in ToolPresetAssetSubsystem.h"
#endif
#define TOOLPRESETASSET_ToolPresetAssetSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UToolPresetAssetSubsystem ************************************************
struct Z_Construct_UClass_UToolPresetAssetSubsystem_Statics;
TOOLPRESETASSET_API UClass* Z_Construct_UClass_UToolPresetAssetSubsystem_NoRegister();

#define FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUToolPresetAssetSubsystem(); \
	friend struct ::Z_Construct_UClass_UToolPresetAssetSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOOLPRESETASSET_API UClass* ::Z_Construct_UClass_UToolPresetAssetSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UToolPresetAssetSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolPresetAsset"), Z_Construct_UClass_UToolPresetAssetSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UToolPresetAssetSubsystem)


#define FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOOLPRESETASSET_API UToolPresetAssetSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UToolPresetAssetSubsystem(UToolPresetAssetSubsystem&&) = delete; \
	UToolPresetAssetSubsystem(const UToolPresetAssetSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOOLPRESETASSET_API, UToolPresetAssetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolPresetAssetSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UToolPresetAssetSubsystem) \
	TOOLPRESETASSET_API virtual ~UToolPresetAssetSubsystem();


#define FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UToolPresetAssetSubsystem;

// ********** End Class UToolPresetAssetSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ToolPresets_Source_ToolPresetAsset_Public_ToolPresetAssetSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
