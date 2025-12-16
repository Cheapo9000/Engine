// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeGeometryCacheFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeGeometryCacheFactoryNode_generated_h
#error "InterchangeGeometryCacheFactoryNode.generated.h already included, missing '#pragma once' in InterchangeGeometryCacheFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeGeometryCacheFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;
enum class EInterchangeMotionVectorsHandling : uint8;

// ********** Begin Class UInterchangeGeometryCacheFactoryNode *************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGeometryCacheFactoryNode_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAnimationPayloadKeyForSceneNodeUid); \
	DECLARE_FUNCTION(execGetSceneNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execSetCustomOptimizeIndexBuffers); \
	DECLARE_FUNCTION(execGetCustomOptimizeIndexBuffers); \
	DECLARE_FUNCTION(execSetCustomStoreImportedVertexNumbers); \
	DECLARE_FUNCTION(execGetCustomStoreImportedVertexNumbers); \
	DECLARE_FUNCTION(execSetCustomApplyConstantTopologyOptimization); \
	DECLARE_FUNCTION(execGetCustomApplyConstantTopologyOptimization); \
	DECLARE_FUNCTION(execSetCustomMotionVectorsImport); \
	DECLARE_FUNCTION(execGetCustomMotionVectorsImport); \
	DECLARE_FUNCTION(execSetCustomEndFrame); \
	DECLARE_FUNCTION(execGetCustomEndFrame); \
	DECLARE_FUNCTION(execSetCustomStartFrame); \
	DECLARE_FUNCTION(execGetCustomStartFrame); \
	DECLARE_FUNCTION(execSetCustomNumBitsForUVs); \
	DECLARE_FUNCTION(execGetCustomNumBitsForUVs); \
	DECLARE_FUNCTION(execSetCustomPositionPrecision); \
	DECLARE_FUNCTION(execGetCustomPositionPrecision); \
	DECLARE_FUNCTION(execSetCustomFlattenTracks); \
	DECLARE_FUNCTION(execGetCustomFlattenTracks); \
	DECLARE_FUNCTION(execInitializeGeometryCacheNode);


struct Z_Construct_UClass_UInterchangeGeometryCacheFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeGeometryCacheFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGeometryCacheFactoryNode_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeGeometryCacheFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeGeometryCacheFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeGeometryCacheFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeGeometryCacheFactoryNode, UInterchangeMeshFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeGeometryCacheFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeGeometryCacheFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGeometryCacheFactoryNode_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeGeometryCacheFactoryNode(UInterchangeGeometryCacheFactoryNode&&) = delete; \
	UInterchangeGeometryCacheFactoryNode(const UInterchangeGeometryCacheFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeGeometryCacheFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeGeometryCacheFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeGeometryCacheFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeGeometryCacheFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGeometryCacheFactoryNode_h_23_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGeometryCacheFactoryNode_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGeometryCacheFactoryNode_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGeometryCacheFactoryNode_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGeometryCacheFactoryNode_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeGeometryCacheFactoryNode;

// ********** End Class UInterchangeGeometryCacheFactoryNode ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeGeometryCacheFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
