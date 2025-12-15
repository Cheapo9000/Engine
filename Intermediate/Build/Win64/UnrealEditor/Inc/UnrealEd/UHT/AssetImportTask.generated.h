// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetImportTask.h"

#ifdef UNREALED_AssetImportTask_generated_h
#error "AssetImportTask.generated.h already included, missing '#pragma once' in AssetImportTask.h"
#endif
#define UNREALED_AssetImportTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;

// ********** Begin Class UAssetImportTask *********************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsAsyncImportComplete); \
	DECLARE_FUNCTION(execGetObjects);


struct Z_Construct_UClass_UAssetImportTask_Statics;
UNREALED_API UClass* Z_Construct_UClass_UAssetImportTask_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetImportTask(); \
	friend struct ::Z_Construct_UClass_UAssetImportTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UAssetImportTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetImportTask, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UAssetImportTask_NoRegister) \
	DECLARE_SERIALIZER(UAssetImportTask)


#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetImportTask(UAssetImportTask&&) = delete; \
	UAssetImportTask(const UAssetImportTask&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UAssetImportTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetImportTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAssetImportTask) \
	UNREALED_API virtual ~UAssetImportTask();


#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_24_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetImportTask;

// ********** End Class UAssetImportTask ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_AssetImportTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
