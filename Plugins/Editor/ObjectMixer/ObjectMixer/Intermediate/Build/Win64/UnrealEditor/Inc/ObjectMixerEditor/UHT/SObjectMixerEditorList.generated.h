// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Views/List/SObjectMixerEditorList.h"

#ifdef OBJECTMIXEREDITOR_SObjectMixerEditorList_generated_h
#error "SObjectMixerEditorList.generated.h already included, missing '#pragma once' in SObjectMixerEditorList.h"
#endif
#define OBJECTMIXEREDITOR_SObjectMixerEditorList_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FObjectMixerSceneOutlinerColumnInfo *******************************
struct Z_Construct_UScriptStruct_FObjectMixerSceneOutlinerColumnInfo_Statics;
#define FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_List_SObjectMixerEditorList_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FObjectMixerSceneOutlinerColumnInfo_Statics; \
	OBJECTMIXEREDITOR_API static class UScriptStruct* StaticStruct();


struct FObjectMixerSceneOutlinerColumnInfo;
// ********** End ScriptStruct FObjectMixerSceneOutlinerColumnInfo *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_List_SObjectMixerEditorList_h

// ********** Begin Enum EListViewColumnType *******************************************************
#define FOREACH_ENUM_ELISTVIEWCOLUMNTYPE(op) \
	op(EListViewColumnType::BuiltIn) \
	op(EListViewColumnType::PropertyGenerated) 

enum class EListViewColumnType;
template<> struct TIsUEnumClass<EListViewColumnType> { enum { Value = true }; };
template<> OBJECTMIXEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EListViewColumnType>();
// ********** End Enum EListViewColumnType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
