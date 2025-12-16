// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationEntryPointNode.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationEntryPointNode_generated_h
#error "ConversationEntryPointNode.generated.h already included, missing '#pragma once' in ConversationEntryPointNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationEntryPointNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConversationEntryPointNode **********************************************
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationEntryPointNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIdentifier);


struct Z_Construct_UClass_UConversationEntryPointNode_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationEntryPointNode_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationEntryPointNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationEntryPointNode(); \
	friend struct ::Z_Construct_UClass_UConversationEntryPointNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationEntryPointNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationEntryPointNode, UConversationNodeWithLinks, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationEntryPointNode_NoRegister) \
	DECLARE_SERIALIZER(UConversationEntryPointNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationEntryPointNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONRUNTIME_API UConversationEntryPointNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationEntryPointNode(UConversationEntryPointNode&&) = delete; \
	UConversationEntryPointNode(const UConversationEntryPointNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationEntryPointNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationEntryPointNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationEntryPointNode) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationEntryPointNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationEntryPointNode_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationEntryPointNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationEntryPointNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationEntryPointNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationEntryPointNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationEntryPointNode;

// ********** End Class UConversationEntryPointNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationEntryPointNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
