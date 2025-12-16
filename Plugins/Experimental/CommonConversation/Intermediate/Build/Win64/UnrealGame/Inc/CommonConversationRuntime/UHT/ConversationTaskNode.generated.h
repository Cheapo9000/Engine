// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationTaskNode.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationTaskNode_generated_h
#error "ConversationTaskNode.generated.h already included, missing '#pragma once' in ConversationTaskNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationTaskNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EConversationRequirementResult : uint8;
struct FConversationContext;
struct FConversationNodeParameterPair;
struct FConversationTaskResult;
struct FLinearColor;

// ********** Begin Class UConversationTaskNode ****************************************************
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	COMMONCONVERSATIONRUNTIME_API virtual void GatherStaticExtraData_Implementation(FConversationContext const& Context, TArray<FConversationNodeParameterPair>& InOutExtraData) const; \
	COMMONCONVERSATIONRUNTIME_API virtual void ExecuteClientEffects_Implementation(FConversationContext const& Context) const; \
	COMMONCONVERSATIONRUNTIME_API virtual FConversationTaskResult ExecuteTaskNode_Implementation(FConversationContext const& Context) const; \
	COMMONCONVERSATIONRUNTIME_API virtual EConversationRequirementResult IsRequirementSatisfied_Implementation(FConversationContext const& Context) const; \
	COMMONCONVERSATIONRUNTIME_API virtual bool GetNodeBodyColor_Implementation(FLinearColor& BodyColor) const; \
	DECLARE_FUNCTION(execGatherStaticExtraData); \
	DECLARE_FUNCTION(execExecuteClientEffects); \
	DECLARE_FUNCTION(execExecuteTaskNode); \
	DECLARE_FUNCTION(execIsRequirementSatisfied); \
	DECLARE_FUNCTION(execGetNodeBodyColor);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_45_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UConversationTaskNode_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationTaskNode_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationTaskNode(); \
	friend struct ::Z_Construct_UClass_UConversationTaskNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationTaskNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationTaskNode, UConversationNodeWithLinks, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationTaskNode_NoRegister) \
	DECLARE_SERIALIZER(UConversationTaskNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONRUNTIME_API UConversationTaskNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationTaskNode(UConversationTaskNode&&) = delete; \
	UConversationTaskNode(const UConversationTaskNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationTaskNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationTaskNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationTaskNode) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationTaskNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_42_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_45_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_45_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationTaskNode;

// ********** End Class UConversationTaskNode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationTaskNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
