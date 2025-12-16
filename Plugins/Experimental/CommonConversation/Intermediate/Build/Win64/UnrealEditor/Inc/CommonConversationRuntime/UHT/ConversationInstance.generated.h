// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationInstance.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationInstance_generated_h
#error "ConversationInstance.generated.h already included, missing '#pragma once' in ConversationInstance.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConversationInstance;

// ********** Begin Delegate FOnAllParticipantsNotifiedOfStartEvent ********************************
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_20_DELEGATE \
COMMONCONVERSATIONRUNTIME_API void FOnAllParticipantsNotifiedOfStartEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAllParticipantsNotifiedOfStartEvent, UConversationInstance* ConversationInstance);


// ********** End Delegate FOnAllParticipantsNotifiedOfStartEvent **********************************

// ********** Begin Class UConversationInstance ****************************************************
struct Z_Construct_UClass_UConversationInstance_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationInstance_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationInstance(); \
	friend struct ::Z_Construct_UClass_UConversationInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationInstance_NoRegister) \
	DECLARE_SERIALIZER(UConversationInstance)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationInstance(UConversationInstance&&) = delete; \
	UConversationInstance(const UConversationInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConversationInstance) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationInstance();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_27_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationInstance;

// ********** End Class UConversationInstance ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
