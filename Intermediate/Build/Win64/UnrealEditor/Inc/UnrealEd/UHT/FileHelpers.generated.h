// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FileHelpers.h"

#ifdef UNREALED_FileHelpers_generated_h
#error "FileHelpers.generated.h already included, missing '#pragma once' in FileHelpers.h"
#endif
#define UNREALED_FileHelpers_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPackage;
class UWorld;
enum class EReloadPackagesInteractionMode : uint8;

// ********** Begin Class UEditorLoadingAndSavingUtils *********************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFullyLoadAssets); \
	DECLARE_FUNCTION(execFullyLoadPackages); \
	DECLARE_FUNCTION(execReloadPackages); \
	DECLARE_FUNCTION(execUnloadPackages); \
	DECLARE_FUNCTION(execExportScene); \
	DECLARE_FUNCTION(execImportScene); \
	DECLARE_FUNCTION(execGetDirtyContentPackages); \
	DECLARE_FUNCTION(execGetDirtyMapPackages); \
	DECLARE_FUNCTION(execSaveCurrentLevel); \
	DECLARE_FUNCTION(execSaveDirtyPackagesWithDialog); \
	DECLARE_FUNCTION(execSaveDirtyPackages); \
	DECLARE_FUNCTION(execSavePackagesWithDialog); \
	DECLARE_FUNCTION(execSavePackages); \
	DECLARE_FUNCTION(execSaveMap); \
	DECLARE_FUNCTION(execLoadMap); \
	DECLARE_FUNCTION(execLoadMapWithDialog); \
	DECLARE_FUNCTION(execNewMapFromTemplate); \
	DECLARE_FUNCTION(execNewBlankMap);


struct Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorLoadingAndSavingUtils_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorLoadingAndSavingUtils(); \
	friend struct ::Z_Construct_UClass_UEditorLoadingAndSavingUtils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorLoadingAndSavingUtils_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorLoadingAndSavingUtils, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorLoadingAndSavingUtils_NoRegister) \
	DECLARE_SERIALIZER(UEditorLoadingAndSavingUtils)


#define FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorLoadingAndSavingUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorLoadingAndSavingUtils(UEditorLoadingAndSavingUtils&&) = delete; \
	UEditorLoadingAndSavingUtils(const UEditorLoadingAndSavingUtils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorLoadingAndSavingUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorLoadingAndSavingUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorLoadingAndSavingUtils) \
	NO_API virtual ~UEditorLoadingAndSavingUtils();


#define FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_38_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorLoadingAndSavingUtils;

// ********** End Class UEditorLoadingAndSavingUtils ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_FileHelpers_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
