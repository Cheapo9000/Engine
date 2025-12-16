// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGroomFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeGroomFactoryNode_generated_h
#error "InterchangeGroomFactoryNode.generated.h already included, missing '#pragma once' in InterchangeGroomFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeGroomFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHairGroupsInterpolation;

// ********** Begin Class UInterchangeGroomFactoryNode *********************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomGroupInterpolationSettings); \
	DECLARE_FUNCTION(execGetCustomGroupInterpolationSettings);


struct Z_Construct_UClass_UInterchangeGroomFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeGroomFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGroomFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeGroomFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeGroomFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGroomFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeGroomFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGroomFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeGroomFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGroomFactoryNode(UInterchangeGroomFactoryNode&&) = delete; \
	UInterchangeGroomFactoryNode(const UInterchangeGroomFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeGroomFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGroomFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeGroomFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeGroomFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomFactoryNode_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomFactoryNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGroomFactoryNode;

// ********** End Class UInterchangeGroomFactoryNode ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGroomFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
