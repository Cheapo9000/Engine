// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkinnedAssetCommon.h"

#ifdef ENGINE_SkinnedAssetCommon_generated_h
#error "SkinnedAssetCommon.generated.h already included, missing '#pragma once' in SkinnedAssetCommon.h"
#endif
#define ENGINE_SkinnedAssetCommon_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FSectionReference *************************************************
struct Z_Construct_UScriptStruct_FSectionReference_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSectionReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSectionReference;
// ********** End ScriptStruct FSectionReference ***************************************************

// ********** Begin ScriptStruct FMorphTargetImportedSourceFileInfo ********************************
struct Z_Construct_UScriptStruct_FMorphTargetImportedSourceFileInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FMorphTargetImportedSourceFileInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FMorphTargetImportedSourceFileInfo;
// ********** End ScriptStruct FMorphTargetImportedSourceFileInfo **********************************

// ********** Begin ScriptStruct FSkeletalMeshLODInfo **********************************************
struct Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSkeletalMeshLODInfo;
// ********** End ScriptStruct FSkeletalMeshLODInfo ************************************************

// ********** Begin ScriptStruct FSkeletalMaterial *************************************************
struct Z_Construct_UScriptStruct_FSkeletalMaterial_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h_371_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSkeletalMaterial_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FSkeletalMaterial;
// ********** End ScriptStruct FSkeletalMaterial ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAssetCommon_h

// ********** Begin Enum ESkinCacheUsage ***********************************************************
#define FOREACH_ENUM_ESKINCACHEUSAGE(op) \
	op(ESkinCacheUsage::Auto) \
	op(ESkinCacheUsage::Disabled) \
	op(ESkinCacheUsage::Enabled) 

enum class ESkinCacheUsage : uint8;
template<> struct TIsUEnumClass<ESkinCacheUsage> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkinCacheUsage>();
// ********** End Enum ESkinCacheUsage *************************************************************

// ********** Begin Enum ESkinCacheDefaultBehavior *************************************************
#define FOREACH_ENUM_ESKINCACHEDEFAULTBEHAVIOR(op) \
	op(ESkinCacheDefaultBehavior::Exclusive) \
	op(ESkinCacheDefaultBehavior::Inclusive) 

enum class ESkinCacheDefaultBehavior : uint8;
template<> struct TIsUEnumClass<ESkinCacheDefaultBehavior> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkinCacheDefaultBehavior>();
// ********** End Enum ESkinCacheDefaultBehavior ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
