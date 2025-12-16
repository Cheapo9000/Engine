// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeActorFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeActorFactoryNode_generated_h
#error "InterchangeActorFactoryNode.generated.h already included, missing '#pragma once' in InterchangeActorFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeActorFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeActorFactoryNode *********************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetComponentUids); \
	DECLARE_FUNCTION(execAddComponentUid); \
	DECLARE_FUNCTION(execSetCustomMobility); \
	DECLARE_FUNCTION(execGetCustomMobility); \
	DECLARE_FUNCTION(execSetCustomActorClassName); \
	DECLARE_FUNCTION(execGetCustomActorClassName); \
	DECLARE_FUNCTION(execSetCustomActorVisibility); \
	DECLARE_FUNCTION(execGetCustomActorVisibility); \
	DECLARE_FUNCTION(execSetCustomComponentVisibility); \
	DECLARE_FUNCTION(execGetCustomComponentVisibility); \
	DECLARE_FUNCTION(execSetCustomLocalTransform); \
	DECLARE_FUNCTION(execGetCustomLocalTransform); \
	DECLARE_FUNCTION(execSetCustomGlobalTransform); \
	DECLARE_FUNCTION(execGetCustomGlobalTransform);


struct Z_Construct_UClass_UInterchangeActorFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeActorFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeActorFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeActorFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeActorFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeActorFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeActorFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeActorFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeActorFactoryNode(UInterchangeActorFactoryNode&&) = delete; \
	UInterchangeActorFactoryNode(const UInterchangeActorFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeActorFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeActorFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeActorFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeActorFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_11_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeActorFactoryNode;

// ********** End Class UInterchangeActorFactoryNode ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeActorFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
