// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTextureLightProfileNode.h"

#ifdef INTERCHANGENODES_InterchangeTextureLightProfileNode_generated_h
#error "InterchangeTextureLightProfileNode.generated.h already included, missing '#pragma once' in InterchangeTextureLightProfileNode.h"
#endif
#define INTERCHANGENODES_InterchangeTextureLightProfileNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeTextureLightProfileNode **************************************
struct Z_Construct_UClass_UInterchangeTextureLightProfileNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTextureLightProfileNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeTextureLightProfileNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTextureLightProfileNode, UInterchangeTextureNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTextureLightProfileNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeTextureLightProfileNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTextureLightProfileNode(UInterchangeTextureLightProfileNode&&) = delete; \
	UInterchangeTextureLightProfileNode(const UInterchangeTextureLightProfileNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeTextureLightProfileNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTextureLightProfileNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTextureLightProfileNode) \
	INTERCHANGENODES_API virtual ~UInterchangeTextureLightProfileNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTextureLightProfileNode;

// ********** End Class UInterchangeTextureLightProfileNode ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureLightProfileNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
