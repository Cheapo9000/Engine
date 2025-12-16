// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationChoiceNode.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationChoiceNode_generated_h
#error "ConversationChoiceNode.generated.h already included, missing '#pragma once' in ConversationChoiceNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationChoiceNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FClientConversationOptionEntry;
struct FConversationContext;

// ********** Begin Class UConversationChoiceNode **************************************************
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	COMMONCONVERSATIONRUNTIME_API virtual void FillChoice_Implementation(FConversationContext const& Context, FClientConversationOptionEntry& ChoiceEntry) const; \
	DECLARE_FUNCTION(execFillChoice);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_21_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UConversationChoiceNode_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationChoiceNode_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationChoiceNode(); \
	friend struct ::Z_Construct_UClass_UConversationChoiceNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationChoiceNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationChoiceNode, UConversationSubNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationChoiceNode_NoRegister) \
	DECLARE_SERIALIZER(UConversationChoiceNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONRUNTIME_API UConversationChoiceNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationChoiceNode(UConversationChoiceNode&&) = delete; \
	UConversationChoiceNode(const UConversationChoiceNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationChoiceNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationChoiceNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationChoiceNode) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationChoiceNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_21_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationChoiceNode;

// ********** End Class UConversationChoiceNode ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationChoiceNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
