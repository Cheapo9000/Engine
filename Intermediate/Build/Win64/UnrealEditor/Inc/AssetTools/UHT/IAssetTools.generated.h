// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAssetTools.h"

#ifdef ASSETTOOLS_IAssetTools_generated_h
#error "IAssetTools.generated.h already included, missing '#pragma once' in IAssetTools.h"
#endif
#define ASSETTOOLS_IAssetTools_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAssetTools;
class UAssetImportTask;
class UAutomatedAssetImportData;
class UClass;
class UFactory;
class UObject;
class UPackage;
enum class EAssetRenameResult : uint8;
struct FAssetData;
struct FAssetRenameData;
struct FMigrationOptions;
struct FRevisionInfo;
struct FSoftObjectPath;

// ********** Begin ScriptStruct FAssetRenameData **************************************************
struct Z_Construct_UScriptStruct_FAssetRenameData_Statics;
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAssetRenameData_Statics; \
	ASSETTOOLS_API static class UScriptStruct* StaticStruct();


struct FAssetRenameData;
// ********** End ScriptStruct FAssetRenameData ****************************************************

// ********** Begin Delegate FAdvancedCopyCompletedEvent *******************************************
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_154_DELEGATE \
ASSETTOOLS_API void FAdvancedCopyCompletedEvent_DelegateWrapper(const FScriptDelegate& AdvancedCopyCompletedEvent, bool bSuccess, TArray<FAssetRenameData> const& AllCopiedAssets);


// ********** End Delegate FAdvancedCopyCompletedEvent *********************************************

// ********** Begin ScriptStruct FAdvancedCopyParams ***********************************************
struct Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics;
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_176_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAdvancedCopyParams_Statics; \
	ASSETTOOLS_API static class UScriptStruct* StaticStruct();


struct FAdvancedCopyParams;
// ********** End ScriptStruct FAdvancedCopyParams *************************************************

// ********** Begin ScriptStruct FMigrationOptions *************************************************
struct Z_Construct_UScriptStruct_FMigrationOptions_Statics;
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_243_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMigrationOptions_Statics; \
	ASSETTOOLS_API static class UScriptStruct* StaticStruct();


struct FMigrationOptions;
// ********** End ScriptStruct FMigrationOptions ***************************************************

// ********** Begin Delegate FAssetCreateCompleteDynamic *******************************************
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_278_DELEGATE \
ASSETTOOLS_API void FAssetCreateCompleteDynamic_DelegateWrapper(const FScriptDelegate& AssetCreateCompleteDynamic, UFactory* Factory, UObject* NewObject);


// ********** End Delegate FAssetCreateCompleteDynamic *********************************************

// ********** Begin Delegate FAssetCreateCancelledDynamic ******************************************
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_279_DELEGATE \
ASSETTOOLS_API void FAssetCreateCancelledDynamic_DelegateWrapper(const FScriptDelegate& AssetCreateCancelledDynamic, UFactory* Factory);


// ********** End Delegate FAssetCreateCancelledDynamic ********************************************

// ********** Begin Interface UAssetTools **********************************************************
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_275_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsAssetReadOnly); \
	DECLARE_FUNCTION(execOpenEditorForAssets); \
	DECLARE_FUNCTION(execBeginAdvancedCopyPackages); \
	DECLARE_FUNCTION(execMigratePackages); \
	DECLARE_FUNCTION(execDiffAssets); \
	DECLARE_FUNCTION(execDiffAgainstDepot); \
	DECLARE_FUNCTION(execCreateUniqueAssetName); \
	DECLARE_FUNCTION(execExportAssetsWithDialog); \
	DECLARE_FUNCTION(execExportAssets); \
	DECLARE_FUNCTION(execImportAssetTasks); \
	DECLARE_FUNCTION(execImportAssetsAutomated); \
	DECLARE_FUNCTION(execImportAssetsWithDialog); \
	DECLARE_FUNCTION(execRenameReferencingSoftObjectPaths); \
	DECLARE_FUNCTION(execFindSoftReferencesToObject); \
	DECLARE_FUNCTION(execRenameAssetsWithDialog); \
	DECLARE_FUNCTION(execRenameAssets); \
	DECLARE_FUNCTION(execDuplicateAsset); \
	DECLARE_FUNCTION(execDuplicateAssetWithDialogAndTitle); \
	DECLARE_FUNCTION(execDuplicateAssetWithDialog); \
	DECLARE_FUNCTION(execCreateAssetWithDialogAsync); \
	DECLARE_FUNCTION(execCreateAssetWithDialog); \
	DECLARE_FUNCTION(execCreateAssetAsync); \
	DECLARE_FUNCTION(execCreateAsset);


