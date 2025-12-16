// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationGraph.h"

#ifdef COMMONCONVERSATIONGRAPH_ConversationGraph_generated_h
#error "ConversationGraph.generated.h already included, missing '#pragma once' in ConversationGraph.h"
#endif
#define COMMONCONVERSATIONGRAPH_ConversationGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UConversationGraph *******************************************************
struct Z_Construct_UClass_UConversationGraph_Statics;
COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraph_NoRegister();

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUConversationGraph(); \
	friend struct ::Z_Construct_UClass_UConversationGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONCONVERSATIONGRAPH_API UClass* ::Z_Construct_UClass_UConversationGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UConversationGraph, UAIGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationGraph"), Z_Construct_UClass_UConversationGraph_NoRegister) \
	DECLARE_SERIALIZER(UConversationGraph)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONCONVERSATIONGRAPH_API UConversationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONCONVERSATIONGRAPH_API, UConversationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UConversationGraph(UConversationGraph&&) = delete; \
	UConversationGraph(const UConversationGraph&) = delete; \
	COMMONCONVERSATIONGRAPH_API virtual ~UConversationGraph();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_15_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UConversationGraph;

// ********** End Class UConversationGraph *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
