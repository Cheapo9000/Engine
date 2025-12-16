// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTexture2DArrayNode.h"

#ifdef INTERCHANGENODES_InterchangeTexture2DArrayNode_generated_h
#error "InterchangeTexture2DArrayNode.generated.h already included, missing '#pragma once' in InterchangeTexture2DArrayNode.h"
#endif
#define INTERCHANGENODES_InterchangeTexture2DArrayNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeTexture2DArrayNode *******************************************
struct Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTexture2DArrayNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeTexture2DArrayNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTexture2DArrayNode, UInterchangeTextureNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTexture2DArrayNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeTexture2DArrayNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTexture2DArrayNode(UInterchangeTexture2DArrayNode&&) = delete; \
	UInterchangeTexture2DArrayNode(const UInterchangeTexture2DArrayNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeTexture2DArrayNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTexture2DArrayNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTexture2DArrayNode) \
	INTERCHANGENODES_API virtual ~UInterchangeTexture2DArrayNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTexture2DArrayNode;

// ********** End Class UInterchangeTexture2DArrayNode *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTexture2DArrayNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
