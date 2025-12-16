// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/PCGEditorGraphNode.h"

#ifdef PCGEDITOR_PCGEditorGraphNode_generated_h
#error "PCGEditorGraphNode.generated.h already included, missing '#pragma once' in PCGEditorGraphNode.h"
#endif
#define PCGEDITOR_PCGEditorGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEditorGraphNode ******************************************************
struct Z_Construct_UClass_UPCGEditorGraphNode_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraphNode_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Nodes_PCGEditorGraphNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEditorGraphNode(); \
	friend struct ::Z_Construct_UClass_UPCGEditorGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGEditorGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEditorGraphNode, UPCGEditorGraphNodeBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGEditorGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UPCGEditorGraphNode)


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Nodes_PCGEditorGraphNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGEditorGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEditorGraphNode(UPCGEditorGraphNode&&) = delete; \
	UPCGEditorGraphNode(const UPCGEditorGraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGEditorGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEditorGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGEditorGraphNode) \
	NO_API virtual ~UPCGEditorGraphNode();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Nodes_PCGEditorGraphNode_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Nodes_PCGEditorGraphNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Nodes_PCGEditorGraphNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Nodes_PCGEditorGraphNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEditorGraphNode;

// ********** End Class UPCGEditorGraphNode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Public_Nodes_PCGEditorGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
