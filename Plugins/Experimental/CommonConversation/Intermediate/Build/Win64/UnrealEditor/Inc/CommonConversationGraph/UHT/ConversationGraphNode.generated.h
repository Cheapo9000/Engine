// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONCONVERSATIONGRAPH_ConversationGraphNode_generated_h
#error "ConversationGraphNode.generated.h already included, missing '#pragma once' in ConversationGraphNode.h"
#endif
#define COMMONCONVERSATIONGRAPH_ConversationGraphNode_generated_h

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUConversationGraphNode(); \
	friend struct Z_Construct_UClass_UConversationGraphNode_Statics; \
public: \
	DECLARE_CLASS(UConversationGraphNode, UAIGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationGraph"), NO_API) \
	DECLARE_SERIALIZER(UConversationGraphNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConversationGraphNode(UConversationGraphNode&&); \
	UConversationGraphNode(const UConversationGraphNode&); \
public: \
	NO_API virtual ~UConversationGraphNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCONVERSATIONGRAPH_API UClass* StaticClass<class UConversationGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
