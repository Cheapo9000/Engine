// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetExportTask.h"

#ifdef ENGINE_AssetExportTask_generated_h
#error "AssetExportTask.generated.h already included, missing '#pragma once' in AssetExportTask.h"
#endif
#define ENGINE_AssetExportTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAssetExportTask *********************************************************
struct Z_Construct_UClass_UAssetExportTask_Statics;
ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetExportTask(); \
	friend struct ::Z_Construct_UClass_UAssetExportTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UAssetExportTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetExportTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UAssetExportTask_NoRegister) \
	DECLARE_SERIALIZER(UAssetExportTask)


#define FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAssetExportTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetExportTask(UAssetExportTask&&) = delete; \
	UAssetExportTask(const UAssetExportTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAssetExportTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetExportTask); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetExportTask) \
	ENGINE_API virtual ~UAssetExportTask();


#define FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetExportTask;

// ********** End Class UAssetExportTask ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_AssetExportTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
