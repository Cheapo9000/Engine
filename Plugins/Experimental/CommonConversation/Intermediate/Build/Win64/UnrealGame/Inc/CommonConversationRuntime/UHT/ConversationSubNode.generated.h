// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationSubNode.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationSubNode_generated_h
#error "ConversationSubNode.generated.h already included, missing '#pragma once' in ConversationSubNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationSubNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConversationSubNode *****************************************************
struct Z_Construct_UClass_UConversationSubNode_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationSubNode_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationSubNode(); \
	friend struct ::Z_Construct_UClass_UConversationSubNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationSubNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationSubNode, UConversationNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationSubNode_NoRegister) \
	DECLARE_SERIALIZER(UConversationSubNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONRUNTIME_API UConversationSubNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationSubNode(UConversationSubNode&&) = delete; \
	UConversationSubNode(const UConversationSubNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationSubNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationSubNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationSubNode) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationSubNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h_11_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationSubNode;

// ********** End Class UConversationSubNode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSubNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
