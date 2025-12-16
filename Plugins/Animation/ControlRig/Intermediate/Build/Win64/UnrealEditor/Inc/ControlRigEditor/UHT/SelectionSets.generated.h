// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/SelectionSets/SelectionSets.h"

#ifdef CONTROLRIGEDITOR_SelectionSets_generated_h
#error "SelectionSets.generated.h already included, missing '#pragma once' in SelectionSets.h"
#endif
#define CONTROLRIGEDITOR_SelectionSets_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FFilePath;
struct FGuid;
struct FLinearColor;

// ********** Begin ScriptStruct FAIESelectionSetItemName ******************************************
struct Z_Construct_UScriptStruct_FAIESelectionSetItemName_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIESelectionSetItemName_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FAIESelectionSetItemName;
// ********** End ScriptStruct FAIESelectionSetItemName ********************************************

// ********** Begin ScriptStruct FAIESelectionSetItemViewData **************************************
struct Z_Construct_UScriptStruct_FAIESelectionSetItemViewData_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIESelectionSetItemViewData_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FAIESelectionSetItemViewData;
// ********** End ScriptStruct FAIESelectionSetItemViewData ****************************************

// ********** Begin ScriptStruct FAIESelectionSetItem **********************************************
struct Z_Construct_UScriptStruct_FAIESelectionSetItem_Statics;
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h_79_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAIESelectionSetItem_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


struct FAIESelectionSetItem;
// ********** End ScriptStruct FAIESelectionSetItem ************************************************

// ********** Begin Class UAIESelectionSets ********************************************************
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h_173_RPC_WRAPPERS \
	DECLARE_FUNCTION(execExportAsJsonString); \
	DECLARE_FUNCTION(execLoadFromJsonString); \
	DECLARE_FUNCTION(execExportAsJsonFile); \
	DECLARE_FUNCTION(execLoadFromJsonFile); \
	DECLARE_FUNCTION(execKeyAll); \
	DECLARE_FUNCTION(execShowAllControls); \
	DECLARE_FUNCTION(execIsolateControls); \
	DECLARE_FUNCTION(execShowOrHideControls); \
	DECLARE_FUNCTION(execSelectItem); \
	DECLARE_FUNCTION(execSetItemRow); \
	DECLARE_FUNCTION(execGetItemRow); \
	DECLARE_FUNCTION(execSetItemColor); \
	DECLARE_FUNCTION(execGetItemColor); \
	DECLARE_FUNCTION(execDeleteSetItem); \
	DECLARE_FUNCTION(execGetItemGuids); \
	DECLARE_FUNCTION(execIsMultiAsset); \
	DECLARE_FUNCTION(execGetItemName); \
	DECLARE_FUNCTION(execRenameSetItem); \
	DECLARE_FUNCTION(execRemoveSelectionFromSetItem); \
	DECLARE_FUNCTION(execAddSelectionToSetItem); \
	DECLARE_FUNCTION(execCreateMirror); \
	DECLARE_FUNCTION(execCreateSetItemFromSelection); \
	DECLARE_FUNCTION(execGetActiveActors); \
	DECLARE_FUNCTION(execGetAllActors); \
	DECLARE_FUNCTION(execSetActorAsActive); \
	DECLARE_FUNCTION(execGetActiveSelectionSets); \
	DECLARE_FUNCTION(execSetShowAndSetSelectedOnly); \
	DECLARE_FUNCTION(execGetShowAndSetSelectedOnly);


struct Z_Construct_UClass_UAIESelectionSets_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UAIESelectionSets_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h_173_INCLASS \
private: \
	static void StaticRegisterNativesUAIESelectionSets(); \
	friend struct ::Z_Construct_UClass_UAIESelectionSets_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_UAIESelectionSets_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIESelectionSets, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_UAIESelectionSets_NoRegister) \
	DECLARE_SERIALIZER(UAIESelectionSets)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONTROLRIGEDITOR_API UAIESelectionSets(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIESelectionSets) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGEDITOR_API, UAIESelectionSets); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIESelectionSets); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIESelectionSets(UAIESelectionSets&&) = delete; \
	UAIESelectionSets(const UAIESelectionSets&) = delete; \
	CONTROLRIGEDITOR_API virtual ~UAIESelectionSets();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h_170_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h_173_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h_173_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIESelectionSets;

// ********** End Class UAIESelectionSets **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_SelectionSets_SelectionSets_h

// ********** Begin Enum EAIESelectionSetItemType **************************************************
#define FOREACH_ENUM_EAIESELECTIONSETITEMTYPE(op) \
	op(ControlRig) \
	op(Actor) 

enum EAIESelectionSetItemType : int32;
template<> CONTROLRIGEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<EAIESelectionSetItemType>();
// ********** End Enum EAIESelectionSetItemType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
