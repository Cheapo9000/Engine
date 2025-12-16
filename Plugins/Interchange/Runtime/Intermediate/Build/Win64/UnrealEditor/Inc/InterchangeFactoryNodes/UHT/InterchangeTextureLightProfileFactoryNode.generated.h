// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeTextureLightProfileFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeTextureLightProfileFactoryNode_generated_h
#error "InterchangeTextureLightProfileFactoryNode.generated.h already included, missing '#pragma once' in InterchangeTextureLightProfileFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeTextureLightProfileFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeTextureLightProfileFactoryNode *******************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomTextureMultiplier); \
	DECLARE_FUNCTION(execGetCustomTextureMultiplier); \
	DECLARE_FUNCTION(execSetCustomBrightness); \
	DECLARE_FUNCTION(execGetCustomBrightness);


struct Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTextureLightProfileFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeTextureLightProfileFactoryNode, UInterchangeTexture2DFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeTextureLightProfileFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeTextureLightProfileFactoryNode(UInterchangeTextureLightProfileFactoryNode&&) = delete; \
	UInterchangeTextureLightProfileFactoryNode(const UInterchangeTextureLightProfileFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeTextureLightProfileFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTextureLightProfileFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTextureLightProfileFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeTextureLightProfileFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_18_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeTextureLightProfileFactoryNode;

// ********** End Class UInterchangeTextureLightProfileFactoryNode *********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeTextureLightProfileFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
