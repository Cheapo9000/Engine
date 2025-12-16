// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMController.h"

#ifdef RIGVMDEVELOPER_RigVMController_generated_h
#error "RigVMController.generated.h already included, missing '#pragma once' in RigVMController.h"
#endif
#define RIGVMDEVELOPER_RigVMController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClass;
class UObject;
class URigVMActionStack;
class URigVMCollapseNode;
class URigVMCommentNode;
class URigVMController;
class URigVMEnumNode;
class URigVMFunctionReferenceNode;
class URigVMGraph;
class URigVMInjectionInfo;
class URigVMInvokeEntryNode;
class URigVMLibraryNode;
class URigVMLink;
class URigVMNode;
class URigVMParameterNode;
class URigVMRerouteNode;
class URigVMSchema;
class URigVMTemplateNode;
class URigVMUnitNode;
class URigVMUserWorkflowOptions;
class URigVMVariableNode;
class UScriptStruct;
enum class ERigVMOpCode : uint8;
enum class ERigVMPinDirection : uint8;
struct FGuid;
struct FLinearColor;
struct FRigVMGraphFunctionHeader;
struct FRigVMGraphFunctionIdentifier;
struct FRigVMGraphVariableDescription;
struct FRigVMNodeLayout;
struct FRigVMTag;
struct FRigVMUserWorkflow;
struct FRigVMVariantRef;

// ********** Begin ScriptStruct FRigStructScope ***************************************************
struct Z_Construct_UScriptStruct_FRigStructScope_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_103_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigStructScope_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigStructScope;
// ********** End ScriptStruct FRigStructScope *****************************************************

// ********** Begin ScriptStruct FRigVMClientPatchResult *******************************************
struct Z_Construct_UScriptStruct_FRigVMClientPatchResult_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_142_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMClientPatchResult_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigVMClientPatchResult;
// ********** End ScriptStruct FRigVMClientPatchResult *********************************************

