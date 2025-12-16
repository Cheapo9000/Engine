// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeDecalMaterialNode.h"

#ifdef INTERCHANGENODES_InterchangeDecalMaterialNode_generated_h
#error "InterchangeDecalMaterialNode.generated.h already included, missing '#pragma once' in InterchangeDecalMaterialNode.h"
#endif
#define INTERCHANGENODES_InterchangeDecalMaterialNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeDecalMaterialNode ********************************************
struct Z_Construct_UClass_UInterchangeDecalMaterialNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeDecalMaterialNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDecalMaterialNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeDecalMaterialNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeDecalMaterialNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeDecalMaterialNode, UInterchangeShaderNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeDecalMaterialNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeDecalMaterialNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeDecalMaterialNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeDecalMaterialNode(UInterchangeDecalMaterialNode&&) = delete; \
	UInterchangeDecalMaterialNode(const UInterchangeDecalMaterialNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeDecalMaterialNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDecalMaterialNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDecalMaterialNode) \
	INTERCHANGENODES_API virtual ~UInterchangeDecalMaterialNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeDecalMaterialNode;

// ********** End Class UInterchangeDecalMaterialNode **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
