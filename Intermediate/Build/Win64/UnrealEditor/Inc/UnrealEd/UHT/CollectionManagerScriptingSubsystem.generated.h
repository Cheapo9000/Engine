// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/CollectionManagerScriptingSubsystem.h"

#ifdef UNREALED_CollectionManagerScriptingSubsystem_generated_h
#error "CollectionManagerScriptingSubsystem.generated.h already included, missing '#pragma once' in CollectionManagerScriptingSubsystem.h"
#endif
#define UNREALED_CollectionManagerScriptingSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ECollectionScriptingShareType : uint8;
struct FAssetData;
struct FCollectionScriptingContainerSource;
struct FCollectionScriptingRef;
struct FSoftObjectPath;

// ********** Begin ScriptStruct FCollectionScriptingContainerSource *******************************
struct Z_Construct_UScriptStruct_FCollectionScriptingContainerSource_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_CollectionManagerScriptingSubsystem_h_16_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCollectionScriptingContainerSource_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FCollectionScriptingContainerSource;
// ********** End ScriptStruct FCollectionScriptingContainerSource *********************************

// ********** Begin ScriptStruct FCollectionScriptingRef *******************************************
struct Z_Construct_UScriptStruct_FCollectionScriptingRef_Statics;
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_CollectionManagerScriptingSubsystem_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCollectionScriptingRef_Statics; \
	UNREALED_API static class UScriptStruct* StaticStruct();


struct FCollectionScriptingRef;
// ********** End ScriptStruct FCollectionScriptingRef *********************************************

// ********** Begin Class UCollectionManagerScriptingSubsystem *************************************
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_CollectionManagerScriptingSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetBaseGameCollectionContainer); \
	DECLARE_FUNCTION(execGetCollectionsContainingAssetPtr); \
	DECLARE_FUNCTION(execGetCollectionsContainingAssetData); \
	DECLARE_FUNCTION(execGetCollectionsContainingAsset); \
	DECLARE_FUNCTION(execGetAssetsInCollection); \
	DECLARE_FUNCTION(execGetCollectionsByName); \
	DECLARE_FUNCTION(execCollectionExists); \
	DECLARE_FUNCTION(execRemoveAssetPtrsFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetDatasFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetsFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetPtrFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetDataFromCollection); \
	DECLARE_FUNCTION(execRemoveAssetFromCollection); \
	DECLARE_FUNCTION(execAddAssetPtrsToCollection); \
	DECLARE_FUNCTION(execAddAssetDatasToCollection); \
	DECLARE_FUNCTION(execAddAssetsToCollection); \
	DECLARE_FUNCTION(execAddAssetPtrToCollection); \
	DECLARE_FUNCTION(execAddAssetDataToCollection); \
	DECLARE_FUNCTION(execAddAssetToCollection); \
	DECLARE_FUNCTION(execEmptyCollection); \
	DECLARE_FUNCTION(execReparentCollection); \
	DECLARE_FUNCTION(execRenameCollection); \
	DECLARE_FUNCTION(execDestroyCollection); \
	DECLARE_FUNCTION(execGetCollections); \
	DECLARE_FUNCTION(execCreateOrEmptyCollection); \
	DECLARE_FUNCTION(execCreateCollection); \
	DECLARE_FUNCTION(execGetCollectionContainers);


struct Z_Construct_UClass_UCollectionManagerScriptingSubsystem_Statics;
UNREALED_API UClass* Z_Construct_UClass_UCollectionManagerScriptingSubsystem_NoRegister();

#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_CollectionManagerScriptingSubsystem_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollectionManagerScriptingSubsystem(); \
	friend struct ::Z_Construct_UClass_UCollectionManagerScriptingSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UNREALED_API UClass* ::Z_Construct_UClass_UCollectionManagerScriptingSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCollectionManagerScriptingSubsystem, UEditorSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), Z_Construct_UClass_UCollectionManagerScriptingSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCollectionManagerScriptingSubsystem)


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_CollectionManagerScriptingSubsystem_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API UCollectionManagerScriptingSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCollectionManagerScriptingSubsystem(UCollectionManagerScriptingSubsystem&&) = delete; \
	UCollectionManagerScriptingSubsystem(const UCollectionManagerScriptingSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, UCollectionManagerScriptingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollectionManagerScriptingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCollectionManagerScriptingSubsystem) \
	UNREALED_API virtual ~UCollectionManagerScriptingSubsystem();


#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_CollectionManagerScriptingSubsystem_h_45_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_CollectionManagerScriptingSubsystem_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_CollectionManagerScriptingSubsystem_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_CollectionManagerScriptingSubsystem_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_CollectionManagerScriptingSubsystem_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCollectionManagerScriptingSubsystem;

// ********** End Class UCollectionManagerScriptingSubsystem ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_CollectionManagerScriptingSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
