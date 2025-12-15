// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_CustomEvent.h"

#ifdef BLUEPRINTGRAPH_K2Node_CustomEvent_generated_h
#error "K2Node_CustomEvent.generated.h already included, missing '#pragma once' in K2Node_CustomEvent.h"
#endif
#define BLUEPRINTGRAPH_K2Node_CustomEvent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_CustomEvent ******************************************************
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_37_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_CustomEvent, BLUEPRINTGRAPH_API)


struct Z_Construct_UClass_UK2Node_CustomEvent_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CustomEvent_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_CustomEvent(); \
	friend struct ::Z_Construct_UClass_UK2Node_CustomEvent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_CustomEvent_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_CustomEvent, UK2Node_Event, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_CustomEvent_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_CustomEvent) \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_37_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_CustomEvent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_CustomEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_CustomEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_CustomEvent); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_CustomEvent(UK2Node_CustomEvent&&) = delete; \
	UK2Node_CustomEvent(const UK2Node_CustomEvent&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_CustomEvent();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_34_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_37_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_CustomEvent;

// ********** End Class UK2Node_CustomEvent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CustomEvent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
