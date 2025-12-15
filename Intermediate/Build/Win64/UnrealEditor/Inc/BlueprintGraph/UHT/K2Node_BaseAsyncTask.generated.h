// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_BaseAsyncTask.h"

#ifdef BLUEPRINTGRAPH_K2Node_BaseAsyncTask_generated_h
#error "K2Node_BaseAsyncTask.generated.h already included, missing '#pragma once' in K2Node_BaseAsyncTask.h"
#endif
#define BLUEPRINTGRAPH_K2Node_BaseAsyncTask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_BaseAsyncTask ****************************************************
struct Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h_56_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_BaseAsyncTask(); \
	friend struct ::Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_BaseAsyncTask_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_BaseAsyncTask, UK2Node, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_BaseAsyncTask_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_BaseAsyncTask)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_BaseAsyncTask(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_BaseAsyncTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_BaseAsyncTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_BaseAsyncTask); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_BaseAsyncTask(UK2Node_BaseAsyncTask&&) = delete; \
	UK2Node_BaseAsyncTask(const UK2Node_BaseAsyncTask&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_BaseAsyncTask();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h_53_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h_56_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_BaseAsyncTask;

// ********** End Class UK2Node_BaseAsyncTask ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
