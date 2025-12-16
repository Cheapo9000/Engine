// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMControllerActions.h"

#ifdef RIGVMDEVELOPER_RigVMControllerActions_generated_h
#error "RigVMControllerActions.generated.h already included, missing '#pragma once' in RigVMControllerActions.h"
#endif
#define RIGVMDEVELOPER_RigVMControllerActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URigVMController;

// ********** Begin ScriptStruct FRigVMActionKey ***************************************************
struct Z_Construct_UScriptStruct_FRigVMActionKey_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_47_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMActionKey_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigVMActionKey;
// ********** End ScriptStruct FRigVMActionKey *****************************************************

// ********** Begin ScriptStruct FRigVMActionNodeContent *******************************************
struct Z_Construct_UScriptStruct_FRigVMActionNodeContent_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_101_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMActionNodeContent_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigVMActionNodeContent;
// ********** End ScriptStruct FRigVMActionNodeContent *********************************************

// ********** Begin ScriptStruct FRigVMBaseAction **************************************************
struct Z_Construct_UScriptStruct_FRigVMBaseAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_118_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMBaseAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigVMBaseAction;
// ********** End ScriptStruct FRigVMBaseAction ****************************************************

// ********** Begin Class URigVMActionStack ********************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execCancelUndoBracket); \
	DECLARE_FUNCTION(execCloseUndoBracket); \
	DECLARE_FUNCTION(execOpenUndoBracket);


struct Z_Construct_UClass_URigVMActionStack_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMActionStack_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_232_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMActionStack(); \
	friend struct ::Z_Construct_UClass_URigVMActionStack_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMActionStack_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMActionStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMActionStack_NoRegister) \
	DECLARE_SERIALIZER(URigVMActionStack)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_232_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMActionStack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMActionStack(URigVMActionStack&&) = delete; \
	URigVMActionStack(const URigVMActionStack&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMActionStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMActionStack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMActionStack)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_229_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_232_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_232_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_232_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_232_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMActionStack;

// ********** End Class URigVMActionStack **********************************************************

// ********** Begin ScriptStruct FRigVMInjectNodeIntoPinAction *************************************
struct Z_Construct_UScriptStruct_FRigVMInjectNodeIntoPinAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_468_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMInjectNodeIntoPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMInjectNodeIntoPinAction;
// ********** End ScriptStruct FRigVMInjectNodeIntoPinAction ***************************************

// ********** Begin ScriptStruct FRigVMEjectNodeFromPinAction **************************************
struct Z_Construct_UScriptStruct_FRigVMEjectNodeFromPinAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_501_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMEjectNodeFromPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMInjectNodeIntoPinAction Super;


struct FRigVMEjectNodeFromPinAction;
// ********** End ScriptStruct FRigVMEjectNodeFromPinAction ****************************************

// ********** Begin ScriptStruct FRigVMRemoveNodesAction *******************************************
struct Z_Construct_UScriptStruct_FRigVMRemoveNodesAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_519_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRemoveNodesAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMRemoveNodesAction;
// ********** End ScriptStruct FRigVMRemoveNodesAction *********************************************

// ********** Begin ScriptStruct FRigVMSetNodeSelectionAction **************************************
struct Z_Construct_UScriptStruct_FRigVMSetNodeSelectionAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_543_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetNodeSelectionAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetNodeSelectionAction;
// ********** End ScriptStruct FRigVMSetNodeSelectionAction ****************************************

// ********** Begin ScriptStruct FRigVMSetNodePositionAction ***************************************
struct Z_Construct_UScriptStruct_FRigVMSetNodePositionAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_567_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetNodePositionAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetNodePositionAction;
// ********** End ScriptStruct FRigVMSetNodePositionAction *****************************************

// ********** Begin ScriptStruct FRigVMSetNodeSizeAction *******************************************
struct Z_Construct_UScriptStruct_FRigVMSetNodeSizeAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_595_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetNodeSizeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetNodeSizeAction;
// ********** End ScriptStruct FRigVMSetNodeSizeAction *********************************************

// ********** Begin ScriptStruct FRigVMSetNodeTitleAction ******************************************
struct Z_Construct_UScriptStruct_FRigVMSetNodeTitleAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_623_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetNodeTitleAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetNodeTitleAction;
// ********** End ScriptStruct FRigVMSetNodeTitleAction ********************************************

