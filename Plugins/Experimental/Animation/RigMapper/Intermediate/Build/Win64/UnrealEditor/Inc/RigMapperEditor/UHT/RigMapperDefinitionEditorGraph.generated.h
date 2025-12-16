// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigMapperGraph/RigMapperDefinitionEditorGraph.h"

#ifdef RIGMAPPEREDITOR_RigMapperDefinitionEditorGraph_generated_h
#error "RigMapperDefinitionEditorGraph.generated.h already included, missing '#pragma once' in RigMapperDefinitionEditorGraph.h"
#endif
#define RIGMAPPEREDITOR_RigMapperDefinitionEditorGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigMapperDefinitionEditorGraph ******************************************
struct Z_Construct_UClass_URigMapperDefinitionEditorGraph_Statics;
RIGMAPPEREDITOR_API UClass* Z_Construct_UClass_URigMapperDefinitionEditorGraph_NoRegister();

#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraph_h_21_INCLASS \
private: \
	static void StaticRegisterNativesURigMapperDefinitionEditorGraph(); \
	friend struct ::Z_Construct_UClass_URigMapperDefinitionEditorGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RIGMAPPEREDITOR_API UClass* ::Z_Construct_UClass_URigMapperDefinitionEditorGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(URigMapperDefinitionEditorGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RigMapperEditor"), Z_Construct_UClass_URigMapperDefinitionEditorGraph_NoRegister) \
	DECLARE_SERIALIZER(URigMapperDefinitionEditorGraph)


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraph_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	RIGMAPPEREDITOR_API URigMapperDefinitionEditorGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigMapperDefinitionEditorGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(RIGMAPPEREDITOR_API, URigMapperDefinitionEditorGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigMapperDefinitionEditorGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigMapperDefinitionEditorGraph(URigMapperDefinitionEditorGraph&&) = delete; \
	URigMapperDefinitionEditorGraph(const URigMapperDefinitionEditorGraph&) = delete; \
	RIGMAPPEREDITOR_API virtual ~URigMapperDefinitionEditorGraph();


#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraph_h_18_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraph_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraph_h_21_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraph_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigMapperDefinitionEditorGraph;

// ********** End Class URigMapperDefinitionEditorGraph ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_RigMapper_Source_RigMapperEditor_Private_RigMapperGraph_RigMapperDefinitionEditorGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
