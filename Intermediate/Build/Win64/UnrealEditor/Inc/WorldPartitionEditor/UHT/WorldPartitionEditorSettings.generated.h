// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionEditorSettings.h"

#ifdef WORLDPARTITIONEDITOR_WorldPartitionEditorSettings_generated_h
#error "WorldPartitionEditorSettings.generated.h already included, missing '#pragma once' in WorldPartitionEditorSettings.h"
#endif
#define WORLDPARTITIONEDITOR_WorldPartitionEditorSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UWorldPartitionEditorSettings ********************************************
struct Z_Construct_UClass_UWorldPartitionEditorSettings_Statics;
WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UWorldPartitionEditorSettings_NoRegister();

#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionEditorSettings(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionEditorSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend WORLDPARTITIONEDITOR_API UClass* ::Z_Construct_UClass_UWorldPartitionEditorSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WorldPartitionEditor"), Z_Construct_UClass_UWorldPartitionEditorSettings_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionEditorSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionEditorSettings(UWorldPartitionEditorSettings&&) = delete; \
	UWorldPartitionEditorSettings(const UWorldPartitionEditorSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WORLDPARTITIONEDITOR_API, UWorldPartitionEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldPartitionEditorSettings) \
	WORLDPARTITIONEDITOR_API virtual ~UWorldPartitionEditorSettings();


#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_12_PROLOG
#define FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionEditorSettings;

// ********** End Class UWorldPartitionEditorSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_WorldPartitionEditorSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
