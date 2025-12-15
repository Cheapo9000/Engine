// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_FunctionResult.h"

#ifdef BLUEPRINTGRAPH_K2Node_FunctionResult_generated_h
#error "K2Node_FunctionResult.generated.h already included, missing '#pragma once' in K2Node_FunctionResult.h"
#endif
#define BLUEPRINTGRAPH_K2Node_FunctionResult_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_FunctionResult ***************************************************
struct Z_Construct_UClass_UK2Node_FunctionResult_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionResult_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_FunctionResult(); \
	friend struct ::Z_Construct_UClass_UK2Node_FunctionResult_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_FunctionResult_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_FunctionResult, UK2Node_FunctionTerminator, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_FunctionResult_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_FunctionResult)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_FunctionResult(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_FunctionResult) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_FunctionResult); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_FunctionResult); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_FunctionResult(UK2Node_FunctionResult&&) = delete; \
	UK2Node_FunctionResult(const UK2Node_FunctionResult&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_FunctionResult();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h_27_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h_30_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_FunctionResult;

// ********** End Class UK2Node_FunctionResult *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionResult_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
