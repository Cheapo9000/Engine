// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigVMModel/RigVMNotifications.h"

#ifdef RIGVMDEVELOPER_RigVMNotifications_generated_h
#error "RigVMNotifications.generated.h already included, missing '#pragma once' in RigVMNotifications.h"
#endif
#define RIGVMDEVELOPER_RigVMNotifications_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class URigVMGraph;
enum class ERigVMGraphNotifType : uint8;

// ********** Begin Delegate FRigVMGraphModifiedDynamicEvent ***************************************
#define FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNotifications_h_76_DELEGATE \
RIGVMDEVELOPER_API void FRigVMGraphModifiedDynamicEvent_DelegateWrapper(const FMulticastScriptDelegate& RigVMGraphModifiedDynamicEvent, ERigVMGraphNotifType NotifType, URigVMGraph* Graph, UObject* Subject);


// ********** End Delegate FRigVMGraphModifiedDynamicEvent *****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_RigVM_Source_RigVMDeveloper_Public_RigVMModel_RigVMNotifications_h

// ********** Begin Enum ERigVMGraphNotifType ******************************************************
#define FOREACH_ENUM_ERIGVMGRAPHNOTIFTYPE(op) \
	op(ERigVMGraphNotifType::GraphChanged) \
	op(ERigVMGraphNotifType::NodeAdded) \
	op(ERigVMGraphNotifType::NodeRemoved) \
	op(ERigVMGraphNotifType::NodeSelected) \
	op(ERigVMGraphNotifType::NodeDeselected) \
	op(ERigVMGraphNotifType::NodeSelectionChanged) \
	op(ERigVMGraphNotifType::NodePositionChanged) \
	op(ERigVMGraphNotifType::NodeSizeChanged) \
	op(ERigVMGraphNotifType::NodeTitleChanged) \
	op(ERigVMGraphNotifType::NodeColorChanged) \
	op(ERigVMGraphNotifType::PinAdded) \
	op(ERigVMGraphNotifType::PinRemoved) \
	op(ERigVMGraphNotifType::PinRenamed) \
	op(ERigVMGraphNotifType::PinExpansionChanged) \
	op(ERigVMGraphNotifType::PinWatchedChanged) \
	op(ERigVMGraphNotifType::PinArraySizeChanged) \
	op(ERigVMGraphNotifType::PinDefaultValueChanged) \
	op(ERigVMGraphNotifType::PinDirectionChanged) \
	op(ERigVMGraphNotifType::PinTypeChanged) \
	op(ERigVMGraphNotifType::PinIndexChanged) \
	op(ERigVMGraphNotifType::LinkAdded) \
	op(ERigVMGraphNotifType::LinkRemoved) \
	op(ERigVMGraphNotifType::CommentTextChanged) \
	op(ERigVMGraphNotifType::VariableAdded) \
	op(ERigVMGraphNotifType::VariableRemoved) \
	op(ERigVMGraphNotifType::VariableRenamed) \
	op(ERigVMGraphNotifType::InteractionBracketOpened) \
	op(ERigVMGraphNotifType::InteractionBracketClosed) \
	op(ERigVMGraphNotifType::InteractionBracketCanceled) \
	op(ERigVMGraphNotifType::PinBoundVariableChanged) \
	op(ERigVMGraphNotifType::NodeRenamed) \
	op(ERigVMGraphNotifType::FunctionRenamed) \
	op(ERigVMGraphNotifType::NodeReferenceChanged) \
	op(ERigVMGraphNotifType::NodeCategoryChanged) \
	op(ERigVMGraphNotifType::NodeKeywordsChanged) \
	op(ERigVMGraphNotifType::NodeDescriptionChanged) \
	op(ERigVMGraphNotifType::VariableRemappingChanged) \
	op(ERigVMGraphNotifType::LibraryTemplateChanged) \
	op(ERigVMGraphNotifType::FunctionAccessChanged) \
	op(ERigVMGraphNotifType::VariantTagsChanged) \
	op(ERigVMGraphNotifType::PinDisplayNameChanged) \
	op(ERigVMGraphNotifType::PinCategoryChanged) \
	op(ERigVMGraphNotifType::PinCategoriesChanged) \
	op(ERigVMGraphNotifType::PinCategoryExpansionChanged) \
	op(ERigVMGraphNotifType::FunctionVariantGuidChanged) \
	op(ERigVMGraphNotifType::NodeEarlyExitChanged) \
	op(ERigVMGraphNotifType::LocalVariableDefaultValueChanged) \
	op(ERigVMGraphNotifType::LocalVariableAdded) \
	op(ERigVMGraphNotifType::LocalVariableRemoved) \
	op(ERigVMGraphNotifType::LocalVariableRenamed) \
	op(ERigVMGraphNotifType::LocalVariableTypeChanged) \
	op(ERigVMGraphNotifType::Invalid) 

enum class ERigVMGraphNotifType : uint8;
template<> struct TIsUEnumClass<ERigVMGraphNotifType> { enum { Value = true }; };
template<> RIGVMDEVELOPER_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigVMGraphNotifType>();
// ********** End Enum ERigVMGraphNotifType ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
