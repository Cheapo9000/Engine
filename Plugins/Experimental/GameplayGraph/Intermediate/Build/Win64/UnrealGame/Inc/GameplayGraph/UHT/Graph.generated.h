// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Graph.h"

#ifdef GAMEPLAYGRAPH_Graph_generated_h
#error "Graph.generated.h already included, missing '#pragma once' in Graph.h"
#endif
#define GAMEPLAYGRAPH_Graph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGraphProperties **************************************************
struct Z_Construct_UScriptStruct_FGraphProperties_Statics;
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGraphProperties_Statics; \
	GAMEPLAYGRAPH_API static class UScriptStruct* StaticStruct();


struct FGraphProperties;
// ********** End ScriptStruct FGraphProperties ****************************************************

// ********** Begin Class UGraph *******************************************************************
struct Z_Construct_UClass_UGraph_Statics;
GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraph_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraph(); \
	friend struct ::Z_Construct_UClass_UGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYGRAPH_API UClass* ::Z_Construct_UClass_UGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayGraph"), Z_Construct_UClass_UGraph_NoRegister) \
	DECLARE_SERIALIZER(UGraph)


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_88_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGraph(UGraph&&) = delete; \
	UGraph(const UGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYGRAPH_API, UGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGraph) \
	GAMEPLAYGRAPH_API virtual ~UGraph();


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_85_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGraph;

// ********** End Class UGraph *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