// ********** Begin ScriptStruct FRigVMSetNodeColorAction ******************************************
struct Z_Construct_UScriptStruct_FRigVMSetNodeColorAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_651_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetNodeColorAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetNodeColorAction;
// ********** End ScriptStruct FRigVMSetNodeColorAction ********************************************

// ********** Begin ScriptStruct FRigVMSetNodeCategoryAction ***************************************
struct Z_Construct_UScriptStruct_FRigVMSetNodeCategoryAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_679_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetNodeCategoryAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetNodeCategoryAction;
// ********** End ScriptStruct FRigVMSetNodeCategoryAction *****************************************

// ********** Begin ScriptStruct FRigVMSetNodeKeywordsAction ***************************************
struct Z_Construct_UScriptStruct_FRigVMSetNodeKeywordsAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_708_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetNodeKeywordsAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetNodeKeywordsAction;
// ********** End ScriptStruct FRigVMSetNodeKeywordsAction *****************************************

// ********** Begin ScriptStruct FRigVMSetNodeDescriptionAction ************************************
struct Z_Construct_UScriptStruct_FRigVMSetNodeDescriptionAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_736_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetNodeDescriptionAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetNodeDescriptionAction;
// ********** End ScriptStruct FRigVMSetNodeDescriptionAction **************************************

// ********** Begin ScriptStruct FRigVMSetCommentTextAction ****************************************
struct Z_Construct_UScriptStruct_FRigVMSetCommentTextAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_764_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetCommentTextAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetCommentTextAction;
// ********** End ScriptStruct FRigVMSetCommentTextAction ******************************************

// ********** Begin ScriptStruct FRigVMRenameVariableAction ****************************************
struct Z_Construct_UScriptStruct_FRigVMRenameVariableAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_809_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRenameVariableAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMRenameVariableAction;
// ********** End ScriptStruct FRigVMRenameVariableAction ******************************************

// ********** Begin ScriptStruct FRigVMSetPinExpansionAction ***************************************
struct Z_Construct_UScriptStruct_FRigVMSetPinExpansionAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_833_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetPinExpansionAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetPinExpansionAction;
// ********** End ScriptStruct FRigVMSetPinExpansionAction *****************************************

// ********** Begin ScriptStruct FRigVMSetPinWatchAction *******************************************
struct Z_Construct_UScriptStruct_FRigVMSetPinWatchAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_860_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetPinWatchAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetPinWatchAction;
// ********** End ScriptStruct FRigVMSetPinWatchAction *********************************************

// ********** Begin ScriptStruct FRigVMSetPinDisplayNameAction *************************************
struct Z_Construct_UScriptStruct_FRigVMSetPinDisplayNameAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_887_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetPinDisplayNameAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetPinDisplayNameAction;
// ********** End ScriptStruct FRigVMSetPinDisplayNameAction ***************************************

// ********** Begin ScriptStruct FRigVMSetPinCategoryAction ****************************************
struct Z_Construct_UScriptStruct_FRigVMSetPinCategoryAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_914_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetPinCategoryAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetPinCategoryAction;
// ********** End ScriptStruct FRigVMSetPinCategoryAction ******************************************

// ********** Begin ScriptStruct FRigVMChangeNodePinCategoriesAction *******************************
struct Z_Construct_UScriptStruct_FRigVMChangeNodePinCategoriesAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_944_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMChangeNodePinCategoriesAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMChangeNodePinCategoriesAction;
// ********** End ScriptStruct FRigVMChangeNodePinCategoriesAction *********************************

// ********** Begin ScriptStruct FRigVMSetPinCategoryExpansionAction *******************************
struct Z_Construct_UScriptStruct_FRigVMSetPinCategoryExpansionAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_973_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetPinCategoryExpansionAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetPinCategoryExpansionAction;
// ********** End ScriptStruct FRigVMSetPinCategoryExpansionAction *********************************

// ********** Begin ScriptStruct FRigVMSetPinIndexInCategoryAction *********************************
struct Z_Construct_UScriptStruct_FRigVMSetPinIndexInCategoryAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1000_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetPinIndexInCategoryAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetPinIndexInCategoryAction;
// ********** End ScriptStruct FRigVMSetPinIndexInCategoryAction ***********************************

// ********** Begin ScriptStruct FRigVMSetPinDefaultValueAction ************************************
struct Z_Construct_UScriptStruct_FRigVMSetPinDefaultValueAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1027_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetPinDefaultValueAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetPinDefaultValueAction;
// ********** End ScriptStruct FRigVMSetPinDefaultValueAction **************************************

