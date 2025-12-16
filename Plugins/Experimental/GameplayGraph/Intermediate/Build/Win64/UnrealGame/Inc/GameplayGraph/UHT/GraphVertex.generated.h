// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/GraphVertex.h"

#ifdef GAMEPLAYGRAPH_GraphVertex_generated_h
#error "GraphVertex.generated.h already included, missing '#pragma once' in GraphVertex.h"
#endif
#define GAMEPLAYGRAPH_GraphVertex_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGraphVertex *************************************************************
struct Z_Construct_UClass_UGraphVertex_Statics;
GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphVertex_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphVertex(); \
	friend struct ::Z_Construct_UClass_UGraphVertex_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYGRAPH_API UClass* ::Z_Construct_UClass_UGraphVertex_NoRegister(); \
public: \
	DECLARE_CLASS2(UGraphVertex, UGraphElement, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayGraph"), Z_Construct_UClass_UGraphVertex_NoRegister) \
	DECLARE_SERIALIZER(UGraphVertex)


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGraphVertex(UGraphVertex&&) = delete; \
	UGraphVertex(const UGraphVertex&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYGRAPH_API, UGraphVertex); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphVertex); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGraphVertex) \
	GAMEPLAYGRAPH_API virtual ~UGraphVertex();


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGraphVertex;

// ********** End Class UGraphVertex ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphVertex_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
