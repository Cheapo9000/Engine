// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQueryGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENVIRONMENTQUERYEDITOR_EnvironmentQueryGraph_generated_h
#error "EnvironmentQueryGraph.generated.h already included, missing '#pragma once' in EnvironmentQueryGraph.h"
#endif
#define ENVIRONMENTQUERYEDITOR_EnvironmentQueryGraph_generated_h

#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEnvironmentQueryGraph(); \
	friend struct Z_Construct_UClass_UEnvironmentQueryGraph_Statics; \
public: \
	DECLARE_CLASS(UEnvironmentQueryGraph, UAIGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnvironmentQueryEditor"), NO_API) \
	DECLARE_SERIALIZER(UEnvironmentQueryGraph)


#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvironmentQueryGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvironmentQueryGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvironmentQueryGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvironmentQueryGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvironmentQueryGraph(UEnvironmentQueryGraph&&); \
	UEnvironmentQueryGraph(const UEnvironmentQueryGraph&); \
public: \
	NO_API virtual ~UEnvironmentQueryGraph();


#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_12_PROLOG
#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_15_INCLASS \
	FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<class UEnvironmentQueryGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