// ********** Begin ScriptStruct FRigVMInsertArrayPinAction ****************************************
struct Z_Construct_UScriptStruct_FRigVMInsertArrayPinAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1061_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMInsertArrayPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMInsertArrayPinAction;
// ********** End ScriptStruct FRigVMInsertArrayPinAction ******************************************

// ********** Begin ScriptStruct FRigVMRemoveArrayPinAction ****************************************
struct Z_Construct_UScriptStruct_FRigVMRemoveArrayPinAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1091_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRemoveArrayPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMRemoveArrayPinAction;
// ********** End ScriptStruct FRigVMRemoveArrayPinAction ******************************************

// ********** Begin ScriptStruct FRigVMAddLinkAction ***********************************************
struct Z_Construct_UScriptStruct_FRigVMAddLinkAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1121_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMAddLinkAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMAddLinkAction;
// ********** End ScriptStruct FRigVMAddLinkAction *************************************************

// ********** Begin ScriptStruct FRigVMBreakLinkAction *********************************************
struct Z_Construct_UScriptStruct_FRigVMBreakLinkAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1145_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMBreakLinkAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMBreakLinkAction;
// ********** End ScriptStruct FRigVMBreakLinkAction ***********************************************

// ********** Begin ScriptStruct FRigVMChangePinTypeAction *****************************************
struct Z_Construct_UScriptStruct_FRigVMChangePinTypeAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1172_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMChangePinTypeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMChangePinTypeAction;
// ********** End ScriptStruct FRigVMChangePinTypeAction *******************************************

// ********** Begin ScriptStruct FRigVMCollapseNodesAction *****************************************
struct Z_Construct_UScriptStruct_FRigVMCollapseNodesAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1208_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMCollapseNodesAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMCollapseNodesAction;
// ********** End ScriptStruct FRigVMCollapseNodesAction *******************************************

// ********** Begin ScriptStruct FRigVMExpandNodeAction ********************************************
struct Z_Construct_UScriptStruct_FRigVMExpandNodeAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1238_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMExpandNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMExpandNodeAction;
// ********** End ScriptStruct FRigVMExpandNodeAction **********************************************

// ********** Begin ScriptStruct FRigVMRenameNodeAction ********************************************
struct Z_Construct_UScriptStruct_FRigVMRenameNodeAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1265_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRenameNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMRenameNodeAction;
// ********** End ScriptStruct FRigVMRenameNodeAction **********************************************

// ********** Begin ScriptStruct FRigVMAddExposedPinAction *****************************************
struct Z_Construct_UScriptStruct_FRigVMAddExposedPinAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1289_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMAddExposedPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMAddExposedPinAction;
// ********** End ScriptStruct FRigVMAddExposedPinAction *******************************************

// ********** Begin ScriptStruct FRigVMRemoveExposedPinAction **************************************
struct Z_Construct_UScriptStruct_FRigVMRemoveExposedPinAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1322_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRemoveExposedPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMRemoveExposedPinAction;
// ********** End ScriptStruct FRigVMRemoveExposedPinAction ****************************************

// ********** Begin ScriptStruct FRigVMRenameExposedPinAction **************************************
struct Z_Construct_UScriptStruct_FRigVMRenameExposedPinAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1358_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRenameExposedPinAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMRenameExposedPinAction;
// ********** End ScriptStruct FRigVMRenameExposedPinAction ****************************************

// ********** Begin ScriptStruct FRigVMSetPinIndexAction *******************************************
struct Z_Construct_UScriptStruct_FRigVMSetPinIndexAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1382_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetPinIndexAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetPinIndexAction;
// ********** End ScriptStruct FRigVMSetPinIndexAction *********************************************

// ********** Begin ScriptStruct FRigVMSetRemappedVariableAction ***********************************
struct Z_Construct_UScriptStruct_FRigVMSetRemappedVariableAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1409_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMSetRemappedVariableAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMSetRemappedVariableAction;
// ********** End ScriptStruct FRigVMSetRemappedVariableAction *************************************

// ********** Begin ScriptStruct FRigVMAddLocalVariableAction **************************************
struct Z_Construct_UScriptStruct_FRigVMAddLocalVariableAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1440_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMAddLocalVariableAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMAddLocalVariableAction;
// ********** End ScriptStruct FRigVMAddLocalVariableAction ****************************************

