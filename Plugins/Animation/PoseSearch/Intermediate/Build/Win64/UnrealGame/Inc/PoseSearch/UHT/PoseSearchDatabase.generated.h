// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchDatabase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef POSESEARCH_PoseSearchDatabase_generated_h
#error "PoseSearchDatabase.generated.h already included, missing '#pragma once' in PoseSearchDatabase.h"
#endif
#define POSESEARCH_PoseSearchDatabase_generated_h

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchDatabaseAnimationAssetBase>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchDatabaseSequence>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchDatabaseBlendSpace>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_258_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchDatabaseAnimComposite>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_301_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchDatabaseAnimMontage>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_343_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseMultiAnimAsset_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchDatabaseMultiAnimAsset>();

#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_394_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAnimationAsset); \
	DECLARE_FUNCTION(execGetNumAnimationAssets);


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_394_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseSearchDatabase, NO_API)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_394_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchDatabase(); \
	friend struct Z_Construct_UClass_UPoseSearchDatabase_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchDatabase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchDatabase) \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_394_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_394_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseSearchDatabase(UPoseSearchDatabase&&); \
	UPoseSearchDatabase(const UPoseSearchDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchDatabase)


#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_391_PROLOG
#define FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_394_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_394_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_394_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_394_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h


#define FOREACH_ENUM_EPOSESEARCHMODE(op) \
	op(EPoseSearchMode::BruteForce) \
	op(EPoseSearchMode::PCAKDTree) \
	op(EPoseSearchMode::VPTree) 

enum class EPoseSearchMode : int32;
template<> struct TIsUEnumClass<EPoseSearchMode> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchMode>();

#define FOREACH_ENUM_EPOSESEARCHMIRROROPTION(op) \
	op(EPoseSearchMirrorOption::UnmirroredOnly) \
	op(EPoseSearchMirrorOption::MirroredOnly) \
	op(EPoseSearchMirrorOption::UnmirroredAndMirrored) 

enum class EPoseSearchMirrorOption : int32;
template<> struct TIsUEnumClass<EPoseSearchMirrorOption> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchMirrorOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
