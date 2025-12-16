// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSceneImportAssetFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeSceneImportAssetFactoryNode_generated_h
#error "InterchangeSceneImportAssetFactoryNode.generated.h already included, missing '#pragma once' in InterchangeSceneImportAssetFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeSceneImportAssetFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeSceneImportAssetFactoryNode **********************************
struct Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneImportAssetFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSceneImportAssetFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeSceneImportAssetFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSceneImportAssetFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeSceneImportAssetFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSceneImportAssetFactoryNode(UInterchangeSceneImportAssetFactoryNode&&) = delete; \
	UInterchangeSceneImportAssetFactoryNode(const UInterchangeSceneImportAssetFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeSceneImportAssetFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneImportAssetFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSceneImportAssetFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeSceneImportAssetFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h_12_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSceneImportAssetFactoryNode;

// ********** End Class UInterchangeSceneImportAssetFactoryNode ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneImportAssetFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
