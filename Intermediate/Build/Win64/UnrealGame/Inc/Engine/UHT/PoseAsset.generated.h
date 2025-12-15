// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/PoseAsset.h"

#ifdef ENGINE_PoseAsset_generated_h
#error "PoseAsset.generated.h already included, missing '#pragma once' in PoseAsset.h"
#endif
#define ENGINE_PoseAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class USkeletalMesh;

// ********** Begin ScriptStruct FPoseData *********************************************************
struct Z_Construct_UScriptStruct_FPoseData_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPoseData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPoseData;
// ********** End ScriptStruct FPoseData ***********************************************************

// ********** Begin ScriptStruct FPoseAssetInfluence ***********************************************
struct Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_63_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPoseAssetInfluence;
// ********** End ScriptStruct FPoseAssetInfluence *************************************************

// ********** Begin ScriptStruct FPoseAssetInfluences **********************************************
struct Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_75_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPoseAssetInfluences;
// ********** End ScriptStruct FPoseAssetInfluences ************************************************

// ********** Begin ScriptStruct FPoseDataContainer ************************************************
struct Z_Construct_UScriptStruct_FPoseDataContainer_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_89_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPoseDataContainer_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FPoseDataContainer;
// ********** End ScriptStruct FPoseDataContainer **************************************************

// ********** Begin Class UPoseAsset ***************************************************************
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_187_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execUpdateRetargetSourceAssetData); \
	DECLARE_FUNCTION(execGetRetargetSourceAsset); \
	DECLARE_FUNCTION(execClearRetargetSourceAsset); \
	DECLARE_FUNCTION(execSetRetargetSourceAsset); \
	DECLARE_FUNCTION(execUpdatePoseFromAnimation); \
	DECLARE_FUNCTION(execSetBasePoseName); \
	DECLARE_FUNCTION(execGetBasePoseName); \
	DECLARE_FUNCTION(execGetPoseNames); \
	DECLARE_FUNCTION(execRenamePose);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_187_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_187_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseAsset, ENGINE_API)


struct Z_Construct_UClass_UPoseAsset_Statics;
ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_187_INCLASS \
private: \
	static void StaticRegisterNativesUPoseAsset(); \
	friend struct ::Z_Construct_UClass_UPoseAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UPoseAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoseAsset, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UPoseAsset_NoRegister) \
	DECLARE_SERIALIZER(UPoseAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_187_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_187_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseAsset); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoseAsset(UPoseAsset&&) = delete; \
	UPoseAsset(const UPoseAsset&) = delete; \
	ENGINE_API virtual ~UPoseAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_184_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_187_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_187_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_187_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_187_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoseAsset;

// ********** End Class UPoseAsset *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
