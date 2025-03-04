// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnvironmentQueryGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENVIRONMENTQUERYEDITOR_EnvironmentQueryGraphNode_generated_h
#error "EnvironmentQueryGraphNode.generated.h already included, missing '#pragma once' in EnvironmentQueryGraphNode.h"
#endif
#define ENVIRONMENTQUERYEDITOR_EnvironmentQueryGraphNode_generated_h

#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUEnvironmentQueryGraphNode(); \
	friend struct Z_Construct_UClass_UEnvironmentQueryGraphNode_Statics; \
public: \
	DECLARE_CLASS(UEnvironmentQueryGraphNode, UAIGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnvironmentQueryEditor"), NO_API) \
	DECLARE_SERIALIZER(UEnvironmentQueryGraphNode)


#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvironmentQueryGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvironmentQueryGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvironmentQueryGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvironmentQueryGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnvironmentQueryGraphNode(UEnvironmentQueryGraphNode&&); \
	UEnvironmentQueryGraphNode(const UEnvironmentQueryGraphNode&); \
public: \
	NO_API virtual ~UEnvironmentQueryGraphNode();


#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h_21_PROLOG
#define FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h_24_INCLASS \
	FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<class UEnvironmentQueryGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
