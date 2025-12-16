// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UVEditorModeChannelProperties.h"

#ifdef UVEDITOR_UVEditorModeChannelProperties_generated_h
#error "UVEditorModeChannelProperties.generated.h already included, missing '#pragma once' in UVEditorModeChannelProperties.h"
#endif
#define UVEDITOR_UVEditorModeChannelProperties_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UUVEditorUVChannelProperties *********************************************
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetUVChannelNames); \
	DECLARE_FUNCTION(execGetAssetNames);


struct Z_Construct_UClass_UUVEditorUVChannelProperties_Statics;
UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorUVChannelProperties_NoRegister();

#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVEditorUVChannelProperties(); \
	friend struct ::Z_Construct_UClass_UUVEditorUVChannelProperties_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UVEDITOR_API UClass* ::Z_Construct_UClass_UUVEditorUVChannelProperties_NoRegister(); \
public: \
	DECLARE_CLASS2(UUVEditorUVChannelProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UVEditor"), Z_Construct_UClass_UUVEditorUVChannelProperties_NoRegister) \
	DECLARE_SERIALIZER(UUVEditorUVChannelProperties)


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UVEDITOR_API UUVEditorUVChannelProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUVEditorUVChannelProperties(UUVEditorUVChannelProperties&&) = delete; \
	UUVEditorUVChannelProperties(const UUVEditorUVChannelProperties&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UVEDITOR_API, UUVEditorUVChannelProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVEditorUVChannelProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVEditorUVChannelProperties) \
	UVEDITOR_API virtual ~UUVEditorUVChannelProperties();


#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_23_PROLOG
#define FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUVEditorUVChannelProperties;

// ********** End Class UUVEditorUVChannelProperties ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_UVEditor_Source_UVEditor_Public_UVEditorModeChannelProperties_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
