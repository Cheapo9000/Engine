// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeDecalMaterialFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeDecalMaterialFactoryNode_generated_h
#error "InterchangeDecalMaterialFactoryNode.generated.h already included, missing '#pragma once' in InterchangeDecalMaterialFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeDecalMaterialFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeDecalMaterialFactoryNode *************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomNormalTexturePath); \
	DECLARE_FUNCTION(execGetCustomNormalTexturePath); \
	DECLARE_FUNCTION(execSetCustomDiffuseTexturePath); \
	DECLARE_FUNCTION(execGetCustomDiffuseTexturePath);


struct Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDecalMaterialFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeDecalMaterialFactoryNode, UInterchangeBaseMaterialFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeDecalMaterialFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeDecalMaterialFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeDecalMaterialFactoryNode(UInterchangeDecalMaterialFactoryNode&&) = delete; \
	UInterchangeDecalMaterialFactoryNode(const UInterchangeDecalMaterialFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeDecalMaterialFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDecalMaterialFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDecalMaterialFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeDecalMaterialFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_12_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeDecalMaterialFactoryNode;

// ********** End Class UInterchangeDecalMaterialFactoryNode ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
