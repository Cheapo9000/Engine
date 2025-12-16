// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationGraphNode.h"

#ifdef COMMONCONVERSATIONGRAPH_ConversationGraphNode_generated_h
#error "ConversationGraphNode.generated.h already included, missing '#pragma once' in ConversationGraphNode.h"
#endif
#define COMMONCONVERSATIONGRAPH_ConversationGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConversationGraphNode ***************************************************
struct Z_Construct_UClass_UConversationGraphNode_Statics;
COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphNode_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUConversationGraphNode(); \
	friend struct ::Z_Construct_UClass_UConversationGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONGRAPH_API UClass* ::Z_Construct_UClass_UConversationGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationGraphNode, UAIGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationGraph"), Z_Construct_UClass_UConversationGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UConversationGraphNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONGRAPH_API UConversationGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONGRAPH_API, UConversationGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationGraphNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationGraphNode(UConversationGraphNode&&) = delete; \
	UConversationGraphNode(const UConversationGraphNode&) = delete; \
	COMMONCONVERSATIONGRAPH_API virtual ~UConversationGraphNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_17_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationGraphNode;

// ********** End Class UConversationGraphNode *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
