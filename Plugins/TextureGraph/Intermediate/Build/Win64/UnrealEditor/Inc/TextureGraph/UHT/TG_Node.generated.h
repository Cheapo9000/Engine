// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TG_Node.h"

#ifdef TEXTUREGRAPH_TG_Node_generated_h
#error "TG_Node.generated.h already included, missing '#pragma once' in TG_Node.h"
#endif
#define TEXTUREGRAPH_TG_Node_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FTG_NodeEditorData ************************************************
struct Z_Construct_UScriptStruct_FTG_NodeEditorData_Statics;
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Node_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FTG_NodeEditorData_Statics; \
	TEXTUREGRAPH_API static class UScriptStruct* StaticStruct();


struct FTG_NodeEditorData;
// ********** End ScriptStruct FTG_NodeEditorData **************************************************

// ********** Begin Class UTG_Node *****************************************************************
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Node_h_46_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTG_Node, TEXTUREGRAPH_API)


struct Z_Construct_UClass_UTG_Node_Statics;
TEXTUREGRAPH_API UClass* Z_Construct_UClass_UTG_Node_NoRegister();

#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Node_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTG_Node(); \
	friend struct ::Z_Construct_UClass_UTG_Node_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TEXTUREGRAPH_API UClass* ::Z_Construct_UClass_UTG_Node_NoRegister(); \
public: \
	DECLARE_CLASS2(UTG_Node, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TextureGraph"), Z_Construct_UClass_UTG_Node_NoRegister) \
	DECLARE_SERIALIZER(UTG_Node) \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Node_h_46_ARCHIVESERIALIZER


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Node_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TEXTUREGRAPH_API UTG_Node(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTG_Node(UTG_Node&&) = delete; \
	UTG_Node(const UTG_Node&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TEXTUREGRAPH_API, UTG_Node); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTG_Node); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTG_Node) \
	TEXTUREGRAPH_API virtual ~UTG_Node();


#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Node_h_43_PROLOG
#define FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Node_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Node_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Node_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTG_Node;

// ********** End Class UTG_Node *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_TextureGraph_Source_TextureGraph_Public_TG_Node_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
