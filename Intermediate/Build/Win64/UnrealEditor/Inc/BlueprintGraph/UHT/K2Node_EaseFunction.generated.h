// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_EaseFunction.h"

#ifdef BLUEPRINTGRAPH_K2Node_EaseFunction_generated_h
#error "K2Node_EaseFunction.generated.h already included, missing '#pragma once' in K2Node_EaseFunction.h"
#endif
#define BLUEPRINTGRAPH_K2Node_EaseFunction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FCustomPin ********************************************************
struct Z_Construct_UScriptStruct_FCustomPin_Statics;
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCustomPin_Statics; \
	BLUEPRINTGRAPH_API static class UScriptStruct* StaticStruct();


struct FCustomPin;
// ********** End ScriptStruct FCustomPin **********************************************************

// ********** Begin Class UK2Node_EaseFunction *****************************************************
struct Z_Construct_UClass_UK2Node_EaseFunction_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EaseFunction_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_48_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_EaseFunction(); \
	friend struct ::Z_Construct_UClass_UK2Node_EaseFunction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_EaseFunction_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_EaseFunction, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_EaseFunction_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_EaseFunction)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_EaseFunction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_EaseFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_EaseFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_EaseFunction); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_EaseFunction(UK2Node_EaseFunction&&) = delete; \
	UK2Node_EaseFunction(const UK2Node_EaseFunction&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_EaseFunction();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_45_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_48_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_EaseFunction;

// ********** End Class UK2Node_EaseFunction *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EaseFunction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
