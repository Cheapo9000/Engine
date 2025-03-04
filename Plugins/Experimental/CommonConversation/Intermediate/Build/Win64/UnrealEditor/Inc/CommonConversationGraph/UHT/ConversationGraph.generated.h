// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConversationGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMMONCONVERSATIONGRAPH_ConversationGraph_generated_h
#error "ConversationGraph.generated.h already included, missing '#pragma once' in ConversationGraph.h"
#endif
#define COMMONCONVERSATIONGRAPH_ConversationGraph_generated_h

#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUConversationGraph(); \
	friend struct Z_Construct_UClass_UConversationGraph_Statics; \
public: \
	DECLARE_CLASS(UConversationGraph, UAIGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonConversationGraph"), NO_API) \
	DECLARE_SERIALIZER(UConversationGraph)


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConversationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConversationGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConversationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConversationGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConversationGraph(UConversationGraph&&); \
	UConversationGraph(const UConversationGraph&); \
public: \
	NO_API virtual ~UConversationGraph();


#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_10_PROLOG
#define FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_13_INCLASS \
	FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMMONCONVERSATIONGRAPH_API UClass* StaticClass<class UConversationGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
