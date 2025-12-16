// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTexture2DArrayFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeTexture2DArrayFactoryNode_generated_h
#error "InterchangeTexture2DArrayFactoryNode.generated.h already included, missing '#pragma once' in InterchangeTexture2DArrayFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeTexture2DArrayFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeTexture2DArrayFactoryNode ************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomAddressZ); \
	DECLARE_FUNCTION(execGetCustomAddressZ); \
	DECLARE_FUNCTION(execGetCustomAddressY); \
	DECLARE_FUNCTION(execGetCustomAddressX);


struct Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTexture2DArrayFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTexture2DArrayFactoryNode, UInterchangeTextureFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTexture2DArrayFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeTexture2DArrayFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTexture2DArrayFactoryNode(UInterchangeTexture2DArrayFactoryNode&&) = delete; \
	UInterchangeTexture2DArrayFactoryNode(const UInterchangeTexture2DArrayFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeTexture2DArrayFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTexture2DArrayFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTexture2DArrayFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeTexture2DArrayFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_17_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTexture2DArrayFactoryNode;

// ********** End Class UInterchangeTexture2DArrayFactoryNode **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTexture2DArrayFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
