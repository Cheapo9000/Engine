// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMeshFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeMeshFactoryNode_generated_h
#error "InterchangeMeshFactoryNode.generated.h already included, missing '#pragma once' in InterchangeMeshFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeMeshFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;

// ********** Begin Class UInterchangeMeshFactoryNode **********************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddPayloadKeyDoubleAttribute); \
	DECLARE_FUNCTION(execGetPayloadKeyDoubleAttribute); \
	DECLARE_FUNCTION(execAddPayloadKeyBooleanAttribute); \
	DECLARE_FUNCTION(execGetPayloadKeyBooleanAttribute); \
	DECLARE_FUNCTION(execAddPayloadKeyInt32Attribute); \
	DECLARE_FUNCTION(execGetPayloadKeyInt32Attribute); \
	DECLARE_FUNCTION(execAddPayloadKeyFloatAttribute); \
	DECLARE_FUNCTION(execGetPayloadKeyFloatAttribute); \
	DECLARE_FUNCTION(execAddPayloadKeyStringAttribute); \
	DECLARE_FUNCTION(execGetPayloadKeyStringAttribute); \
	DECLARE_FUNCTION(execSetCustomRemoveDegenerates); \
	DECLARE_FUNCTION(execGetCustomRemoveDegenerates); \
	DECLARE_FUNCTION(execSetCustomUseBackwardsCompatibleF16TruncUVs); \
	DECLARE_FUNCTION(execGetCustomUseBackwardsCompatibleF16TruncUVs); \
	DECLARE_FUNCTION(execSetCustomUseFullPrecisionUVs); \
	DECLARE_FUNCTION(execGetCustomUseFullPrecisionUVs); \
	DECLARE_FUNCTION(execSetCustomUseHighPrecisionTangentBasis); \
	DECLARE_FUNCTION(execGetCustomUseHighPrecisionTangentBasis); \
	DECLARE_FUNCTION(execSetCustomComputeWeightedNormals); \
	DECLARE_FUNCTION(execGetCustomComputeWeightedNormals); \
	DECLARE_FUNCTION(execSetCustomUseMikkTSpace); \
	DECLARE_FUNCTION(execGetCustomUseMikkTSpace); \
	DECLARE_FUNCTION(execSetCustomRecomputeTangents); \
	DECLARE_FUNCTION(execGetCustomRecomputeTangents); \
	DECLARE_FUNCTION(execSetCustomRecomputeNormals); \
	DECLARE_FUNCTION(execGetCustomRecomputeNormals); \
	DECLARE_FUNCTION(execSetCustomLODGroup); \
	DECLARE_FUNCTION(execGetCustomLODGroup); \
	DECLARE_FUNCTION(execResetAssemblyDependencies); \
	DECLARE_FUNCTION(execRemoveAssemblyPartDependencyUid); \
	DECLARE_FUNCTION(execSetAssemblyPartDependencyUid); \
	DECLARE_FUNCTION(execGetAssemblyPartDependencies); \
	DECLARE_FUNCTION(execGetAssemblyPartDependenciesCount); \
	DECLARE_FUNCTION(execResetSlotMaterialDependencies); \
	DECLARE_FUNCTION(execRemoveSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execSetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencies); \
	DECLARE_FUNCTION(execSetCustomImportSockets); \
	DECLARE_FUNCTION(execGetCustomImportSockets); \
	DECLARE_FUNCTION(execSetCustomKeepSectionsSeparate); \
	DECLARE_FUNCTION(execGetCustomKeepSectionsSeparate); \
	DECLARE_FUNCTION(execSetCustomVertexColorOverride); \
	DECLARE_FUNCTION(execGetCustomVertexColorOverride); \
	DECLARE_FUNCTION(execSetCustomVertexColorIgnore); \
	DECLARE_FUNCTION(execGetCustomVertexColorIgnore); \
	DECLARE_FUNCTION(execSetCustomVertexColorReplace); \
	DECLARE_FUNCTION(execGetCustomVertexColorReplace); \
	DECLARE_FUNCTION(execRemoveLodDataUniqueId); \
	DECLARE_FUNCTION(execAddLodDataUniqueId); \
	DECLARE_FUNCTION(execGetLodDataUniqueIds); \
	DECLARE_FUNCTION(execGetLodDataCount);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_27_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeMeshFactoryNode, INTERCHANGEFACTORYNODES_API)


struct Z_Construct_UClass_UInterchangeMeshFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMeshFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMeshFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMeshFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeMeshFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMeshFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeMeshFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMeshFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_27_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_27_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMeshFactoryNode(UInterchangeMeshFactoryNode&&) = delete; \
	UInterchangeMeshFactoryNode(const UInterchangeMeshFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeMeshFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMeshFactoryNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMeshFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeMeshFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_24_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMeshFactoryNode;

// ********** End Class UInterchangeMeshFactoryNode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMeshFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
