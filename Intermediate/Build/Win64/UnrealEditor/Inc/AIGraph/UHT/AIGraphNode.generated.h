// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIGraphNode.h"

#ifdef AIGRAPH_AIGraphNode_generated_h
#error "AIGraphNode.generated.h already included, missing '#pragma once' in AIGraphNode.h"
#endif
#define AIGRAPH_AIGraphNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAIGraphNode *************************************************************
struct Z_Construct_UClass_UAIGraphNode_Statics;
AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphNode_NoRegister();

#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAIGraphNode(); \
	friend struct ::Z_Construct_UClass_UAIGraphNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AIGRAPH_API UClass* ::Z_Construct_UClass_UAIGraphNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UAIGraphNode, UEdGraphNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIGraph"), Z_Construct_UClass_UAIGraphNode_NoRegister) \
	DECLARE_SERIALIZER(UAIGraphNode)


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIGRAPH_API UAIGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIGRAPH_API, UAIGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIGraphNode); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAIGraphNode(UAIGraphNode&&) = delete; \
	UAIGraphNode(const UAIGraphNode&) = delete; \
	AIGRAPH_API virtual ~UAIGraphNode();


#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_19_PROLOG
#define FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_22_INCLASS \
	FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAIGraphNode;

// ********** End Class UAIGraphNode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AIGraph_Classes_AIGraphNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
