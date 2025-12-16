// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EdGraph/TG_EdGraph.h"

#ifdef TEXTUREGRAPHEDITOR_TG_EdGraph_generated_h
#error "TG_EdGraph.generated.h already included, missing '#pragma once' in TG_EdGraph.h"
#endif
#define TEXTUREGRAPHEDITOR_TG_EdGraph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_EdGraph **************************************************************
struct Z_Construct_UClass_UTG_EdGraph_Statics;
TEXTUREGRAPHEDITOR_API UClass* Z_Construct_UClass_UTG_EdGraph_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraph_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_EdGraph(); \
	friend struct ::Z_Construct_UClass_UTG_EdGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPHEDITOR_API UClass* ::Z_Construct_UClass_UTG_EdGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_EdGraph, UEdGraph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraphEditor"), Z_Construct_UClass_UTG_EdGraph_NoRegister) \
	DECLARE_SERIALIZER(UTG_EdGraph)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraph_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTG_EdGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_EdGraph(UTG_EdGraph&&) = delete; \
	UTG_EdGraph(const UTG_EdGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTG_EdGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_EdGraph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_EdGraph) \
	NO_API virtual ~UTG_EdGraph();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraph_h_20_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraph_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraph_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraph_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_EdGraph;

// ********** End Class UTG_EdGraph ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraphEditor_Public_EdGraph_TG_EdGraph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
