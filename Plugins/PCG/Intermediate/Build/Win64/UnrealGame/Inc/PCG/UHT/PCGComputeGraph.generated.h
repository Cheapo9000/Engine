// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/PCGComputeGraph.h"

#ifdef PCG_PCGComputeGraph_generated_h
#error "PCGComputeGraph.generated.h already included, missing '#pragma once' in PCGComputeGraph.h"
#endif
#define PCG_PCGComputeGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGComputeGraph *********************************************************
struct Z_Construct_UClass_UPCGComputeGraph_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGComputeGraph_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeGraph_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGComputeGraph(); \
	friend struct ::Z_Construct_UClass_UPCGComputeGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGComputeGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGComputeGraph, UComputeGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGComputeGraph_NoRegister) \
	DECLARE_SERIALIZER(UPCGComputeGraph)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeGraph_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGComputeGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGComputeGraph(UPCGComputeGraph&&) = delete; \
	UPCGComputeGraph(const UPCGComputeGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGComputeGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGComputeGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGComputeGraph) \
	NO_API virtual ~UPCGComputeGraph();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeGraph_h_22_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeGraph_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeGraph_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeGraph_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGComputeGraph;

// ********** End Class UPCGComputeGraph ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_PCGComputeGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
