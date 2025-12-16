// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTextureCubeArrayNode.h"

#ifdef INTERCHANGENODES_InterchangeTextureCubeArrayNode_generated_h
#error "InterchangeTextureCubeArrayNode.generated.h already included, missing '#pragma once' in InterchangeTextureCubeArrayNode.h"
#endif
#define INTERCHANGENODES_InterchangeTextureCubeArrayNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeTextureCubeArrayNode *****************************************
struct Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTextureCubeArrayNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeTextureCubeArrayNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTextureCubeArrayNode, UInterchangeTextureNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTextureCubeArrayNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeTextureCubeArrayNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTextureCubeArrayNode(UInterchangeTextureCubeArrayNode&&) = delete; \
	UInterchangeTextureCubeArrayNode(const UInterchangeTextureCubeArrayNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeTextureCubeArrayNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTextureCubeArrayNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTextureCubeArrayNode) \
	INTERCHANGENODES_API virtual ~UInterchangeTextureCubeArrayNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTextureCubeArrayNode;

// ********** End Class UInterchangeTextureCubeArrayNode *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeArrayNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
