// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_ClearDelegate.h"

#ifdef BLUEPRINTGRAPH_K2Node_ClearDelegate_generated_h
#error "K2Node_ClearDelegate.generated.h already included, missing '#pragma once' in K2Node_ClearDelegate.h"
#endif
#define BLUEPRINTGRAPH_K2Node_ClearDelegate_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_ClearDelegate ****************************************************
struct Z_Construct_UClass_UK2Node_ClearDelegate_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ClearDelegate_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ClearDelegate_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_ClearDelegate(); \
	friend struct ::Z_Construct_UClass_UK2Node_ClearDelegate_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_ClearDelegate_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_ClearDelegate, UK2Node_BaseMCDelegate, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_ClearDelegate_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_ClearDelegate)


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ClearDelegate_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_ClearDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_ClearDelegate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_ClearDelegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_ClearDelegate); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_ClearDelegate(UK2Node_ClearDelegate&&) = delete; \
	UK2Node_ClearDelegate(const UK2Node_ClearDelegate&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_ClearDelegate();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ClearDelegate_h_9_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ClearDelegate_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ClearDelegate_h_12_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ClearDelegate_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_ClearDelegate;

// ********** End Class UK2Node_ClearDelegate ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ClearDelegate_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
