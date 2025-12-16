// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationSideEffectNode.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationSideEffectNode_generated_h
#error "ConversationSideEffectNode.generated.h already included, missing '#pragma once' in ConversationSideEffectNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationSideEffectNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConversationContext;

// ********** Begin Class UConversationSideEffectNode **********************************************
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	COMMONCONVERSATIONRUNTIME_API virtual void ClientCauseSideEffect_Implementation(FConversationContext const& Context) const; \
	COMMONCONVERSATIONRUNTIME_API virtual void ServerCauseSideEffect_Implementation(FConversationContext const& Context) const; \
	DECLARE_FUNCTION(execClientCauseSideEffect); \
	DECLARE_FUNCTION(execServerCauseSideEffect);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_22_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UConversationSideEffectNode_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationSideEffectNode_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationSideEffectNode(); \
	friend struct ::Z_Construct_UClass_UConversationSideEffectNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationSideEffectNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationSideEffectNode, UConversationSubNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationSideEffectNode_NoRegister) \
	DECLARE_SERIALIZER(UConversationSideEffectNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONRUNTIME_API UConversationSideEffectNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationSideEffectNode(UConversationSideEffectNode&&) = delete; \
	UConversationSideEffectNode(const UConversationSideEffectNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationSideEffectNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationSideEffectNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationSideEffectNode) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationSideEffectNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_22_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationSideEffectNode;

// ********** End Class UConversationSideEffectNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSideEffectNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
