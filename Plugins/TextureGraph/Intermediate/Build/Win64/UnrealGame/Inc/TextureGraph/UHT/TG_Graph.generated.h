// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TG_Graph.h"

#ifdef TEXTUREGRAPH_TG_Graph_generated_h
#error "TG_Graph.generated.h already included, missing '#pragma once' in TG_Graph.h"
#endif
#define TEXTUREGRAPH_TG_Graph_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTG_Graph ****************************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Graph_h_46_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTG_Graph, TEXTUREGRAPH_API)


struct Z_Construct_UClass_UTG_Graph_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Graph_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Graph_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Graph(); \
	friend struct ::Z_Construct_UClass_UTG_Graph_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Graph_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Graph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Graph_NoRegister) \
	DECLARE_SERIALIZER(UTG_Graph) \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Graph_h_46_ARCHIVESERIALIZER


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Graph_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Graph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Graph(UTG_Graph&&) = delete; \
	UTG_Graph(const UTG_Graph&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Graph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Graph); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Graph) \
	TEXTUREGRAPH_API virtual ~UTG_Graph();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Graph_h_43_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Graph_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Graph_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Graph_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Graph;

// ********** End Class UTG_Graph ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Graph_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