struct Z_Construct_UClass_UAssetTools_Statics;
ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetTools_NoRegister();

#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_275_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSETTOOLS_API UAssetTools(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetTools) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSETTOOLS_API, UAssetTools); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetTools); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetTools(UAssetTools&&) = delete; \
	UAssetTools(const UAssetTools&) = delete; \
	virtual ~UAssetTools() = default;


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_275_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAssetTools(); \
	friend struct ::Z_Construct_UClass_UAssetTools_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETTOOLS_API UClass* ::Z_Construct_UClass_UAssetTools_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetTools, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AssetTools"), Z_Construct_UClass_UAssetTools_NoRegister) \
	DECLARE_SERIALIZER(UAssetTools)


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_275_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_275_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_275_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_275_INCLASS_IINTERFACE \
protected: \
	virtual ~IAssetTools() {} \
public: \
	typedef UAssetTools UClassType; \
	typedef IAssetTools ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_272_PROLOG
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_285_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_275_RPC_WRAPPERS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_275_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetTools;

// ********** End Interface UAssetTools ************************************************************

// ********** Begin Class UAssetToolsHelpers *******************************************************
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_878_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAssetTools);


struct Z_Construct_UClass_UAssetToolsHelpers_Statics;
ASSETTOOLS_API UClass* Z_Construct_UClass_UAssetToolsHelpers_NoRegister();

#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_878_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetToolsHelpers(); \
	friend struct ::Z_Construct_UClass_UAssetToolsHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ASSETTOOLS_API UClass* ::Z_Construct_UClass_UAssetToolsHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssetToolsHelpers, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/AssetTools"), Z_Construct_UClass_UAssetToolsHelpers_NoRegister) \
	DECLARE_SERIALIZER(UAssetToolsHelpers)


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_878_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetToolsHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssetToolsHelpers(UAssetToolsHelpers&&) = delete; \
	UAssetToolsHelpers(const UAssetToolsHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetToolsHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetToolsHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetToolsHelpers) \
	NO_API virtual ~UAssetToolsHelpers();


#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_875_PROLOG
#define FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_878_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_878_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_878_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h_878_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssetToolsHelpers;

// ********** End Class UAssetToolsHelpers *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_AssetTools_Public_IAssetTools_h

// ********** Begin Enum EAssetClassAction *********************************************************
#define FOREACH_ENUM_EASSETCLASSACTION(op) \
	op(EAssetClassAction::CreateAsset) \
	op(EAssetClassAction::ViewAsset) \
	op(EAssetClassAction::ImportAsset) \
	op(EAssetClassAction::ExportAsset) \
	op(EAssetClassAction::AllAssetActions) 

enum class EAssetClassAction : uint8;
template<> struct TIsUEnumClass<EAssetClassAction> { enum { Value = true }; };
template<> ASSETTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetClassAction>();
// ********** End Enum EAssetClassAction ***********************************************************

// ********** Begin Enum EAssetRenameResult ********************************************************
#define FOREACH_ENUM_EASSETRENAMERESULT(op) \
	op(EAssetRenameResult::Failure) \
	op(EAssetRenameResult::Success) \
	op(EAssetRenameResult::Pending) 

enum class EAssetRenameResult : uint8;
template<> struct TIsUEnumClass<EAssetRenameResult> { enum { Value = true }; };
template<> ASSETTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetRenameResult>();
// ********** End Enum EAssetRenameResult **********************************************************

// ********** Begin Enum ERedirectFixupMode ********************************************************
#define FOREACH_ENUM_EREDIRECTFIXUPMODE(op) \
	op(ERedirectFixupMode::DeleteFixedUpRedirectors) \
	op(ERedirectFixupMode::LeaveFixedUpRedirectors) \
	op(ERedirectFixupMode::PromptForDeletingRedirectors) 

enum class ERedirectFixupMode;
template<> struct TIsUEnumClass<ERedirectFixupMode> { enum { Value = true }; };
template<> ASSETTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<ERedirectFixupMode>();
// ********** End Enum ERedirectFixupMode **********************************************************

// ********** Begin Enum EAssetMigrationConflict ***************************************************
#define FOREACH_ENUM_EASSETMIGRATIONCONFLICT(op) \
	op(EAssetMigrationConflict::Skip) \
	op(EAssetMigrationConflict::Overwrite) \
	op(EAssetMigrationConflict::Cancel) 

enum class EAssetMigrationConflict : uint8;
template<> struct TIsUEnumClass<EAssetMigrationConflict> { enum { Value = true }; };
template<> ASSETTOOLS_NON_ATTRIBUTED_API UEnum* StaticEnum<EAssetMigrationConflict>();
// ********** End Enum EAssetMigrationConflict *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
