// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Debug/ReporterGraph.h"

#ifdef ENGINE_ReporterGraph_generated_h
#error "ReporterGraph.generated.h already included, missing '#pragma once' in ReporterGraph.h"
#endif
#define ENGINE_ReporterGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UReporterGraph ***********************************************************
struct Z_Construct_UClass_UReporterGraph_Statics;
ENGINE_API UClass* Z_Construct_UClass_UReporterGraph_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_103_INCLASS \
private: \
	static void StaticRegisterNativesUReporterGraph(); \
	friend struct ::Z_Construct_UClass_UReporterGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UReporterGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UReporterGraph, UReporterBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UReporterGraph_NoRegister) \
	DECLARE_SERIALIZER(UReporterGraph)


#define FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_103_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReporterGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReporterGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReporterGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReporterGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UReporterGraph(UReporterGraph&&) = delete; \
	UReporterGraph(const UReporterGraph&) = delete; \
	ENGINE_API virtual ~UReporterGraph();


#define FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_100_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_103_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_103_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h_103_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UReporterGraph;

// ********** End Class UReporterGraph *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Debug_ReporterGraph_h

// ********** Begin Enum EGraphAxisStyle ***********************************************************
#define FOREACH_ENUM_EGRAPHAXISSTYLE(op) \
	op(EGraphAxisStyle::Lines) \
	op(EGraphAxisStyle::Notches) \
	op(EGraphAxisStyle::Grid) 

namespace EGraphAxisStyle { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGraphAxisStyle::Type>();
// ********** End Enum EGraphAxisStyle *************************************************************

// ********** Begin Enum EGraphDataStyle ***********************************************************
#define FOREACH_ENUM_EGRAPHDATASTYLE(op) \
	op(EGraphDataStyle::Lines) \
	op(EGraphDataStyle::Filled) 

namespace EGraphDataStyle { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<EGraphDataStyle::Type>();
// ********** End Enum EGraphDataStyle *************************************************************

// ********** Begin Enum ELegendPosition ***********************************************************
#define FOREACH_ENUM_ELEGENDPOSITION(op) \
	op(ELegendPosition::Outside) \
	op(ELegendPosition::Inside) 

namespace ELegendPosition { enum Type : int; }
template<> ENGINE_NON_ATTRIBUTED_API UEnum* StaticEnum<ELegendPosition::Type>();
// ********** End Enum ELegendPosition *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
