// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectUtilities/MetaHumanAssetManager.h"

#ifdef METAHUMANSDKEDITOR_MetaHumanAssetManager_generated_h
#error "MetaHumanAssetManager.generated.h already included, missing '#pragma once' in MetaHumanAssetManager.h"
#endif
#define METAHUMANSDKEDITOR_MetaHumanAssetManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMetaHumanAssetType : uint8;
struct FMetaHumanAssetDescription;

// ********** Begin ScriptStruct FMetaHumanImportOptions *******************************************
struct Z_Construct_UScriptStruct_FMetaHumanImportOptions_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanImportOptions_Statics; \
	METAHUMANSDKEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanImportOptions;
// ********** End ScriptStruct FMetaHumanImportOptions *********************************************

// ********** Begin ScriptStruct FMetaHumanAggregateDetails ****************************************
struct Z_Construct_UScriptStruct_FMetaHumanAggregateDetails_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanAggregateDetails_Statics; \
	METAHUMANSDKEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanAggregateDetails;
// ********** End ScriptStruct FMetaHumanAggregateDetails ******************************************

// ********** Begin ScriptStruct FMetaHumanAssetDescription ****************************************
struct Z_Construct_UScriptStruct_FMetaHumanAssetDescription_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_221_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanAssetDescription_Statics; \
	METAHUMANSDKEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanAssetDescription;
// ********** End ScriptStruct FMetaHumanAssetDescription ******************************************

// ********** Begin ScriptStruct FMetaHumanMultiArchiveDescription *********************************
struct Z_Construct_UScriptStruct_FMetaHumanMultiArchiveDescription_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_273_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanMultiArchiveDescription_Statics; \
	METAHUMANSDKEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanMultiArchiveDescription;
// ********** End ScriptStruct FMetaHumanMultiArchiveDescription ***********************************

// ********** Begin ScriptStruct FMetaHumanArchiveEntry ********************************************
struct Z_Construct_UScriptStruct_FMetaHumanArchiveEntry_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_288_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanArchiveEntry_Statics; \
	METAHUMANSDKEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanArchiveEntry;
// ********** End ScriptStruct FMetaHumanArchiveEntry **********************************************

// ********** Begin ScriptStruct FMetaHumanArchiveContents *****************************************
struct Z_Construct_UScriptStruct_FMetaHumanArchiveContents_Statics;
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_309_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMetaHumanArchiveContents_Statics; \
	METAHUMANSDKEDITOR_API static class UScriptStruct* StaticStruct();


struct FMetaHumanArchiveContents;
// ********** End ScriptStruct FMetaHumanArchiveContents *******************************************

// ********** Begin Class UMetaHumanAssetManager ***************************************************
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_321_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateAssetDetails); \
	DECLARE_FUNCTION(execUpdateAssetDependencies); \
	DECLARE_FUNCTION(execCreateArchive); \
	DECLARE_FUNCTION(execIsAssetOfType); \
	DECLARE_FUNCTION(execFindAssetsForPackaging);


struct Z_Construct_UClass_UMetaHumanAssetManager_Statics;
METAHUMANSDKEDITOR_API UClass* Z_Construct_UClass_UMetaHumanAssetManager_NoRegister();

#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_321_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaHumanAssetManager(); \
	friend struct ::Z_Construct_UClass_UMetaHumanAssetManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METAHUMANSDKEDITOR_API UClass* ::Z_Construct_UClass_UMetaHumanAssetManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetaHumanAssetManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetaHumanSDKEditor"), Z_Construct_UClass_UMetaHumanAssetManager_NoRegister) \
	DECLARE_SERIALIZER(UMetaHumanAssetManager)


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_321_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METAHUMANSDKEDITOR_API UMetaHumanAssetManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetaHumanAssetManager(UMetaHumanAssetManager&&) = delete; \
	UMetaHumanAssetManager(const UMetaHumanAssetManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METAHUMANSDKEDITOR_API, UMetaHumanAssetManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaHumanAssetManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaHumanAssetManager) \
	METAHUMANSDKEDITOR_API virtual ~UMetaHumanAssetManager();


#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_318_PROLOG
#define FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_321_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_321_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_321_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h_321_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetaHumanAssetManager;

// ********** End Class UMetaHumanAssetManager *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_MetaHuman_MetaHumanSDK_Source_MetaHumanSDKEditor_Public_ProjectUtilities_MetaHumanAssetManager_h

// ********** Begin Enum EMetaHumanAssetType *******************************************************
#define FOREACH_ENUM_EMETAHUMANASSETTYPE(op) \
	op(EMetaHumanAssetType::Character) \
	op(EMetaHumanAssetType::CharacterAssembly) \
	op(EMetaHumanAssetType::SkeletalClothing) \
	op(EMetaHumanAssetType::OutfitClothing) \
	op(EMetaHumanAssetType::Groom) 

enum class EMetaHumanAssetType : uint8;
template<> struct TIsUEnumClass<EMetaHumanAssetType> { enum { Value = true }; };
template<> METAHUMANSDKEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EMetaHumanAssetType>();
// ********** End Enum EMetaHumanAssetType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
