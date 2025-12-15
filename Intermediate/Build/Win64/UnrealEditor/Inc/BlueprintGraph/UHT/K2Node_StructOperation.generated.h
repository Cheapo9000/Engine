// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_StructOperation.h"

#ifdef BLUEPRINTGRAPH_K2Node_StructOperation_generated_h
#error "K2Node_StructOperation.generated.h already included, missing '#pragma once' in K2Node_StructOperation.h"
#endif
#define BLUEPRINTGRAPH_K2Node_StructOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_StructOperation **************************************************
struct Z_Construct_UClass_UK2Node_StructOperation_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_StructOperation_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_StructOperation(); \
	friend struct ::Z_Construct_UClass_UK2Node_StructOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_StructOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_StructOperation, UK2Node_Variable, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_StructOperation_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_StructOperation)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_StructOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_StructOperation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_StructOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_StructOperation); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_StructOperation(UK2Node_StructOperation&&) = delete; \
	UK2Node_StructOperation(const UK2Node_StructOperation&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_StructOperation();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h_28_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h_31_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_StructOperation;

// ********** End Class UK2Node_StructOperation ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_StructOperation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
