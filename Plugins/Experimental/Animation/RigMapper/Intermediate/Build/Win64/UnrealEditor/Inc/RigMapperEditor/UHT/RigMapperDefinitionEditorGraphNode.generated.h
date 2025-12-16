// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigMapperGraph/RigMapperDefinitionEditorGraphNode.h"

#ifdef RIGMAPPEREDITOR_RigMapperDefinitionEditorGraphNode_generated_h
#error "RigMapperDefinitionEditorGraphNode.generated.h already included, missing '#pragma once' in RigMapperDefinitionEditorGraphNode.h"
#endif
#define RIGMAPPEREDITOR_RigMapperDefinitionEditorGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigMapperDefinitionEditorGraphNode **************************************
struct Z_Construct_UClass_URigMapperDefinitionEditorGraphNode_Statics;
RIGMAPPEREDITOR_API UClass* Z_Construct_UClass_URigMapperDefinitionEditorGraphNode_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraphNode_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURigMapperDefinitionEditorGraphNode(); \
	friend struct ::Z_Construct_UClass_URigMapperDefinitionEditorGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGMAPPEREDITOR_API UClass* ::Z_Construct_UClass_URigMapperDefinitionEditorGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(URigMapperDefinitionEditorGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigMapperEditor"), Z_Construct_UClass_URigMapperDefinitionEditorGraphNode_NoRegister) \
	DECLARE_SERIALIZER(URigMapperDefinitionEditorGraphNode)


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraphNode_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGMAPPEREDITOR_API URigMapperDefinitionEditorGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigMapperDefinitionEditorGraphNode(URigMapperDefinitionEditorGraphNode&&) = delete; \
	URigMapperDefinitionEditorGraphNode(const URigMapperDefinitionEditorGraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGMAPPEREDITOR_API, URigMapperDefinitionEditorGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigMapperDefinitionEditorGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigMapperDefinitionEditorGraphNode) \
	RIGMAPPEREDITOR_API virtual ~URigMapperDefinitionEditorGraphNode();


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraphNode_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraphNode_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraphNode_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraphNode_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigMapperDefinitionEditorGraphNode;

// ********** End Class URigMapperDefinitionEditorGraphNode ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraphNode_h

// ********** Begin Enum ERigMapperNodeType ********************************************************
#define FOREACH_ENUM_ERIGMAPPERNODETYPE(op) \
	op(ERigMapperNodeType::Input) \
	op(ERigMapperNodeType::WeightedSum) \
	op(ERigMapperNodeType::SDK) \
	op(ERigMapperNodeType::Multiply) \
	op(ERigMapperNodeType::Output) \
	op(ERigMapperNodeType::NullOutput) \
	op(ERigMapperNodeType::Invalid) 

enum class ERigMapperNodeType : uint8;
template<> struct TIsUEnumClass<ERigMapperNodeType> { enum { Value = true }; };
template<> RIGMAPPEREDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ERigMapperNodeType>();
// ********** End Enum ERigMapperNodeType **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
