// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationNode.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationNode_generated_h
#error "ConversationNode.generated.h already included, missing '#pragma once' in ConversationNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FLinearColor;

// ********** Begin ScriptStruct FConversationNodeHandle *******************************************
struct Z_Construct_UScriptStruct_FConversationNodeHandle_Statics;
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_36_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConversationNodeHandle_Statics; \
	COMMONCONVERSATIONRUNTIME_API static class UScriptStruct* StaticStruct();


struct FConversationNodeHandle;
// ********** End ScriptStruct FConversationNodeHandle *********************************************

// ********** Begin Class UConversationNode ********************************************************
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_75_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDebugParticipantColor);


struct Z_Construct_UClass_UConversationNode_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationNode_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUConversationNode(); \
	friend struct ::Z_Construct_UClass_UConversationNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationNode_NoRegister) \
	DECLARE_SERIALIZER(UConversationNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONRUNTIME_API UConversationNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationNode(UConversationNode&&) = delete; \
	UConversationNode(const UConversationNode&) = delete; \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_72_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_75_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_75_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationNode;

// ********** End Class UConversationNode **********************************************************

// ********** Begin Class UConversationNodeWithLinks ***********************************************
struct Z_Construct_UClass_UConversationNodeWithLinks_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationNodeWithLinks_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationNodeWithLinks(); \
	friend struct ::Z_Construct_UClass_UConversationNodeWithLinks_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationNodeWithLinks_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationNodeWithLinks, UConversationNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationNodeWithLinks_NoRegister) \
	DECLARE_SERIALIZER(UConversationNodeWithLinks)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONRUNTIME_API UConversationNodeWithLinks(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationNodeWithLinks(UConversationNodeWithLinks&&) = delete; \
	UConversationNodeWithLinks(const UConversationNodeWithLinks&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationNodeWithLinks); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationNodeWithLinks); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationNodeWithLinks) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationNodeWithLinks();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_171_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_174_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationNodeWithLinks;

// ********** End Class UConversationNodeWithLinks *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
