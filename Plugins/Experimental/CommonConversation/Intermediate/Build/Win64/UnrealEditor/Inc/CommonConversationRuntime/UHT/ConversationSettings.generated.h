// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationSettings.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationSettings_generated_h
#error "ConversationSettings.generated.h already included, missing '#pragma once' in ConversationSettings.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConversationSettings ****************************************************
struct Z_Construct_UClass_UConversationSettings_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationSettings_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationSettings(); \
	friend struct ::Z_Construct_UClass_UConversationSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationSettings_NoRegister) \
	DECLARE_SERIALIZER(UConversationSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationSettings(UConversationSettings&&) = delete; \
	UConversationSettings(const UConversationSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConversationSettings) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationSettings();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h_15_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationSettings;

// ********** End Class UConversationSettings ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
