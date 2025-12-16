// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationRegistry.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationRegistry_generated_h
#error "ConversationRegistry.generated.h already included, missing '#pragma once' in ConversationRegistry.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetSerializeScriptStructCache_ConvVersion ************************
struct Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics;
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetSerializeScriptStructCache_ConvVersion_Statics; \
	COMMONCONVERSATIONRUNTIME_API static class UScriptStruct* StaticStruct();


struct FNetSerializeScriptStructCache_ConvVersion;
// ********** End ScriptStruct FNetSerializeScriptStructCache_ConvVersion **************************

// ********** Begin Class UConversationRegistry ****************************************************
struct Z_Construct_UClass_UConversationRegistry_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationRegistry_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationRegistry(); \
	friend struct ::Z_Construct_UClass_UConversationRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationRegistry, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationRegistry_NoRegister) \
	DECLARE_SERIALIZER(UConversationRegistry) \
	virtual UObject* _getUObject() const override { return const_cast<UConversationRegistry*>(this); }


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_75_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationRegistry(UConversationRegistry&&) = delete; \
	UConversationRegistry(const UConversationRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationRegistry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConversationRegistry) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationRegistry();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_72_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_75_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationRegistry;

// ********** End Class UConversationRegistry ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
