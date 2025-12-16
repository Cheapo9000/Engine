// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationDatabase.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationDatabase_generated_h
#error "ConversationDatabase.generated.h already included, missing '#pragma once' in ConversationDatabase.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationDatabase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConversationEntryList ********************************************
struct Z_Construct_UScriptStruct_FConversationEntryList_Statics;
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConversationEntryList_Statics; \
	COMMONCONVERSATIONRUNTIME_API static class UScriptStruct* StaticStruct();


struct FConversationEntryList;
// ********** End ScriptStruct FConversationEntryList **********************************************

// ********** Begin ScriptStruct FCommonDialogueBankParticipant ************************************
struct Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics;
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommonDialogueBankParticipant_Statics; \
	COMMONCONVERSATIONRUNTIME_API static class UScriptStruct* StaticStruct();


struct FCommonDialogueBankParticipant;
// ********** End ScriptStruct FCommonDialogueBankParticipant **************************************

// ********** Begin Class UConversationDatabase ****************************************************
struct Z_Construct_UClass_UConversationDatabase_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationDatabase_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationDatabase(); \
	friend struct ::Z_Construct_UClass_UConversationDatabase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationDatabase_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationDatabase, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationDatabase_NoRegister) \
	DECLARE_SERIALIZER(UConversationDatabase)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_76_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationDatabase(UConversationDatabase&&) = delete; \
	UConversationDatabase(const UConversationDatabase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationDatabase) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationDatabase();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_73_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationDatabase;

// ********** End Class UConversationDatabase ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationDatabase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
