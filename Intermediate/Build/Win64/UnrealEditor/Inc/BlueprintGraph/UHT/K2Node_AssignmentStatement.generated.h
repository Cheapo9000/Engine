// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_AssignmentStatement.h"

#ifdef BLUEPRINTGRAPH_K2Node_AssignmentStatement_generated_h
#error "K2Node_AssignmentStatement.generated.h already included, missing '#pragma once' in K2Node_AssignmentStatement.h"
#endif
#define BLUEPRINTGRAPH_K2Node_AssignmentStatement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_AssignmentStatement **********************************************
struct Z_Construct_UClass_UK2Node_AssignmentStatement_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AssignmentStatement_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_AssignmentStatement(); \
	friend struct ::Z_Construct_UClass_UK2Node_AssignmentStatement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_AssignmentStatement_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_AssignmentStatement, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_AssignmentStatement_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_AssignmentStatement)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_AssignmentStatement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_AssignmentStatement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_AssignmentStatement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_AssignmentStatement); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_AssignmentStatement(UK2Node_AssignmentStatement&&) = delete; \
	UK2Node_AssignmentStatement(const UK2Node_AssignmentStatement&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_AssignmentStatement();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h_23_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h_26_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_AssignmentStatement;

// ********** End Class UK2Node_AssignmentStatement ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignmentStatement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
