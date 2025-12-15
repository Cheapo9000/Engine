// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "K2Node_VariableGet.h"

#ifdef BLUEPRINTGRAPH_K2Node_VariableGet_generated_h
#error "K2Node_VariableGet.generated.h already included, missing '#pragma once' in K2Node_VariableGet.h"
#endif
#define BLUEPRINTGRAPH_K2Node_VariableGet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UK2Node_VariableGet ******************************************************
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_41_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_VariableGet, BLUEPRINTGRAPH_API)


struct Z_Construct_UClass_UK2Node_VariableGet_Statics;
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_VariableGet_NoRegister();

#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUK2Node_VariableGet(); \
	friend struct ::Z_Construct_UClass_UK2Node_VariableGet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTGRAPH_API UClass* ::Z_Construct_UClass_UK2Node_VariableGet_NoRegister(); \
public: \
	DECLARE_CLASS2(UK2Node_VariableGet, UK2Node_Variable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintGraph"), Z_Construct_UClass_UK2Node_VariableGet_NoRegister) \
	DECLARE_SERIALIZER(UK2Node_VariableGet) \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_41_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BLUEPRINTGRAPH_API UK2Node_VariableGet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK2Node_VariableGet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BLUEPRINTGRAPH_API, UK2Node_VariableGet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK2Node_VariableGet); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UK2Node_VariableGet(UK2Node_VariableGet&&) = delete; \
	UK2Node_VariableGet(const UK2Node_VariableGet&) = delete; \
	BLUEPRINTGRAPH_API virtual ~UK2Node_VariableGet();


#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_38_PROLOG
#define FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_41_INCLASS \
	FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UK2Node_VariableGet;

// ********** End Class UK2Node_VariableGet ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_VariableGet_h

// ********** Begin Enum EGetNodeVariation *********************************************************
#define FOREACH_ENUM_EGETNODEVARIATION(op) \
	op(EGetNodeVariation::Pure) \
	op(EGetNodeVariation::ValidatedObject) \
	op(EGetNodeVariation::Branch) 

enum class EGetNodeVariation;
template<> struct TIsUEnumClass<EGetNodeVariation> { enum { Value = true }; };
template<> BLUEPRINTGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EGetNodeVariation>();
// ********** End Enum EGetNodeVariation ***********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
