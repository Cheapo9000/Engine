// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Instances/EditorPlacementSettings.h"

#ifdef UNREALED_EditorPlacementSettings_generated_h
#error "EditorPlacementSettings.generated.h already included, missing '#pragma once' in EditorPlacementSettings.h"
#endif
#define UNREALED_EditorPlacementSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEditorInstancedPlacementSettings ****************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEditorInstancedPlacementSettings, NO_API)


struct Z_Construct_UClass_UEditorInstancedPlacementSettings_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorInstancedPlacementSettings_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorInstancedPlacementSettings(); \
	friend struct ::Z_Construct_UClass_UEditorInstancedPlacementSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorInstancedPlacementSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorInstancedPlacementSettings, UInstancedPlacemenClientSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorInstancedPlacementSettings_NoRegister) \
	DECLARE_SERIALIZER(UEditorInstancedPlacementSettings) \
	FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorInstancedPlacementSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorInstancedPlacementSettings(UEditorInstancedPlacementSettings&&) = delete; \
	UEditorInstancedPlacementSettings(const UEditorInstancedPlacementSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorInstancedPlacementSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorInstancedPlacementSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorInstancedPlacementSettings) \
	NO_API virtual ~UEditorInstancedPlacementSettings();


#define FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_14_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorInstancedPlacementSettings;

// ********** End Class UEditorInstancedPlacementSettings ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