// ********** Begin Class URigVMController *********************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_249_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetActionStack); \
	DECLARE_FUNCTION(execGetActionStack); \
	DECLARE_FUNCTION(execSetIsRunningUnitTest); \
	DECLARE_FUNCTION(execPerformUserWorkflow); \
	DECLARE_FUNCTION(execMakeOptionsForWorkflow); \
	DECLARE_FUNCTION(execSetLocalVariableDefaultValue); \
	DECLARE_FUNCTION(execSetLocalVariableTypeFromObjectPath); \
	DECLARE_FUNCTION(execSetLocalVariableType); \
	DECLARE_FUNCTION(execRenameLocalVariable); \
	DECLARE_FUNCTION(execRemoveLocalVariable); \
	DECLARE_FUNCTION(execAddLocalVariableFromObjectPath); \
	DECLARE_FUNCTION(execAddLocalVariable); \
	DECLARE_FUNCTION(execJoinFunctionVariant); \
	DECLARE_FUNCTION(execSplitFunctionVariant); \
	DECLARE_FUNCTION(execFindVariantsOfFunction); \
	DECLARE_FUNCTION(execRemoveTagFromFunctionVariant); \
	DECLARE_FUNCTION(execAddTagToFunctionVariant); \
	DECLARE_FUNCTION(execAddDefaultTagToFunctionVariant); \
	DECLARE_FUNCTION(execCreateFunctionVariant); \
	DECLARE_FUNCTION(execIsFunctionPublic); \
	DECLARE_FUNCTION(execMarkFunctionAsPublic); \
	DECLARE_FUNCTION(execRenameFunction); \
	DECLARE_FUNCTION(execRemoveFunctionFromLibrary); \
	DECLARE_FUNCTION(execAddFunctionToLibrary); \
	DECLARE_FUNCTION(execSetRemappedVariable); \
	DECLARE_FUNCTION(execSwapAllFunctionReferences); \
	DECLARE_FUNCTION(execSwapFunctionReference); \
	DECLARE_FUNCTION(execSwapFunctionReferenceByName); \
	DECLARE_FUNCTION(execAddFunctionReferenceNode); \
	DECLARE_FUNCTION(execAddExternalFunctionReferenceNode); \
	DECLARE_FUNCTION(execAddFunctionReferenceNodeFromDescription); \
	DECLARE_FUNCTION(execFindGraphFunctionIdentifier); \
	DECLARE_FUNCTION(execFindGraphFunctionHeader); \
	DECLARE_FUNCTION(execFindGraphFunctionHeaderByName); \
	DECLARE_FUNCTION(execSetExposedPinIndex); \
	DECLARE_FUNCTION(execChangeExposedPinType); \
	DECLARE_FUNCTION(execRenameExposedPin); \
	DECLARE_FUNCTION(execRemoveExposedPin); \
	DECLARE_FUNCTION(execAddExposedPin); \
	DECLARE_FUNCTION(execBreakAllLinks); \
	DECLARE_FUNCTION(execBreakLink); \
	DECLARE_FUNCTION(execAddLink); \
	DECLARE_FUNCTION(execPromotePinToVariable); \
	DECLARE_FUNCTION(execMakeVariableNodeFromBinding); \
	DECLARE_FUNCTION(execMakeBindingsFromVariableNode); \
	DECLARE_FUNCTION(execUnbindPinFromVariable); \
	DECLARE_FUNCTION(execBindPinToVariable); \
	DECLARE_FUNCTION(execSetArrayPinSize); \
	DECLARE_FUNCTION(execClearArrayPin); \
	DECLARE_FUNCTION(execRemoveArrayPin); \
	DECLARE_FUNCTION(execInsertArrayPin); \
	DECLARE_FUNCTION(execDuplicateArrayPin); \
	DECLARE_FUNCTION(execAddArrayPin); \
	DECLARE_FUNCTION(execRemoveAggregatePin); \
	DECLARE_FUNCTION(execAddAggregatePin); \
	DECLARE_FUNCTION(execClearOverrideOnAllPinsOnNodes); \
	DECLARE_FUNCTION(execClearOverrideOnAllPinsOnNode); \
	DECLARE_FUNCTION(execClearOverrideOnPins); \
	DECLARE_FUNCTION(execClearOverrideOnPin); \
	DECLARE_FUNCTION(execAddOverrideToAllPinsOnNodes); \
	DECLARE_FUNCTION(execAddOverrideToAllPinsOnNode); \
	DECLARE_FUNCTION(execAddOverrideToPins); \
	DECLARE_FUNCTION(execAddOverrideToPin); \
	DECLARE_FUNCTION(execResetDefaultValueForAllPinsOnNodes); \
	DECLARE_FUNCTION(execResetDefaultValueForAllPinsOnNode); \
	DECLARE_FUNCTION(execResetDefaultValueForPins); \
	DECLARE_FUNCTION(execResetPinDefaultValue); \
	DECLARE_FUNCTION(execSetPinDefaultValue); \
	DECLARE_FUNCTION(execGetPinDefaultValue); \
	DECLARE_FUNCTION(execClearNodeLayout); \
	DECLARE_FUNCTION(execSetNodeLayout); \
	DECLARE_FUNCTION(execSetPinIndexInCategory); \
	DECLARE_FUNCTION(execSetPinCategoryExpansion); \
	DECLARE_FUNCTION(execSetPinCategoryIndex); \
	DECLARE_FUNCTION(execRenamePinCategory); \
	DECLARE_FUNCTION(execRemovePinCategory); \
	DECLARE_FUNCTION(execClearPinCategory); \
	DECLARE_FUNCTION(execSetPinCategory); \
	DECLARE_FUNCTION(execAddEmptyPinCategory); \
	DECLARE_FUNCTION(execSetPinDisplayName); \
	DECLARE_FUNCTION(execSetPinIsWatched); \
	DECLARE_FUNCTION(execSetPinExpansion); \
	DECLARE_FUNCTION(execRenameParameter); \
	DECLARE_FUNCTION(execRenameVariable); \
	DECLARE_FUNCTION(execSetCommentTextByName); \
	DECLARE_FUNCTION(execSetCommentText); \
	DECLARE_FUNCTION(execSetNodeDescriptionByName); \
	DECLARE_FUNCTION(execSetNodeDescription); \
	DECLARE_FUNCTION(execSetNodeKeywordsByName); \
	DECLARE_FUNCTION(execSetNodeKeywords); \
	DECLARE_FUNCTION(execSetNodeCategoryByName); \
	DECLARE_FUNCTION(execSetNodeCategory); \
	DECLARE_FUNCTION(execSetNodeColorByName); \
	DECLARE_FUNCTION(execSetNodeColor); \
	DECLARE_FUNCTION(execSetNodeTitleByName); \
	DECLARE_FUNCTION(execSetNodeTitle); \
	DECLARE_FUNCTION(execSetNodeSizeByName); \
	DECLARE_FUNCTION(execSetNodeSize); \
	DECLARE_FUNCTION(execSetNodePositionByName); \
	DECLARE_FUNCTION(execSetNodePosition); \
	DECLARE_FUNCTION(execSelectNodeIslands); \
	DECLARE_FUNCTION(execSelectLinkedNodes); \
	DECLARE_FUNCTION(execSetNodeSelection); \
	DECLARE_FUNCTION(execClearNodeSelection); \
	DECLARE_FUNCTION(execSelectNodeByName); \
	DECLARE_FUNCTION(execSelectNode); \
	DECLARE_FUNCTION(execRenameNode); \
	DECLARE_FUNCTION(execRemoveNodesByName); \
	DECLARE_FUNCTION(execRemoveNodes); \
	DECLARE_FUNCTION(execRemoveNodeByName); \
	DECLARE_FUNCTION(execRemoveNode); \
	DECLARE_FUNCTION(execGeneratePythonCommands); \
	DECLARE_FUNCTION(execIsTransacting); \
	DECLARE_FUNCTION(execIsReportingEnabled); \
	DECLARE_FUNCTION(execEnableReporting); \
	DECLARE_FUNCTION(execGetControllerForGraph); \
	DECLARE_FUNCTION(execGetTopLevelGraph); \
	DECLARE_FUNCTION(execPopGraph); \
	DECLARE_FUNCTION(execPushGraph); \
	DECLARE_FUNCTION(execSetSchemaClass); \
	DECLARE_FUNCTION(execSetSchema); \
	DECLARE_FUNCTION(execGetSchema); \
	DECLARE_FUNCTION(execSetGraph); \
	DECLARE_FUNCTION(execGetGraph);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_249_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execPromoteFunctionReferenceNodeToCollapseNode); \
	DECLARE_FUNCTION(execPromoteCollapseNodeToFunctionReferenceNode); \
	DECLARE_FUNCTION(execExpandLibraryNode); \
	DECLARE_FUNCTION(execCollapseNodes); \
	DECLARE_FUNCTION(execLocalizeFunctions); \
	DECLARE_FUNCTION(execLocalizeFunction); \
	DECLARE_FUNCTION(execLocalizeFunctionFromPath); \
	DECLARE_FUNCTION(execImportNodesFromText); \
	DECLARE_FUNCTION(execCanImportNodesFromText); \
	DECLARE_FUNCTION(execExportSelectedNodesToText); \
	DECLARE_FUNCTION(execExportNodeToText); \
	DECLARE_FUNCTION(execExportNodesToText); \
	DECLARE_FUNCTION(execCancelUndoBracket); \
	DECLARE_FUNCTION(execCloseUndoBracket); \
	DECLARE_FUNCTION(execOpenUndoBracket); \
	DECLARE_FUNCTION(execRedo); \
	DECLARE_FUNCTION(execUndo); \
	DECLARE_FUNCTION(execRemoveTrait); \
	DECLARE_FUNCTION(execAddTrait); \
	DECLARE_FUNCTION(execAddInvokeEntryNode); \
	DECLARE_FUNCTION(execAddArrayNodeFromObjectPath); \
	DECLARE_FUNCTION(execAddArrayNode); \
	DECLARE_FUNCTION(execAddEnumNode); \
	DECLARE_FUNCTION(execEjectNodeFromPin); \
	DECLARE_FUNCTION(execRemoveInjectedNode); \
	DECLARE_FUNCTION(execAddInjectedNodeFromStructPath); \
	DECLARE_FUNCTION(execAddInjectedNode); \
	DECLARE_FUNCTION(execResolveWildCardPin); \
	DECLARE_FUNCTION(execGetTemplateForUnitStruct); \
	DECLARE_FUNCTION(execGetUnitStructsForTemplate); \
	DECLARE_FUNCTION(execGetRegisteredTemplates); \
	DECLARE_FUNCTION(execGetRegisteredUnitStructs); \
	DECLARE_FUNCTION(execAddTemplateNode); \
	DECLARE_FUNCTION(execAddSelectNodeFromStruct); \
	DECLARE_FUNCTION(execAddSelectNode); \
	DECLARE_FUNCTION(execAddIfNodeFromStruct); \
	DECLARE_FUNCTION(execAddIfNode); \
	DECLARE_FUNCTION(execAddBranchNode); \
	DECLARE_FUNCTION(execAddFreeRerouteNode); \
	DECLARE_FUNCTION(execAddRerouteNodeOnPin); \
	DECLARE_FUNCTION(execAddRerouteNodeOnLinkPath); \
	DECLARE_FUNCTION(execAddRerouteNodeOnLink); \
	DECLARE_FUNCTION(execAddCommentNode); \
	DECLARE_FUNCTION(execAddParameterNodeFromObjectPath); \
	DECLARE_FUNCTION(execAddParameterNode); \
	DECLARE_FUNCTION(execUpgradeNodes); \
	DECLARE_FUNCTION(execUnresolveTemplateNodes); \
	DECLARE_FUNCTION(execReplaceParameterNodeWithVariable); \
	DECLARE_FUNCTION(execRefreshVariableNode); \
	DECLARE_FUNCTION(execAddVariableNodeFromObjectPath); \
	DECLARE_FUNCTION(execAddVariableNode); \
	DECLARE_FUNCTION(execSetUnitNodeDefaults); \
	DECLARE_FUNCTION(execAddUnitNodeWithDefaults); \
	DECLARE_FUNCTION(execAddUnitNodeFromStructPath); \
	DECLARE_FUNCTION(execAddUnitNode);
