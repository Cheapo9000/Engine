// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationLibrary.h"

#ifdef COMMONCONVERSATIONRUNTIME_ConversationLibrary_generated_h
#error "ConversationLibrary.generated.h already included, missing '#pragma once' in ConversationLibrary.h"
#endif
#define COMMONCONVERSATIONRUNTIME_ConversationLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClass;
class UConversationDatabase;
class UConversationInstance;
struct FGameplayTag;

// ********** Begin Class UConversationLibrary *****************************************************
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStartConversationFromGraph); \
	DECLARE_FUNCTION(execStartConversation);


struct Z_Construct_UClass_UConversationLibrary_Statics;
COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationLibrary_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConversationLibrary(); \
	friend struct ::Z_Construct_UClass_UConversationLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONRUNTIME_API UClass* ::Z_Construct_UClass_UConversationLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationRuntime"), Z_Construct_UClass_UConversationLibrary_NoRegister) \
	DECLARE_SERIALIZER(UConversationLibrary)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationLibrary(UConversationLibrary&&) = delete; \
	UConversationLibrary(const UConversationLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONRUNTIME_API, UConversationLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConversationLibrary) \
	COMMONCONVERSATIONRUNTIME_API virtual ~UConversationLibrary();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_19_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationLibrary;

// ********** End Class UConversationLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
