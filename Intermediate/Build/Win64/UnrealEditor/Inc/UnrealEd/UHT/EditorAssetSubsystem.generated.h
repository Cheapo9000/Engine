// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/EditorAssetSubsystem.h"

#ifdef UNREALED_EditorAssetSubsystem_generated_h
#error "EditorAssetSubsystem.generated.h already included, missing '#pragma once' in EditorAssetSubsystem.h"
#endif
#define UNREALED_EditorAssetSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
enum class EEditorAssetMetaDataSortType : uint8;
enum class EEditorAssetSortOrder : uint8;
struct FAssetData;

// ********** Begin Delegate FOnExtractAssetFromFileDynamic ****************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_413_DELEGATE \
static UNREALED_API void FOnExtractAssetFromFileDynamic_DelegateWrapper(const FScriptDelegate& OnExtractAssetFromFileDynamic, TArray<FString> const& Files, TArray<FAssetData>& AssetDataArray);


// ********** End Delegate FOnExtractAssetFromFileDynamic ******************************************

// ********** Begin Class UEditorAssetSubsystem ****************************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSortByMetaData); \
	DECLARE_FUNCTION(execGetAllAssetsByMetaDataTags); \
	DECLARE_FUNCTION(execRemoveOnExtractAssetFromFile); \
	DECLARE_FUNCTION(execAddOnExtractAssetFromFile); \
	DECLARE_FUNCTION(execRemoveMetadataTag); \
	DECLARE_FUNCTION(execSetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTag); \
	DECLARE_FUNCTION(execGetMetadataTagValues); \
	DECLARE_FUNCTION(execGetTagValues); \
	DECLARE_FUNCTION(execListAssetsByTagValue); \
	DECLARE_FUNCTION(execListAssets); \
	DECLARE_FUNCTION(execMakeDirectory); \
	DECLARE_FUNCTION(execDoesDirectoryContainAssets); \
	DECLARE_FUNCTION(execDoesDirectoryExist); \
	DECLARE_FUNCTION(execSaveDirectory); \
	DECLARE_FUNCTION(execGetLoadedAssetFilenameLengthForCooking); \
	DECLARE_FUNCTION(execGetAssetFilenameLengthForCooking); \
	DECLARE_FUNCTION(execSaveAsset); \
	DECLARE_FUNCTION(execSaveLoadedAssets); \
	DECLARE_FUNCTION(execSaveLoadedAsset); \
	DECLARE_FUNCTION(execCheckoutDirectory); \
	DECLARE_FUNCTION(execCheckoutAsset); \
	DECLARE_FUNCTION(execCheckoutLoadedAssets); \
	DECLARE_FUNCTION(execCheckoutLoadedAsset); \
	DECLARE_FUNCTION(execSetDirtyFlag); \
	DECLARE_FUNCTION(execRenameDirectory); \
	DECLARE_FUNCTION(execRenameAsset); \
	DECLARE_FUNCTION(execRenameLoadedAsset); \
	DECLARE_FUNCTION(execDuplicateDirectory); \
	DECLARE_FUNCTION(execDuplicateAsset); \
	DECLARE_FUNCTION(execDuplicateLoadedAsset); \
	DECLARE_FUNCTION(execDeleteDirectory); \
	DECLARE_FUNCTION(execDeleteAsset); \
	DECLARE_FUNCTION(execDeleteLoadedAssets); \
	DECLARE_FUNCTION(execDeleteLoadedAsset); \
	DECLARE_FUNCTION(execConsolidateAssets); \
	DECLARE_FUNCTION(execFindPackageReferencersForAsset); \
	DECLARE_FUNCTION(execDoAssetsExist); \
	DECLARE_FUNCTION(execDoesAssetExist); \
	DECLARE_FUNCTION(execFindAssetData); \
	DECLARE_FUNCTION(execGetPathNameForLoadedAsset); \
	DECLARE_FUNCTION(execLoadBlueprintClass); \
	DECLARE_FUNCTION(execLoadAsset);


struct Z_Construct_UClass_UEditorAssetSubsystem_Statics;
UNREALED_API UClass* Z_Construct_UClass_UEditorAssetSubsystem_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorAssetSubsystem(); \
	friend struct ::Z_Construct_UClass_UEditorAssetSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UEditorAssetSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UEditorAssetSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UEditorAssetSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UEditorAssetSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_40_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEditorAssetSubsystem(UEditorAssetSubsystem&&) = delete; \
	UEditorAssetSubsystem(const UEditorAssetSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UEditorAssetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorAssetSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEditorAssetSubsystem) \
	UNREALED_API virtual ~UEditorAssetSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_37_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEditorAssetSubsystem;

// ********** End Class UEditorAssetSubsystem ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_EditorAssetSubsystem_h

// ********** Begin Enum EEditorAssetSortOrder *****************************************************
#define FOREACH_ENUM_EEDITORASSETSORTORDER(op) \
	op(EEditorAssetSortOrder::Ascending) \
	op(EEditorAssetSortOrder::Descending) 

enum class EEditorAssetSortOrder : uint8;
template<> struct TIsUEnumClass<EEditorAssetSortOrder> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EEditorAssetSortOrder>();
// ********** End Enum EEditorAssetSortOrder *******************************************************

// ********** Begin Enum EEditorAssetMetaDataSortType **********************************************
#define FOREACH_ENUM_EEDITORASSETMETADATASORTTYPE(op) \
	op(EEditorAssetMetaDataSortType::String) \
	op(EEditorAssetMetaDataSortType::Numeric) \
	op(EEditorAssetMetaDataSortType::DateTime) 

enum class EEditorAssetMetaDataSortType : uint8;
template<> struct TIsUEnumClass<EEditorAssetMetaDataSortType> { enum { Value = true }; };
template<> UNREALED_NON_ATTRIBUTED_API UEnum* StaticEnum<EEditorAssetMetaDataSortType>();
// ********** End Enum EEditorAssetMetaDataSortType ************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
