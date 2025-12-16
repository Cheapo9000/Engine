// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTexture2DNode.h"

#ifdef INTERCHANGENODES_InterchangeTexture2DNode_generated_h
#error "InterchangeTexture2DNode.generated.h already included, missing '#pragma once' in InterchangeTexture2DNode.h"
#endif
#define INTERCHANGENODES_InterchangeTexture2DNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeTextureWrapMode : uint8;

// ********** Begin Class UInterchangeTexture2DNode ************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetForceLongLatCubemap); \
	DECLARE_FUNCTION(execSetForceLongLatCubemap); \
	DECLARE_FUNCTION(execGetCustomWrapV); \
	DECLARE_FUNCTION(execSetCustomWrapV); \
	DECLARE_FUNCTION(execGetCustomWrapU); \
	DECLARE_FUNCTION(execSetCustomWrapU); \
	DECLARE_FUNCTION(execGetSourceBlocks);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeTexture2DNode, INTERCHANGENODES_API)


struct Z_Construct_UClass_UInterchangeTexture2DNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTexture2DNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeTexture2DNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTexture2DNode, UInterchangeTextureNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTexture2DNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_28_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeTexture2DNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTexture2DNode(UInterchangeTexture2DNode&&) = delete; \
	UInterchangeTexture2DNode(const UInterchangeTexture2DNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeTexture2DNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTexture2DNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTexture2DNode) \
	INTERCHANGENODES_API virtual ~UInterchangeTexture2DNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_25_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTexture2DNode;

// ********** End Class UInterchangeTexture2DNode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
