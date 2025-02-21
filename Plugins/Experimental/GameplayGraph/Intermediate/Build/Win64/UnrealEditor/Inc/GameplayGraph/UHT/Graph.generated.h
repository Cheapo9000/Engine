// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/Graph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYGRAPH_Graph_generated_h
#error "Graph.generated.h already included, missing '#pragma once' in Graph.h"
#endif
#define GAMEPLAYGRAPH_Graph_generated_h

#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGraphProperties_Statics; \
	GAMEPLAYGRAPH_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYGRAPH_API UScriptStruct* StaticStruct<struct FGraphProperties>();

#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraph(); \
	friend struct Z_Construct_UClass_UGraph_Statics; \
public: \
	DECLARE_CLASS(UGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayGraph"), NO_API) \
	DECLARE_SERIALIZER(UGraph)


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_86_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGraph(UGraph&&); \
	UGraph(const UGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGraph) \
	NO_API virtual ~UGraph();


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_83_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYGRAPH_API UClass* StaticClass<class UGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_Graph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
