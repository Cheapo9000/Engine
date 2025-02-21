// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/GraphIsland.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYGRAPH_GraphIsland_generated_h
#error "GraphIsland.generated.h already included, missing '#pragma once' in GraphIsland.h"
#endif
#define GAMEPLAYGRAPH_GraphIsland_generated_h

#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_57_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphIsland(); \
	friend struct Z_Construct_UClass_UGraphIsland_Statics; \
public: \
	DECLARE_CLASS(UGraphIsland, UGraphElement, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayGraph"), NO_API) \
	DECLARE_SERIALIZER(UGraphIsland)


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_57_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGraphIsland(UGraphIsland&&); \
	UGraphIsland(const UGraphIsland&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGraphIsland); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphIsland); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGraphIsland) \
	NO_API virtual ~UGraphIsland();


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_54_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_57_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_57_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_57_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYGRAPH_API UClass* StaticClass<class UGraphIsland>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h


#define FOREACH_ENUM_EGRAPHISLANDOPERATIONS(op) \
	op(EGraphIslandOperations::None) \
	op(EGraphIslandOperations::Add) \
	op(EGraphIslandOperations::Split) \
	op(EGraphIslandOperations::Merge) \
	op(EGraphIslandOperations::Destroy) \
	op(EGraphIslandOperations::All) 

enum class EGraphIslandOperations : int32;
template<> struct TIsUEnumClass<EGraphIslandOperations> { enum { Value = true }; };
template<> GAMEPLAYGRAPH_API UEnum* StaticEnum<EGraphIslandOperations>();

#define FOREACH_ENUM_EGRAPHISLANDCONNECTIVITYCHANGE(op) \
	op(EGraphIslandConnectivityChange::VertexAdd) \
	op(EGraphIslandConnectivityChange::SplitFrom) \
	op(EGraphIslandConnectivityChange::SplitTo) \
	op(EGraphIslandConnectivityChange::Other) 

enum class EGraphIslandConnectivityChange : int32;
template<> struct TIsUEnumClass<EGraphIslandConnectivityChange> { enum { Value = true }; };
template<> GAMEPLAYGRAPH_API UEnum* StaticEnum<EGraphIslandConnectivityChange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
