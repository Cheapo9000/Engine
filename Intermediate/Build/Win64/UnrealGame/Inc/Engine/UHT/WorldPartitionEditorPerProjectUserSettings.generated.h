// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/WorldPartitionEditorPerProjectUserSettings.h"

#ifdef ENGINE_WorldPartitionEditorPerProjectUserSettings_generated_h
#error "WorldPartitionEditorPerProjectUserSettings.generated.h already included, missing '#pragma once' in WorldPartitionEditorPerProjectUserSettings.h"
#endif
#define ENGINE_WorldPartitionEditorPerProjectUserSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FWorldPartitionPerWorldSettings ***********************************
struct Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics;
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FWorldPartitionPerWorldSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FWorldPartitionPerWorldSettings;
// ********** End ScriptStruct FWorldPartitionPerWorldSettings *************************************

// ********** Begin Class UWorldPartitionEditorPerProjectUserSettings ******************************
struct Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics;
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPartitionEditorPerProjectUserSettings(); \
	friend struct ::Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UWorldPartitionEditorPerProjectUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UWorldPartitionEditorPerProjectUserSettings_NoRegister) \
	DECLARE_SERIALIZER(UWorldPartitionEditorPerProjectUserSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UWorldPartitionEditorPerProjectUserSettings(UWorldPartitionEditorPerProjectUserSettings&&) = delete; \
	UWorldPartitionEditorPerProjectUserSettings(const UWorldPartitionEditorPerProjectUserSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldPartitionEditorPerProjectUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPartitionEditorPerProjectUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPartitionEditorPerProjectUserSettings) \
	ENGINE_API virtual ~UWorldPartitionEditorPerProjectUserSettings();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_47_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UWorldPartitionEditorPerProjectUserSettings;

// ********** End Class UWorldPartitionEditorPerProjectUserSettings ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorPerProjectUserSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
