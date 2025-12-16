// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMNode.h"

#ifdef RIGVMDEVELOPER_RigVMNode_generated_h
#error "RigVMNode.generated.h already included, missing '#pragma once' in RigVMNode.h"
#endif
#define RIGVMDEVELOPER_RigVMNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URigVMGraph;
class URigVMInjectionInfo;
class URigVMLibraryNode;
class URigVMLink;
class URigVMNode;
class URigVMPin;
enum class ERigVMPinDirection : uint8;
enum class ERigVMUserWorkflowType : uint8;
struct FLinearColor;
struct FRigVMNodeLayout;
struct FRigVMUserWorkflow;

// ********** Begin Class URigVMNode ***************************************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTraitPin); \
	DECLARE_FUNCTION(execGetTraitPins); \
	DECLARE_FUNCTION(execFindFunctionForNode); \
	DECLARE_FUNCTION(execGetNextAggregateName); \
	DECLARE_FUNCTION(execGetAggregateOutputs); \
	DECLARE_FUNCTION(execGetAggregateInputs); \
	DECLARE_FUNCTION(execIsInputAggregate); \
	DECLARE_FUNCTION(execGetOppositeAggregatePin); \
	DECLARE_FUNCTION(execGetSecondAggregatePin); \
	DECLARE_FUNCTION(execGetFirstAggregatePin); \
	DECLARE_FUNCTION(execIsAggregate); \
	DECLARE_FUNCTION(execSetExecutionIsHaltedAtThisNode); \
	DECLARE_FUNCTION(execExecutionIsHaltedAtThisNode); \
	DECLARE_FUNCTION(execSetIsExcludedByEarlyExit); \
	DECLARE_FUNCTION(execIsExcludedByEarlyExit); \
	DECLARE_FUNCTION(execSetHasEarlyExitMarker); \
	DECLARE_FUNCTION(execHasEarlyExitMarker); \
	DECLARE_FUNCTION(execSetHasBreakpoint); \
	DECLARE_FUNCTION(execHasBreakpoint); \
	DECLARE_FUNCTION(execGetSupportedWorkflows); \
	DECLARE_FUNCTION(execCanBeUpgraded); \
	DECLARE_FUNCTION(execIsControlFlowNode); \
	DECLARE_FUNCTION(execIsLoopNode); \
	DECLARE_FUNCTION(execGetPreviousFName); \
	DECLARE_FUNCTION(execGetLinkedTargetNodes); \
	DECLARE_FUNCTION(execGetLinkedSourceNodes); \
	DECLARE_FUNCTION(execGetLinks); \
	DECLARE_FUNCTION(execIsLinkedTo); \
	DECLARE_FUNCTION(execHasPinOfDirection); \
	DECLARE_FUNCTION(execHasOutputPin); \
	DECLARE_FUNCTION(execHasLazyPin); \
	DECLARE_FUNCTION(execHasIOPin); \
	DECLARE_FUNCTION(execHasInputPin); \
	DECLARE_FUNCTION(execCanOnlyExistOnce); \
	DECLARE_FUNCTION(execGetEventName); \
	DECLARE_FUNCTION(execIsEvent); \
	DECLARE_FUNCTION(execIsMutable); \
	DECLARE_FUNCTION(execIsDefinedAsVarying); \
	DECLARE_FUNCTION(execIsDefinedAsConstant); \
	DECLARE_FUNCTION(execIsPure); \
	DECLARE_FUNCTION(execIsVisibleInUI); \
	DECLARE_FUNCTION(execIsInjected); \
	DECLARE_FUNCTION(execIsHighlighted); \
	DECLARE_FUNCTION(execIsSelected); \
	DECLARE_FUNCTION(execGetToolTipText); \
	DECLARE_FUNCTION(execGetNodeColor); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetPosition); \
	DECLARE_FUNCTION(execGetNodeSubTitle); \
	DECLARE_FUNCTION(execGetNodeTitle); \
	DECLARE_FUNCTION(execGetInjectionInfo); \
	DECLARE_FUNCTION(execGetGraphDepth); \
	DECLARE_FUNCTION(execGetRootGraph); \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execHasOrphanedPins); \
	DECLARE_FUNCTION(execGetOrphanedPins); \
	DECLARE_FUNCTION(execFindExecutePin); \
	DECLARE_FUNCTION(execFindRootPinByName); \
	DECLARE_FUNCTION(execFindPin); \
	DECLARE_FUNCTION(execGetNodeLayout); \
	DECLARE_FUNCTION(execIsPinCategoryExpanded); \
	DECLARE_FUNCTION(execGetPinsForCategory); \
	DECLARE_FUNCTION(execGetParentPinCategories); \
	DECLARE_FUNCTION(execGetParentPinCategory); \
	DECLARE_FUNCTION(execGetSubPinCategories); \
	DECLARE_FUNCTION(execGetPinCategoryName); \
	DECLARE_FUNCTION(execGetPinCategories); \
	DECLARE_FUNCTION(execGetAllPinsRecursively); \
	DECLARE_FUNCTION(execGetPins); \
	DECLARE_FUNCTION(execGetNodeIndex); \
	DECLARE_FUNCTION(execGetNodePath);


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_47_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMNode, RIGVMDEVELOPER_API)


struct Z_Construct_UClass_URigVMNode_Statics;
RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMNode_NoRegister();

#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigVMNode(); \
	friend struct ::Z_Construct_UClass_URigVMNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGVMDEVELOPER_API UClass* ::Z_Construct_UClass_URigVMNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigVMNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigVMDeveloper"), Z_Construct_UClass_URigVMNode_NoRegister) \
	DECLARE_SERIALIZER(URigVMNode) \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_47_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigVMNode(URigVMNode&&) = delete; \
	URigVMNode(const URigVMNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGVMDEVELOPER_API, URigVMNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigVMNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URigVMNode)


#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_44_PROLOG
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_47_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNode_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigVMNode;

// ********** End Class URigVMNode *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNode_h

// ********** Begin Enum ERigVMNodeColorType *******************************************************
#define FOREACH_ENUM_ERIGVMNODECOLORTYPE(op) \
	op(ERigVMNodeColorType::FromMetadata) \
	op(ERigVMNodeColorType::UserDefined) 

enum class ERigVMNodeColorType : uint8;
template<> struct TIsUEnumClass<ERigVMNodeColorType> { enum { Value = true }; };
template<> RIGVMDEVELOPER_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMNodeColorType>();
// ********** End Enum ERigVMNodeColorType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
