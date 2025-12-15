// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIGraph.h"

#ifdef AIGRAPH_AIGraph_generated_h
#error "AIGraph.generated.h already included, missing '#pragma once' in AIGraph.h"
#endif
#define AIGRAPH_AIGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAIGraph *****************************************************************
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_23_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAIGraph, AIGRAPH_API)


struct Z_Construct_UClass_UAIGraph_Statics;
AIGRAPH_API UClass* Z_Construct_UClass_UAIGraph_NoRegister();

#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAIGraph(); \
	friend struct ::Z_Construct_UClass_UAIGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIGRAPH_API UClass* ::Z_Construct_UClass_UAIGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIGraph"), Z_Construct_UClass_UAIGraph_NoRegister) \
	DECLARE_SERIALIZER(UAIGraph) \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_23_ARCHIVESERIALIZER


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIGRAPH_API UAIGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIGRAPH_API, UAIGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIGraph(UAIGraph&&) = delete; \
	UAIGraph(const UAIGraph&) = delete; \
	AIGRAPH_API virtual ~UAIGraph();


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_20_PROLOG
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_23_INCLASS \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIGraph;

// ********** End Class UAIGraph *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AIGraph_Classes_AIGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