#else // WITH_EDITOR
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_249_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


struct Z_Construct_UClass_URigVMController_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMController_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_249_INCLASS \
private: \
	static void StaticRegisterNativesURigVMController(); \
	friend struct ::Z_Construct_UClass_URigVMController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMController_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMController_NoRegister) \
	DECLARE_SERIALIZER(URigVMController)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_249_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGVMDEVELOPER_API URigVMController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMController); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMController(URigVMController&&) = delete; \
	URigVMController(const URigVMController&) = delete;


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_246_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_249_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_249_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_249_RPC_WRAPPERS_EOD \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_249_INCLASS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_249_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMController;

// ********** End Class URigVMController ***********************************************************

// ********** Begin ScriptStruct FRigVMController_CommonTypePerTemplate ****************************
struct Z_Construct_UScriptStruct_FRigVMController_CommonTypePerTemplate_Statics;
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1778_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRigVMController_CommonTypePerTemplate_Statics; \
	RIGVMDEVELOPER_API static class UScriptStruct* StaticStruct();


struct FRigVMController_CommonTypePerTemplate;
// ********** End ScriptStruct FRigVMController_CommonTypePerTemplate ******************************

// ********** Begin Class URigVMControllerSettings *************************************************
struct Z_Construct_UClass_URigVMControllerSettings_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMControllerSettings_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1793_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMControllerSettings(); \
	friend struct ::Z_Construct_UClass_URigVMControllerSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMControllerSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMControllerSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMControllerSettings_NoRegister) \
	DECLARE_SERIALIZER(URigVMControllerSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1793_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMControllerSettings(URigVMControllerSettings&&) = delete; \
	URigVMControllerSettings(const URigVMControllerSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMControllerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMControllerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigVMControllerSettings) \
	RIGVMDEVELOPER_API virtual ~URigVMControllerSettings();


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1787_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1793_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1793_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h_1793_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMControllerSettings;

// ********** End Class URigVMControllerSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMController_h

// ********** Begin Enum ERigVMControllerBulkEditType **********************************************
#define FOREACH_ENUM_ERIGVMCONTROLLERBULKEDITTYPE(op) \
	op(ERigVMControllerBulkEditType::AddExposedPin) \
	op(ERigVMControllerBulkEditType::RemoveExposedPin) \
	op(ERigVMControllerBulkEditType::RenameExposedPin) \
	op(ERigVMControllerBulkEditType::ChangeExposedPinType) \
	op(ERigVMControllerBulkEditType::AddVariable) \
	op(ERigVMControllerBulkEditType::RemoveVariable) \
	op(ERigVMControllerBulkEditType::RenameVariable) \
	op(ERigVMControllerBulkEditType::ChangeVariableType) \
	op(ERigVMControllerBulkEditType::RemoveFunction) \
	op(ERigVMControllerBulkEditType::Max) 

enum class ERigVMControllerBulkEditType : uint8;
template<> struct TIsUEnumClass<ERigVMControllerBulkEditType> { enum { Value = true }; };
template<> RIGVMDEVELOPER_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMControllerBulkEditType>();
// ********** End Enum ERigVMControllerBulkEditType ************************************************

// ********** Begin Enum ERigVMControllerBulkEditProgress ******************************************
#define FOREACH_ENUM_ERIGVMCONTROLLERBULKEDITPROGRESS(op) \
	op(ERigVMControllerBulkEditProgress::BeginLoad) \
	op(ERigVMControllerBulkEditProgress::FinishedLoad) \
	op(ERigVMControllerBulkEditProgress::BeginEdit) \
	op(ERigVMControllerBulkEditProgress::FinishedEdit) \
	op(ERigVMControllerBulkEditProgress::Max) 

enum class ERigVMControllerBulkEditProgress : uint8;
template<> struct TIsUEnumClass<ERigVMControllerBulkEditProgress> { enum { Value = true }; };
template<> RIGVMDEVELOPER_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMControllerBulkEditProgress>();
// ********** End Enum ERigVMControllerBulkEditProgress ********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
