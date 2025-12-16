// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationLinkNode.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationLinkNode_generated_h
#error "ConversationLinkNode.generated.h already included, missing '#pragma once' in ConversationLinkNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationLinkNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConversationLinkNode ****************************************************
struct Z_Construct_UClass_UConversationLinkNode_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationLinkNode_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLinkNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationLinkNode(); \
	friend struct ::Z_Construct_UClass_UConversationLinkNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationLinkNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationLinkNode, UConversationTaskNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationLinkNode_NoRegister) \
	DECLARE_SERIALIZER(UConversationLinkNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLinkNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationLinkNode(UConversationLinkNode&&) = delete; \
	UConversationLinkNode(const UConversationLinkNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationLinkNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationLinkNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConversationLinkNode) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationLinkNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLinkNode_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLinkNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLinkNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLinkNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationLinkNode;

// ********** End Class UConversationLinkNode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLinkNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
