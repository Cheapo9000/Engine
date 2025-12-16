// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Expressions/Input/TG_Expression_Graph.h"

#ifdef TEXTUREGRAPH_TG_Expression_Graph_generated_h
#error "TG_Expression_Graph.generated.h already included, missing '#pragma once' in TG_Expression_Graph.h"
#endif
#define TEXTUREGRAPH_TG_Expression_Graph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Expression_Graph *****************************************************
struct Z_Construct_UClass_UTG_Expression_Graph_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_Graph_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_Graph(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_Graph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_Graph_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_Graph, UTG_Expression, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_Graph_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_Graph)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Expression_Graph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_Graph(UTG_Expression_Graph&&) = delete; \
	UTG_Expression_Graph(const UTG_Expression_Graph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_Graph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_Graph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Expression_Graph) \
	TEXTUREGRAPH_API virtual ~UTG_Expression_Graph();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_19_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_Graph;

// ********** End Class UTG_Expression_Graph *******************************************************

// ********** Begin Class UTG_Expression_TextureGraph **********************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_45_ACCESSORS \
static void SetTextureGraph_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_UTG_Expression_TextureGraph_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Expression_TextureGraph_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Expression_TextureGraph(); \
	friend struct ::Z_Construct_UClass_UTG_Expression_TextureGraph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Expression_TextureGraph_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Expression_TextureGraph, UTG_Expression_Graph, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Expression_TextureGraph_NoRegister) \
	DECLARE_SERIALIZER(UTG_Expression_TextureGraph)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_45_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Expression_TextureGraph(UTG_Expression_TextureGraph&&) = delete; \
	UTG_Expression_TextureGraph(const UTG_Expression_TextureGraph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Expression_TextureGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Expression_TextureGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTG_Expression_TextureGraph)


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_42_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_45_ACCESSORS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Expression_TextureGraph;

// ********** End Class UTG_Expression_TextureGraph ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_Expressions_Input_TG_Expression_Graph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
