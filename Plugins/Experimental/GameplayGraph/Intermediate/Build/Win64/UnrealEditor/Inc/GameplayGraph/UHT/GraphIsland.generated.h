// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/GraphIsland.h"

#ifdef GAMEPLAYGRAPH_GraphIsland_generated_h
#error "GraphIsland.generated.h already included, missing '#pragma once' in GraphIsland.h"
#endif
#define GAMEPLAYGRAPH_GraphIsland_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UGraphIsland *************************************************************
struct Z_Construct_UClass_UGraphIsland_Statics;
GAMEPLAYGRAPH_API UClass* Z_Construct_UClass_UGraphIsland_NoRegister();

#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGraphIsland(); \
	friend struct ::Z_Construct_UClass_UGraphIsland_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEPLAYGRAPH_API UClass* ::Z_Construct_UClass_UGraphIsland_NoRegister(); \
public: \
	DECLARE_CLASS2(UGraphIsland, UGraphElement, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayGraph"), Z_Construct_UClass_UGraphIsland_NoRegister) \
	DECLARE_SERIALIZER(UGraphIsland)


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_59_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGraphIsland(UGraphIsland&&) = delete; \
	UGraphIsland(const UGraphIsland&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYGRAPH_API, UGraphIsland); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGraphIsland); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGraphIsland) \
	GAMEPLAYGRAPH_API virtual ~UGraphIsland();


#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_56_PROLOG
#define FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGraphIsland;

// ********** End Class UGraphIsland ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_GameplayGraph_Source_GameplayGraph_Public_Graph_GraphIsland_h

// ********** Begin Enum EGraphIslandOperations ****************************************************
#define FOREACH_ENUM_EGRAPHISLANDOPERATIONS(op) \
	op(EGraphIslandOperations::None) \
	op(EGraphIslandOperations::Add) \
	op(EGraphIslandOperations::Split) \
	op(EGraphIslandOperations::Merge) \
	op(EGraphIslandOperations::Destroy) \
	op(EGraphIslandOperations::All) 

enum class EGraphIslandOperations : int32;
template<> struct TIsUEnumClass<EGraphIslandOperations> { enum { Value = true }; };
template<> GAMEPLAYGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EGraphIslandOperations>();
// ********** End Enum EGraphIslandOperations ******************************************************

// ********** Begin Enum EGraphIslandConnectivityChange ********************************************
#define FOREACH_ENUM_EGRAPHISLANDCONNECTIVITYCHANGE(op) \
	op(EGraphIslandConnectivityChange::VertexAdd) \
	op(EGraphIslandConnectivityChange::SplitFrom) \
	op(EGraphIslandConnectivityChange::SplitTo) \
	op(EGraphIslandConnectivityChange::Other) 

enum class EGraphIslandConnectivityChange : int32;
template<> struct TIsUEnumClass<EGraphIslandConnectivityChange> { enum { Value = true }; };
template<> GAMEPLAYGRAPH_NON_ATTRIBUTED_API UEnum* StaticEnum<EGraphIslandConnectivityChange>();
// ********** End Enum EGraphIslandConnectivityChange **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
