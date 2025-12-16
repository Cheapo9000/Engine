// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationContext.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationContext_generated_h
#error "ConversationContext.generated.h already included, missing '#pragma once' in ConversationContext.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationContext_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UConversationInstance;
class UConversationParticipantComponent;
struct FAdvanceConversationRequest;
struct FClientConversationMessage;
struct FConversationContext;
struct FConversationNodeHandle;
struct FConversationTaskResult;
struct FGameplayTag;

// ********** Begin ScriptStruct FConversationTaskResult *******************************************
struct Z_Construct_UScriptStruct_FConversationTaskResult_Statics;
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_72_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConversationTaskResult_Statics; \
	COMMONCONVERSATIONRUNTIME_API static class UScriptStruct* StaticStruct();


struct FConversationTaskResult;
// ********** End ScriptStruct FConversationTaskResult *********************************************

// ********** Begin ScriptStruct FConversationContext **********************************************
struct Z_Construct_UScriptStruct_FConversationContext_Statics;
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_166_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConversationContext_Statics; \
	COMMONCONVERSATIONRUNTIME_API static class UScriptStruct* StaticStruct();


struct FConversationContext;
// ********** End ScriptStruct FConversationContext ************************************************

// ********** Begin Class UConversationContextHelpers **********************************************
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_245_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindConversationComponent); \
	DECLARE_FUNCTION(execGetConversationParticipantActor); \
	DECLARE_FUNCTION(execGetConversationParticipant); \
	DECLARE_FUNCTION(execCanConversationContinue); \
	DECLARE_FUNCTION(execAbortConversation); \
	DECLARE_FUNCTION(execReturnToConversationStart); \
	DECLARE_FUNCTION(execReturnToCurrentClientChoice); \
	DECLARE_FUNCTION(execReturnToLastClientChoice); \
	DECLARE_FUNCTION(execPauseConversationAndSendClientChoices); \
	DECLARE_FUNCTION(execAdvanceConversationWithChoice); \
	DECLARE_FUNCTION(execAdvanceConversation); \
	DECLARE_FUNCTION(execMakeConversationParticipant); \
	DECLARE_FUNCTION(execGetCurrentConversationNodeHandle); \
	DECLARE_FUNCTION(execGetConversationInstance);


struct Z_Construct_UClass_UConversationContextHelpers_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationContextHelpers_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_245_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationContextHelpers(); \
	friend struct ::Z_Construct_UClass_UConversationContextHelpers_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationContextHelpers_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationContextHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationContextHelpers_NoRegister) \
	DECLARE_SERIALIZER(UConversationContextHelpers)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_245_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONRUNTIME_API UConversationContextHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationContextHelpers(UConversationContextHelpers&&) = delete; \
	UConversationContextHelpers(const UConversationContextHelpers&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationContextHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationContextHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationContextHelpers) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationContextHelpers();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_242_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_245_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_245_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_245_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h_245_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationContextHelpers;

// ********** End Class UConversationContextHelpers ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationContext_h

// ********** Begin Enum EConversationTaskResultType ***********************************************
#define FOREACH_ENUM_ECONVERSATIONTASKRESULTTYPE(op) \
	op(EConversationTaskResultType::Invalid) \
	op(EConversationTaskResultType::AbortConversation) \
	op(EConversationTaskResultType::AdvanceConversation) \
	op(EConversationTaskResultType::AdvanceConversationWithChoice) \
	op(EConversationTaskResultType::PauseConversationAndSendClientChoices) \
	op(EConversationTaskResultType::ReturnToLastClientChoice) \
	op(EConversationTaskResultType::ReturnToCurrentClientChoice) \
	op(EConversationTaskResultType::ReturnToConversationStart) 

enum class EConversationTaskResultType : uint8;
template<> struct TIsUEnumClass<EConversationTaskResultType> { enum { Value = true }; };
template<> COMMONCONVERSATIONRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EConversationTaskResultType>();
// ********** End Enum EConversationTaskResultType *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
