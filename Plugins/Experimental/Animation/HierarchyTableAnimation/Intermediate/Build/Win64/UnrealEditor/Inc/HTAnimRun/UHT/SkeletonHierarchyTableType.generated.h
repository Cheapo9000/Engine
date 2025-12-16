// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SkeletonHierarchyTableType.h"

#ifdef HIERARCHYTABLEANIMATIONRUNTIME_SkeletonHierarchyTableType_generated_h
#error "SkeletonHierarchyTableType.generated.h already included, missing '#pragma once' in SkeletonHierarchyTableType.h"
#endif
#define HIERARCHYTABLEANIMATIONRUNTIME_SkeletonHierarchyTableType_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FHierarchyTable_TableType_Skeleton ********************************
struct Z_Construct_UScriptStruct_FHierarchyTable_TableType_Skeleton_Statics;
#define FID_Engine_Plugins_Experimental_Animation_HierarchyTableAnimation_Source_Runtime_Public_SkeletonHierarchyTableType_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHierarchyTable_TableType_Skeleton_Statics; \
	HIERARCHYTABLEANIMATIONRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FHierarchyTable_TableType Super;


struct FHierarchyTable_TableType_Skeleton;
// ********** End ScriptStruct FHierarchyTable_TableType_Skeleton **********************************

// ********** Begin ScriptStruct FHierarchyTable_TablePayloadType_Skeleton *************************
struct Z_Construct_UScriptStruct_FHierarchyTable_TablePayloadType_Skeleton_Statics;
#define FID_Engine_Plugins_Experimental_Animation_HierarchyTableAnimation_Source_Runtime_Public_SkeletonHierarchyTableType_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FHierarchyTable_TablePayloadType_Skeleton_Statics; \
	HIERARCHYTABLEANIMATIONRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FHierarchyTable_TablePayloadType Super;


struct FHierarchyTable_TablePayloadType_Skeleton;
// ********** End ScriptStruct FHierarchyTable_TablePayloadType_Skeleton ***************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_HierarchyTableAnimation_Source_Runtime_Public_SkeletonHierarchyTableType_h

// ********** Begin Enum ESkeletonHierarchyTable_TablePayloadEntryType *****************************
#define FOREACH_ENUM_ESKELETONHIERARCHYTABLE_TABLEPAYLOADENTRYTYPE(op) \
	op(ESkeletonHierarchyTable_TablePayloadEntryType::Bone) \
	op(ESkeletonHierarchyTable_TablePayloadEntryType::Curve) \
	op(ESkeletonHierarchyTable_TablePayloadEntryType::Attribute) 

enum class ESkeletonHierarchyTable_TablePayloadEntryType;
template<> struct TIsUEnumClass<ESkeletonHierarchyTable_TablePayloadEntryType> { enum { Value = true }; };
template<> HIERARCHYTABLEANIMATIONRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<ESkeletonHierarchyTable_TablePayloadEntryType>();
// ********** End Enum ESkeletonHierarchyTable_TablePayloadEntryType *******************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
