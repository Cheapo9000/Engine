// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundEditorGraphCommentNode.h"

#ifdef METASOUNDEDITOR_MetasoundEditorGraphCommentNode_generated_h
#error "MetasoundEditorGraphCommentNode.generated.h already included, missing '#pragma once' in MetasoundEditorGraphCommentNode.h"
#endif
#define METASOUNDEDITOR_MetasoundEditorGraphCommentNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMetasoundEditorGraphCommentNode *****************************************
struct Z_Construct_UClass_UMetasoundEditorGraphCommentNode_Statics;
METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorGraphCommentNode_NoRegister();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphCommentNode_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundEditorGraphCommentNode(); \
	friend struct ::Z_Construct_UClass_UMetasoundEditorGraphCommentNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend METASOUNDEDITOR_API UClass* ::Z_Construct_UClass_UMetasoundEditorGraphCommentNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UMetasoundEditorGraphCommentNode, UEdGraphNode_Comment, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEditor"), Z_Construct_UClass_UMetasoundEditorGraphCommentNode_NoRegister) \
	DECLARE_SERIALIZER(UMetasoundEditorGraphCommentNode)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphCommentNode_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	METASOUNDEDITOR_API UMetasoundEditorGraphCommentNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMetasoundEditorGraphCommentNode(UMetasoundEditorGraphCommentNode&&) = delete; \
	UMetasoundEditorGraphCommentNode(const UMetasoundEditorGraphCommentNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(METASOUNDEDITOR_API, UMetasoundEditorGraphCommentNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundEditorGraphCommentNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundEditorGraphCommentNode) \
	METASOUNDEDITOR_API virtual ~UMetasoundEditorGraphCommentNode();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphCommentNode_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphCommentNode_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphCommentNode_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphCommentNode_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMetasoundEditorGraphCommentNode;

// ********** End Class UMetasoundEditorGraphCommentNode *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundEditorGraphCommentNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
