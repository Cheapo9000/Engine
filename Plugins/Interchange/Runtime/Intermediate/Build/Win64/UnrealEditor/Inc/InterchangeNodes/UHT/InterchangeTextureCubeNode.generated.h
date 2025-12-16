// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTextureCubeNode.h"

#ifdef INTERCHANGENODES_InterchangeTextureCubeNode_generated_h
#error "InterchangeTextureCubeNode.generated.h already included, missing '#pragma once' in InterchangeTextureCubeNode.h"
#endif
#define INTERCHANGENODES_InterchangeTextureCubeNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeTextureCubeNode **********************************************
struct Z_Construct_UClass_UInterchangeTextureCubeNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureCubeNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTextureCubeNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeTextureCubeNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeTextureCubeNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTextureCubeNode, UInterchangeTextureNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeTextureCubeNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTextureCubeNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeTextureCubeNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTextureCubeNode(UInterchangeTextureCubeNode&&) = delete; \
	UInterchangeTextureCubeNode(const UInterchangeTextureCubeNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeTextureCubeNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTextureCubeNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTextureCubeNode) \
	INTERCHANGENODES_API virtual ~UInterchangeTextureCubeNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTextureCubeNode;

// ********** End Class UInterchangeTextureCubeNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureCubeNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
