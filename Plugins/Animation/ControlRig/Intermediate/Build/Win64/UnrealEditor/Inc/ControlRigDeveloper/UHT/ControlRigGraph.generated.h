// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/ControlRigGraph.h"

#ifdef CONTROLRIGDEVELOPER_ControlRigGraph_generated_h
#error "ControlRigGraph.generated.h already included, missing '#pragma once' in ControlRigGraph.h"
#endif
#define CONTROLRIGDEVELOPER_ControlRigGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UControlRigGraph *********************************************************
struct Z_Construct_UClass_UControlRigGraph_Statics;
CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigGraph_NoRegister();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigGraph(); \
	friend struct ::Z_Construct_UClass_UControlRigGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CONTROLRIGDEVELOPER_API UClass* ::Z_Construct_UClass_UControlRigGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UControlRigGraph, URigVMEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigDeveloper"), Z_Construct_UClass_UControlRigGraph_NoRegister) \
	DECLARE_SERIALIZER(UControlRigGraph)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UControlRigGraph(UControlRigGraph&&) = delete; \
	UControlRigGraph(const UControlRigGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONTROLRIGDEVELOPER_API, UControlRigGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UControlRigGraph) \
	CONTROLRIGDEVELOPER_API virtual ~UControlRigGraph();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h_23_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UControlRigGraph;

// ********** End Class UControlRigGraph ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigDeveloper_Public_Graph_ControlRigGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
