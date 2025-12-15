// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_Event.h"

#ifdef BLUEPRINTGRAPH_K2Node_Event_generated_h
#error "K2Node_Event.generated.h already included, missing '#pragma once' in K2Node_Event.h"
#endif
#define BLUEPRINTGRAPH_K2Node_Event_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_Event ************************************************************
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_40_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_Event, BLUEPRINTGRAPH_API)


struct Z_Construct_UClass_UK2Node_Event_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_Event(); \
	friend struct ::Z_Construct_UClass_UK2Node_Event_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_Event_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_Event, UK2Node_EditablePinBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_Event_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_Event) \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_40_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UK2Node_Event*>(this); }


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_Event(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_Event) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_Event); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_Event); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_Event(UK2Node_Event&&) = delete; \
	UK2Node_Event(const UK2Node_Event&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_Event();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_37_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_40_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_Event;

// ********** End Class UK2Node_Event **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Event_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