// ********** Begin ScriptStruct FRigVMRemoveLocalVariableAction ***********************************
struct Z_Construct_UScriptStruct_FRigVMRemoveLocalVariableAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1461_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRemoveLocalVariableAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMRemoveLocalVariableAction;
// ********** End ScriptStruct FRigVMRemoveLocalVariableAction *************************************

// ********** Begin ScriptStruct FRigVMRenameLocalVariableAction ***********************************
struct Z_Construct_UScriptStruct_FRigVMRenameLocalVariableAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1482_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRenameLocalVariableAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMRenameLocalVariableAction;
// ********** End ScriptStruct FRigVMRenameLocalVariableAction *************************************

// ********** Begin ScriptStruct FRigVMChangeLocalVariableTypeAction *******************************
struct Z_Construct_UScriptStruct_FRigVMChangeLocalVariableTypeAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1506_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMChangeLocalVariableTypeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMChangeLocalVariableTypeAction;
// ********** End ScriptStruct FRigVMChangeLocalVariableTypeAction *********************************

// ********** Begin ScriptStruct FRigVMChangeLocalVariableDefaultValueAction ***********************
struct Z_Construct_UScriptStruct_FRigVMChangeLocalVariableDefaultValueAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1532_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMChangeLocalVariableDefaultValueAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMChangeLocalVariableDefaultValueAction;
// ********** End ScriptStruct FRigVMChangeLocalVariableDefaultValueAction *************************

// ********** Begin ScriptStruct FRigVMPromoteNodeAction *******************************************
struct Z_Construct_UScriptStruct_FRigVMPromoteNodeAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1555_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMPromoteNodeAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMPromoteNodeAction;
// ********** End ScriptStruct FRigVMPromoteNodeAction *********************************************

// ********** Begin ScriptStruct FRigVMMarkFunctionPublicAction ************************************
struct Z_Construct_UScriptStruct_FRigVMMarkFunctionPublicAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1582_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMMarkFunctionPublicAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMMarkFunctionPublicAction;
// ********** End ScriptStruct FRigVMMarkFunctionPublicAction **************************************

// ********** Begin ScriptStruct FRigVMCreateFunctionVariantAction *********************************
struct Z_Construct_UScriptStruct_FRigVMCreateFunctionVariantAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1606_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMCreateFunctionVariantAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMCreateFunctionVariantAction;
// ********** End ScriptStruct FRigVMCreateFunctionVariantAction ***********************************

// ********** Begin ScriptStruct FRigVMAddFunctionVariantTagAction *********************************
struct Z_Construct_UScriptStruct_FRigVMAddFunctionVariantTagAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1630_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMAddFunctionVariantTagAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMAddFunctionVariantTagAction;
// ********** End ScriptStruct FRigVMAddFunctionVariantTagAction ***********************************

// ********** Begin ScriptStruct FRigVMRemoveFunctionVariantTagAction ******************************
struct Z_Construct_UScriptStruct_FRigVMRemoveFunctionVariantTagAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1654_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRemoveFunctionVariantTagAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMRemoveFunctionVariantTagAction;
// ********** End ScriptStruct FRigVMRemoveFunctionVariantTagAction ********************************

// ********** Begin ScriptStruct FRigVMImportFromTextAction ****************************************
struct Z_Construct_UScriptStruct_FRigVMImportFromTextAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1678_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMImportFromTextAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMImportFromTextAction;
// ********** End ScriptStruct FRigVMImportFromTextAction ******************************************

// ********** Begin ScriptStruct FRigVMReplaceNodesAction ******************************************
struct Z_Construct_UScriptStruct_FRigVMReplaceNodesAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1705_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMReplaceNodesAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMReplaceNodesAction;
// ********** End ScriptStruct FRigVMReplaceNodesAction ********************************************

// ********** Begin ScriptStruct FRigVMAddTraitAction **********************************************
struct Z_Construct_UScriptStruct_FRigVMAddTraitAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1723_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMAddTraitAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMBaseAction Super;


struct FRigVMAddTraitAction;
// ********** End ScriptStruct FRigVMAddTraitAction ************************************************

// ********** Begin ScriptStruct FRigVMRemoveTraitAction *******************************************
struct Z_Construct_UScriptStruct_FRigVMRemoveTraitAction_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h_1756_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMRemoveTraitAction_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct(); \
	typedef FRigVMAddTraitAction Super;


struct FRigVMRemoveTraitAction;
// ********** End ScriptStruct FRigVMRemoveTraitAction *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMControllerActions_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
