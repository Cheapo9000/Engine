// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RigDependencyGraph/RigDependencyGraph.h"

#ifdef CONTROLRIGEDITOR_RigDependencyGraph_generated_h
#error "RigDependencyGraph.generated.h already included, missing '#pragma once' in RigDependencyGraph.h"
#endif
#define CONTROLRIGEDITOR_RigDependencyGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URigDependencyGraph ******************************************************
struct Z_Construct_UClass_URigDependencyGraph_Statics;
CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_URigDependencyGraph_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraph_h_20_INCLASS \
private: \
	static void StaticRegisterNativesURigDependencyGraph(); \
	friend struct ::Z_Construct_UClass_URigDependencyGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGEDITOR_API UClass* ::Z_Construct_UClass_URigDependencyGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(URigDependencyGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), Z_Construct_UClass_URigDependencyGraph_NoRegister) \
	DECLARE_SERIALIZER(URigDependencyGraph)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraph_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URigDependencyGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URigDependencyGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URigDependencyGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URigDependencyGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URigDependencyGraph(URigDependencyGraph&&) = delete; \
	URigDependencyGraph(const URigDependencyGraph&) = delete; \
	NO_API virtual ~URigDependencyGraph();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraph_h_17_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraph_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraph_h_20_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraph_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URigDependencyGraph;

// ********** End Class URigDependencyGraph ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_RigDependencyGraph_RigDependencyGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
