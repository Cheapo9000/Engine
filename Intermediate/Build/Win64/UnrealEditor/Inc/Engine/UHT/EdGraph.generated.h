// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/EdGraph.h"

#ifdef ENGINE_EdGraph_generated_h
#error "EdGraph.generated.h already included, missing '#pragma once' in EdGraph.h"
#endif
#define ENGINE_EdGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGraphReference ***************************************************
struct Z_Construct_UScriptStruct_FGraphReference_Statics;
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGraphReference_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


struct FGraphReference;
// ********** End ScriptStruct FGraphReference *****************************************************

// ********** Begin Class UEdGraph *****************************************************************
#if WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UEdGraph, ENGINE_API)
#else // WITH_EDITORONLY_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ARCHIVESERIALIZER
#endif // WITH_EDITORONLY_DATA


struct Z_Construct_UClass_UEdGraph_Statics;
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUEdGraph(); \
	friend struct ::Z_Construct_UClass_UEdGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UEdGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UEdGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UEdGraph_NoRegister) \
	DECLARE_SERIALIZER(UEdGraph) \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEdGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEdGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEdGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEdGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEdGraph(UEdGraph&&) = delete; \
	UEdGraph(const UEdGraph&) = delete; \
	ENGINE_API virtual ~UEdGraph();


#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_66_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEdGraph;

// ********** End Class UEdGraph *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EdGraph_EdGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
