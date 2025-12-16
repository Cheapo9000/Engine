// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTextureBlurNode.h"

#ifdef INTERCHANGENODES_InterchangeTextureBlurNode_generated_h
#error "InterchangeTextureBlurNode.generated.h already included, missing '#pragma once' in InterchangeTextureBlurNode.h"
#endif
#define INTERCHANGENODES_InterchangeTextureBlurNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeTextureBlurNode **********************************************
struct Z_Construct_UClass_UInterchangeTextureBlurNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureBlurNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureBlurNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTextureBlurNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeTextureBlurNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeTextureBlurNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTextureBlurNode, UInterchangeTexture2DNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeTextureBlurNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTextureBlurNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureBlurNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeTextureBlurNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTextureBlurNode(UInterchangeTextureBlurNode&&) = delete; \
	UInterchangeTextureBlurNode(const UInterchangeTextureBlurNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeTextureBlurNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTextureBlurNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTextureBlurNode) \
	INTERCHANGENODES_API virtual ~UInterchangeTextureBlurNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureBlurNode_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureBlurNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureBlurNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureBlurNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTextureBlurNode;

// ********** End Class UInterchangeTextureBlurNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureBlurNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
