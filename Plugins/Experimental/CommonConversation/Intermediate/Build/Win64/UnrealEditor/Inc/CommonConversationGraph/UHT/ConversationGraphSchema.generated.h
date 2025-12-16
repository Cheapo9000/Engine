// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationGraphSchema.h"

#ifdef COMMONCONVERSATIONGRAPH_ConversationGraphSchema_generated_h
#error "ConversationGraphSchema.generated.h already included, missing '#pragma once' in ConversationGraphSchema.h"
#endif
#define COMMONCONVERSATIONGRAPH_ConversationGraphSchema_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FConversationGraphSchemaAction_AutoArrange ************************
struct Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange_Statics;
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange_Statics; \
	COMMONCONVERSATIONGRAPH_API static class UScriptStruct* StaticStruct(); \
	typedef FEdGraphSchemaAction Super;


struct FConversationGraphSchemaAction_AutoArrange;
// ********** End ScriptStruct FConversationGraphSchemaAction_AutoArrange **************************

// ********** Begin Class UConversationGraphSchema *************************************************
struct Z_Construct_UClass_UConversationGraphSchema_Statics;
COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphSchema_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUConversationGraphSchema(); \
	friend struct ::Z_Construct_UClass_UConversationGraphSchema_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONGRAPH_API UClass* ::Z_Construct_UClass_UConversationGraphSchema_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationGraphSchema, UAIGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationGraph"), Z_Construct_UClass_UConversationGraphSchema_NoRegister) \
	DECLARE_SERIALIZER(UConversationGraphSchema)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONGRAPH_API UConversationGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONGRAPH_API, UConversationGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationGraphSchema); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationGraphSchema(UConversationGraphSchema&&) = delete; \
	UConversationGraphSchema(const UConversationGraphSchema&) = delete; \
	COMMONCONVERSATIONGRAPH_API virtual ~UConversationGraphSchema();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_45_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_48_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationGraphSchema;

// ********** End Class UConversationGraphSchema ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
