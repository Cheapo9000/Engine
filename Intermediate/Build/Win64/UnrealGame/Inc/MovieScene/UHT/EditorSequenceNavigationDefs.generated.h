// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorSequenceNavigationDefs.h"

#ifdef MOVIESCENE_EditorSequenceNavigationDefs_generated_h
#error "EditorSequenceNavigationDefs.generated.h already included, missing '#pragma once' in EditorSequenceNavigationDefs.h"
#endif
#define MOVIESCENE_EditorSequenceNavigationDefs_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNavigationToolSerializedItem *************************************
struct Z_Construct_UScriptStruct_FNavigationToolSerializedItem_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_EditorSequenceNavigationDefs_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigationToolSerializedItem_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FNavigationToolSerializedItem;
// ********** End ScriptStruct FNavigationToolSerializedItem ***************************************

// ********** Begin ScriptStruct FNavigationToolSerializedTreeNode *********************************
struct Z_Construct_UScriptStruct_FNavigationToolSerializedTreeNode_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_EditorSequenceNavigationDefs_h_57_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigationToolSerializedTreeNode_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FNavigationToolSerializedTreeNode;
// ********** End ScriptStruct FNavigationToolSerializedTreeNode ***********************************

// ********** Begin ScriptStruct FNavigationToolSerializedTree *************************************
struct Z_Construct_UScriptStruct_FNavigationToolSerializedTree_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_EditorSequenceNavigationDefs_h_99_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigationToolSerializedTree_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FNavigationToolSerializedTree;
// ********** End ScriptStruct FNavigationToolSerializedTree ***************************************

// ********** Begin ScriptStruct FNavigationToolViewColumnSaveState ********************************
struct Z_Construct_UScriptStruct_FNavigationToolViewColumnSaveState_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_EditorSequenceNavigationDefs_h_137_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigationToolViewColumnSaveState_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FNavigationToolViewColumnSaveState;
// ********** End ScriptStruct FNavigationToolViewColumnSaveState **********************************

// ********** Begin ScriptStruct FNavigationToolViewSaveState **************************************
struct Z_Construct_UScriptStruct_FNavigationToolViewSaveState_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_EditorSequenceNavigationDefs_h_149_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigationToolViewSaveState_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FNavigationToolViewSaveState;
// ********** End ScriptStruct FNavigationToolViewSaveState ****************************************

// ********** Begin ScriptStruct FNavigationToolSaveState ******************************************
struct Z_Construct_UScriptStruct_FNavigationToolSaveState_Statics;
#define FID_Engine_Source_Runtime_MovieScene_Public_EditorSequenceNavigationDefs_h_167_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNavigationToolSaveState_Statics; \
	MOVIESCENE_API static class UScriptStruct* StaticStruct();


struct FNavigationToolSaveState;
// ********** End ScriptStruct FNavigationToolSaveState ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MovieScene_Public_EditorSequenceNavigationDefs_h

// ********** Begin Enum ENavigationToolItemFlags **************************************************
#define FOREACH_ENUM_ENAVIGATIONTOOLITEMFLAGS(op) \
	op(ENavigationToolItemFlags::None) \
	op(ENavigationToolItemFlags::IgnorePendingKill) \
	op(ENavigationToolItemFlags::PendingRemoval) \
	op(ENavigationToolItemFlags::Expanded) 

enum class ENavigationToolItemFlags : uint8;
template<> struct TIsUEnumClass<ENavigationToolItemFlags> { enum { Value = true }; };
template<> MOVIESCENE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENavigationToolItemFlags>();
// ********** End Enum ENavigationToolItemFlags ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
