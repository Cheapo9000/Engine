// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQueryGraph.h"

#ifdef ENVIRONMENTQUERYEDITOR_EnvironmentQueryGraph_generated_h
#error "EnvironmentQueryGraph.generated.h already included, missing '#pragma once' in EnvironmentQueryGraph.h"
#endif
#define ENVIRONMENTQUERYEDITOR_EnvironmentQueryGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEnvironmentQueryGraph ***************************************************
struct Z_Construct_UClass_UEnvironmentQueryGraph_Statics;
ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraph_NoRegister();

#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEnvironmentQueryGraph(); \
	friend struct ::Z_Construct_UClass_UEnvironmentQueryGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENVIRONMENTQUERYEDITOR_API UClass* ::Z_Construct_UClass_UEnvironmentQueryGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnvironmentQueryGraph, UAIGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnvironmentQueryEditor"), Z_Construct_UClass_UEnvironmentQueryGraph_NoRegister) \
	DECLARE_SERIALIZER(UEnvironmentQueryGraph)


#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvironmentQueryGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvironmentQueryGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvironmentQueryGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvironmentQueryGraph); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnvironmentQueryGraph(UEnvironmentQueryGraph&&) = delete; \
	UEnvironmentQueryGraph(const UEnvironmentQueryGraph&) = delete; \
	NO_API virtual ~UEnvironmentQueryGraph();


#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_12_PROLOG
#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_15_INCLASS \
	FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnvironmentQueryGraph;

// ********** End Class UEnvironmentQueryGraph *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
