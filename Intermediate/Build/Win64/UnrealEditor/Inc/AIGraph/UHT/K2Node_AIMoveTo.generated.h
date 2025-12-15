// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_AIMoveTo.h"

#ifdef AIGRAPH_K2Node_AIMoveTo_generated_h
#error "K2Node_AIMoveTo.generated.h already included, missing '#pragma once' in K2Node_AIMoveTo.h"
#endif
#define AIGRAPH_K2Node_AIMoveTo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_AIMoveTo *********************************************************
struct Z_Construct_UClass_UK2Node_AIMoveTo_Statics;
AIGRAPH_API UClass* Z_Construct_UClass_UK2Node_AIMoveTo_NoRegister();

#define FID_Engine_Source_Editor_AIGraph_Public_K2Node_AIMoveTo_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_AIMoveTo(); \
	friend struct ::Z_Construct_UClass_UK2Node_AIMoveTo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_AIMoveTo_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_AIMoveTo, UK2Node_BaseAsyncTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIGraph"), Z_Construct_UClass_UK2Node_AIMoveTo_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_AIMoveTo)


#define FID_Engine_Source_Editor_AIGraph_Public_K2Node_AIMoveTo_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIGRAPH_API UK2Node_AIMoveTo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_AIMoveTo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIGRAPH_API, UK2Node_AIMoveTo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_AIMoveTo); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_AIMoveTo(UK2Node_AIMoveTo&&) = delete; \
	UK2Node_AIMoveTo(const UK2Node_AIMoveTo&) = delete; \
	AIGRAPH_API virtual ~UK2Node_AIMoveTo();


#define FID_Engine_Source_Editor_AIGraph_Public_K2Node_AIMoveTo_h_18_PROLOG
#define FID_Engine_Source_Editor_AIGraph_Public_K2Node_AIMoveTo_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AIGraph_Public_K2Node_AIMoveTo_h_21_INCLASS \
	FID_Engine_Source_Editor_AIGraph_Public_K2Node_AIMoveTo_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_AIMoveTo;

// ********** End Class UK2Node_AIMoveTo ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AIGraph_Public_K2Node_AIMoveTo_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
