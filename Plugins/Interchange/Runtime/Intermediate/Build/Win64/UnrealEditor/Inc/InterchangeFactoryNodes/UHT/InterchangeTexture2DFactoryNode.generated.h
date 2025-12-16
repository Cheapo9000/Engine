// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTexture2DFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeTexture2DFactoryNode_generated_h
#error "InterchangeTexture2DFactoryNode.generated.h already included, missing '#pragma once' in InterchangeTexture2DFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeTexture2DFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeTexture2DFactoryNode *****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSourceBlock); \
	DECLARE_FUNCTION(execSetSourceBlockByCoordinates); \
	DECLARE_FUNCTION(execGetSourceBlock); \
	DECLARE_FUNCTION(execGetSourceBlockByCoordinates); \
	DECLARE_FUNCTION(execSetSourceBlocks); \
	DECLARE_FUNCTION(execGetSourceBlocks); \
	DECLARE_FUNCTION(execSetCustomAddressY); \
	DECLARE_FUNCTION(execGetCustomAddressY); \
	DECLARE_FUNCTION(execSetCustomAddressX); \
	DECLARE_FUNCTION(execGetCustomAddressX);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeTexture2DFactoryNode, INTERCHANGEFACTORYNODES_API)


struct Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTexture2DFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeTexture2DFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeTexture2DFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTexture2DFactoryNode, UInterchangeTextureFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeTexture2DFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTexture2DFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_28_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeTexture2DFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTexture2DFactoryNode(UInterchangeTexture2DFactoryNode&&) = delete; \
	UInterchangeTexture2DFactoryNode(const UInterchangeTexture2DFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeTexture2DFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTexture2DFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTexture2DFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeTexture2DFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_25_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTexture2DFactoryNode;

// ********** End Class UInterchangeTexture2DFactoryNode *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
