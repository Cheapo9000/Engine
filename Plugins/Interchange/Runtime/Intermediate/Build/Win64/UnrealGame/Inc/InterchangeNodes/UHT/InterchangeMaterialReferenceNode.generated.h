// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMaterialReferenceNode.h"

#ifdef INTERCHANGENODES_InterchangeMaterialReferenceNode_generated_h
#error "InterchangeMaterialReferenceNode.generated.h already included, missing '#pragma once' in InterchangeMaterialReferenceNode.h"
#endif
#define INTERCHANGENODES_InterchangeMaterialReferenceNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeMaterialReferenceNode ****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialReferenceNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomContentPath); \
	DECLARE_FUNCTION(execGetCustomContentPath);


struct Z_Construct_UClass_UInterchangeMaterialReferenceNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeMaterialReferenceNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialReferenceNode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialReferenceNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMaterialReferenceNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeMaterialReferenceNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMaterialReferenceNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeMaterialReferenceNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMaterialReferenceNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialReferenceNode_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeMaterialReferenceNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMaterialReferenceNode(UInterchangeMaterialReferenceNode&&) = delete; \
	UInterchangeMaterialReferenceNode(const UInterchangeMaterialReferenceNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeMaterialReferenceNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialReferenceNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialReferenceNode) \
	INTERCHANGENODES_API virtual ~UInterchangeMaterialReferenceNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialReferenceNode_h_18_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialReferenceNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialReferenceNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialReferenceNode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialReferenceNode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMaterialReferenceNode;

// ********** End Class UInterchangeMaterialReferenceNode ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMaterialReferenceNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
