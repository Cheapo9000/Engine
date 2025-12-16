// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PCGEditorGraph.h"

#ifdef PCGEDITOR_PCGEditorGraph_generated_h
#error "PCGEditorGraph.generated.h already included, missing '#pragma once' in PCGEditorGraph.h"
#endif
#define PCGEDITOR_PCGEditorGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGEditorGraph **********************************************************
struct Z_Construct_UClass_UPCGEditorGraph_Statics;
PCGEDITOR_API UClass* Z_Construct_UClass_UPCGEditorGraph_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraph_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGEditorGraph(); \
	friend struct ::Z_Construct_UClass_UPCGEditorGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCGEDITOR_API UClass* ::Z_Construct_UClass_UPCGEditorGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGEditorGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCGEditor"), Z_Construct_UClass_UPCGEditorGraph_NoRegister) \
	DECLARE_SERIALIZER(UPCGEditorGraph) \
	virtual UObject* _getUObject() const override { return const_cast<UPCGEditorGraph*>(this); }


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraph_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGEditorGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGEditorGraph(UPCGEditorGraph&&) = delete; \
	UPCGEditorGraph(const UPCGEditorGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGEditorGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGEditorGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGEditorGraph) \
	NO_API virtual ~UPCGEditorGraph();


#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraph_h_23_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraph_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraph_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraph_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGEditorGraph;

// ********** End Class UPCGEditorGraph ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCGEditor_Private_PCGEditorGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
