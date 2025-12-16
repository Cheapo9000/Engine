// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/TG_EdGraphNode.h"

#ifdef TEXTUREGRAPHEDITOR_TG_EdGraphNode_generated_h
#error "TG_EdGraphNode.generated.h already included, missing '#pragma once' in TG_EdGraphNode.h"
#endif
#define TEXTUREGRAPHEDITOR_TG_EdGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_EdGraphNode **********************************************************
struct Z_Construct_UClass_UTG_EdGraphNode_Statics;
TEXTUREGRAPHEDITOR_API UClass* Z_Construct_UClass_UTG_EdGraphNode_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraphNode_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_EdGraphNode(); \
	friend struct ::Z_Construct_UClass_UTG_EdGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHEDITOR_API UClass* ::Z_Construct_UClass_UTG_EdGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_EdGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEditor"), Z_Construct_UClass_UTG_EdGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UTG_EdGraphNode)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraphNode_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTG_EdGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_EdGraphNode(UTG_EdGraphNode&&) = delete; \
	UTG_EdGraphNode(const UTG_EdGraphNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTG_EdGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_EdGraphNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_EdGraphNode) \
	NO_API virtual ~UTG_EdGraphNode();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraphNode_h_30_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraphNode_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraphNode_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraphNode_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_EdGraphNode;

// ********** End Class UTG_EdGraphNode ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
