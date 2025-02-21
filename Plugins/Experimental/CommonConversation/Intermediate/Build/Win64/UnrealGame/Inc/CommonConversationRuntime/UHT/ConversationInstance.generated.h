// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConversationInstance;
#ifdef COMMONCONVERSATIONRUNTIME_ConversationInstance_generated_h
#error "ConversationInstance.generated.h already included, missing '#pragma once' in ConversationInstance.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationInstance_generated_h

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_18_DELEGATE \
COMMONCONVERSATIONRUNTIME_API void FOnAllParticipantsNotifiedOfStartEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAllParticipantsNotifiedOfStartEvent, UConversationInstance* ConversationInstance);


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationInstance(); \
	friend struct Z_Construct_UClass_UConversationInstance_Statics; \
public: \
	DECLARE_CLASS(UConversationInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), NO_API) \
	DECLARE_SERIALIZER(UConversationInstance)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConversationInstance(UConversationInstance&&); \
	UConversationInstance(const UConversationInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConversationInstance) \
	NO_API virtual ~UConversationInstance();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_25_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<class UConversationInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
