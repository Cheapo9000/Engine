// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_Select.h"

#ifdef BLUEPRINTGRAPH_K2Node_Select_generated_h
#error "K2Node_Select.generated.h already included, missing '#pragma once' in K2Node_Select.h"
#endif
#define BLUEPRINTGRAPH_K2Node_Select_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_Select ***********************************************************
struct Z_Construct_UClass_UK2Node_Select_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Select_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_Select(); \
	friend struct ::Z_Construct_UClass_UK2Node_Select_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_Select_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_Select, UK2Node, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_Select_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_Select) \
	virtual UObject* _getUObject() const override { return const_cast<UK2Node_Select*>(this); }


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_Select(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_Select) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_Select); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_Select); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_Select(UK2Node_Select&&) = delete; \
	UK2Node_Select(const UK2Node_Select&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_Select();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h_31_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h_34_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_Select;

// ********** End Class UK2Node_Select *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_Select_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
