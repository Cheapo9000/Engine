// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/EdGraphNode.h"

#ifdef ENGINE_EdGraphNode_generated_h
#error "EdGraphNode.generated.h already included, missing '#pragma once' in EdGraphNode.h"
#endif
#define ENGINE_EdGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FEdGraphTerminalType **********************************************
struct Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FEdGraphTerminalType_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FEdGraphTerminalType;
// ********** End ScriptStruct FEdGraphTerminalType ************************************************

// ********** Begin Class UGraphNodeContextMenuContext *********************************************
struct Z_Construct_UClass_UGraphNodeContextMenuContext_Statics;
ENGINE_API UClass* Z_Construct_UClass_UGraphNodeContextMenuContext_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_216_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphNodeContextMenuContext(); \
	friend struct ::Z_Construct_UClass_UGraphNodeContextMenuContext_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UGraphNodeContextMenuContext_NoRegister(); \
public: \
	DECLARE_CLASS2(UGraphNodeContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UGraphNodeContextMenuContext_NoRegister) \
	DECLARE_SERIALIZER(UGraphNodeContextMenuContext)


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_216_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGraphNodeContextMenuContext(UGraphNodeContextMenuContext&&) = delete; \
	UGraphNodeContextMenuContext(const UGraphNodeContextMenuContext&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGraphNodeContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphNodeContextMenuContext); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGraphNodeContextMenuContext) \
	ENGINE_API virtual ~UGraphNodeContextMenuContext();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_213_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_216_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_216_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_216_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGraphNodeContextMenuContext;

// ********** End Class UGraphNodeContextMenuContext ***********************************************

// ********** Begin Class UEdGraphNode *************************************************************
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_290_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEdGraphNode, ENGINE_API)


struct Z_Construct_UClass_UEdGraphNode_Statics;
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_290_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraphNode(); \
	friend struct ::Z_Construct_UClass_UEdGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UEdGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraphNode, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UEdGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UEdGraphNode) \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_290_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_290_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraphNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraphNode(UEdGraphNode&&) = delete; \
	UEdGraphNode(const UEdGraphNode&) = delete; \
	ENGINE_API virtual ~UEdGraphNode();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_287_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_290_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_290_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h_290_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraphNode;

// ********** End Class UEdGraphNode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraphNode_h

// ********** Begin Enum EEdGraphPinDirection ******************************************************
#define FOREACH_ENUM_EEDGRAPHPINDIRECTION(op) \
	op(EGPD_Input) \
	op(EGPD_Output) 

enum EEdGraphPinDirection : int;
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EEdGraphPinDirection>();
// ********** End Enum EEdGraphPinDirection ********************************************************

// ********** Begin Enum EPinContainerType *********************************************************
#define FOREACH_ENUM_EPINCONTAINERTYPE(op) \
	op(EPinContainerType::None) \
	op(EPinContainerType::Array) \
	op(EPinContainerType::Set) \
	op(EPinContainerType::Map) 

enum class EPinContainerType : uint8;
template<> struct TIsUEnumClass<EPinContainerType> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EPinContainerType>();
// ********** End Enum EPinContainerType ***********************************************************

// ********** Begin Enum ENodeTitleType ************************************************************
#define FOREACH_ENUM_ENODETITLETYPE(op) \
	op(ENodeTitleType::FullTitle) \
	op(ENodeTitleType::ListView) \
	op(ENodeTitleType::EditableTitle) \
	op(ENodeTitleType::MenuTitle) \
	op(ENodeTitleType::MAX_TitleTypes) 

namespace ENodeTitleType { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENodeTitleType::Type>();
// ********** End Enum ENodeTitleType **************************************************************

// ********** Begin Enum ENodeAdvancedPins *********************************************************
#define FOREACH_ENUM_ENODEADVANCEDPINS(op) \
	op(ENodeAdvancedPins::NoPins) \
	op(ENodeAdvancedPins::Shown) \
	op(ENodeAdvancedPins::Hidden) 

namespace ENodeAdvancedPins { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENodeAdvancedPins::Type>();
// ********** End Enum ENodeAdvancedPins ***********************************************************

// ********** Begin Enum ENodeEnabledState *********************************************************
#define FOREACH_ENUM_ENODEENABLEDSTATE(op) \
	op(ENodeEnabledState::Enabled) \
	op(ENodeEnabledState::Disabled) \
	op(ENodeEnabledState::DevelopmentOnly) 

enum class ENodeEnabledState : uint8;
template<> struct TIsUEnumClass<ENodeEnabledState> { enum { Value = true }; };
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ENodeEnabledState>();
// ********** End Enum ENodeEnabledState ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
