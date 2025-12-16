// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationRequirementNode.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationRequirementNode_generated_h
#error "ConversationRequirementNode.generated.h already included, missing '#pragma once' in ConversationRequirementNode.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationRequirementNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EConversationRequirementResult : uint8;
struct FConversationContext;

// ********** Begin Class UConversationRequirementNode *********************************************
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	COMMONCONVERSATIONRUNTIME_API virtual EConversationRequirementResult IsRequirementSatisfied_Implementation(FConversationContext const& Context) const; \
	DECLARE_FUNCTION(execIsRequirementSatisfied);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_33_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UConversationRequirementNode_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationRequirementNode_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationRequirementNode(); \
	friend struct ::Z_Construct_UClass_UConversationRequirementNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationRequirementNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationRequirementNode, UConversationSubNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationRequirementNode_NoRegister) \
	DECLARE_SERIALIZER(UConversationRequirementNode)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONRUNTIME_API UConversationRequirementNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationRequirementNode(UConversationRequirementNode&&) = delete; \
	UConversationRequirementNode(const UConversationRequirementNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationRequirementNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationRequirementNode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationRequirementNode) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationRequirementNode();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_30_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationRequirementNode;

// ********** End Class UConversationRequirementNode ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRequirementNode_h

// ********** Begin Enum EConversationRequirementResult ********************************************
#define FOREACH_ENUM_ECONVERSATIONREQUIREMENTRESULT(op) \
	op(EConversationRequirementResult::Passed) \
	op(EConversationRequirementResult::FailedButVisible) \
	op(EConversationRequirementResult::FailedAndHidden) 

enum class EConversationRequirementResult : uint8;
template<> struct TIsUEnumClass<EConversationRequirementResult> { enum { Value = true }; };
template<> COMMONCONVERSATIONRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EConversationRequirementResult>();
// ********** End Enum EConversationRequirementResult **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
