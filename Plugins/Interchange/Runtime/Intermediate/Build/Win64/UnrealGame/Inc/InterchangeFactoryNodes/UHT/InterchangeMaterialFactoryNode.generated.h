// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMaterialFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeMaterialFactoryNode_generated_h
#error "InterchangeMaterialFactoryNode.generated.h already included, missing '#pragma once' in InterchangeMaterialFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeMaterialFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInterchangeBaseMaterialFactoryNode **************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomIsMaterialImportEnabled); \
	DECLARE_FUNCTION(execGetCustomIsMaterialImportEnabled);


struct Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeBaseMaterialFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeBaseMaterialFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeBaseMaterialFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeBaseMaterialFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeBaseMaterialFactoryNode(UInterchangeBaseMaterialFactoryNode&&) = delete; \
	UInterchangeBaseMaterialFactoryNode(const UInterchangeBaseMaterialFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeBaseMaterialFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseMaterialFactoryNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInterchangeBaseMaterialFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeBaseMaterialFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_16_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeBaseMaterialFactoryNode;

// ********** End Class UInterchangeBaseMaterialFactoryNode ****************************************

// ********** Begin Class UInterchangeMaterialFactoryNode ******************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomDisplacementCenter); \
	DECLARE_FUNCTION(execGetCustomDisplacementCenter); \
	DECLARE_FUNCTION(execSetCustomScreenSpaceReflections); \
	DECLARE_FUNCTION(execGetCustomScreenSpaceReflections); \
	DECLARE_FUNCTION(execSetCustomRefractionMethod); \
	DECLARE_FUNCTION(execGetCustomRefractionMethod); \
	DECLARE_FUNCTION(execSetCustomOpacityMaskClipValue); \
	DECLARE_FUNCTION(execGetCustomOpacityMaskClipValue); \
	DECLARE_FUNCTION(execSetCustomTwoSided); \
	DECLARE_FUNCTION(execGetCustomTwoSided); \
	DECLARE_FUNCTION(execSetCustomBlendMode); \
	DECLARE_FUNCTION(execGetCustomBlendMode); \
	DECLARE_FUNCTION(execSetCustomTranslucencyLightingMode); \
	DECLARE_FUNCTION(execGetCustomTranslucencyLightingMode); \
	DECLARE_FUNCTION(execSetCustomShadingModel); \
	DECLARE_FUNCTION(execGetCustomShadingModel); \
	DECLARE_FUNCTION(execConnectOutputToDisplacement); \
	DECLARE_FUNCTION(execConnectToDisplacement); \
	DECLARE_FUNCTION(execGetDisplacementConnection); \
	DECLARE_FUNCTION(execConnectOutputToCloth); \
	DECLARE_FUNCTION(execConnectToCloth); \
	DECLARE_FUNCTION(execGetClothConnection); \
	DECLARE_FUNCTION(execConnectOutputToFuzzColor); \
	DECLARE_FUNCTION(execConnectToFuzzColor); \
	DECLARE_FUNCTION(execGetFuzzColorConnection); \
	DECLARE_FUNCTION(execConnectOutputToSurfaceCoverage); \
	DECLARE_FUNCTION(execConnectToSurfaceCoverage); \
	DECLARE_FUNCTION(execGetSurfaceCoverageConnection); \
	DECLARE_FUNCTION(execConnectOutputToTransmissionColor); \
	DECLARE_FUNCTION(execConnectToTransmissionColor); \
	DECLARE_FUNCTION(execGetTransmissionColorConnection); \
	DECLARE_FUNCTION(execConnectOutputToClearCoatNormal); \
	DECLARE_FUNCTION(execConnectToClearCoatNormal); \
	DECLARE_FUNCTION(execGetClearCoatNormalConnection); \
	DECLARE_FUNCTION(execConnectOutputToClearCoatRoughness); \
	DECLARE_FUNCTION(execConnectToClearCoatRoughness); \
	DECLARE_FUNCTION(execGetClearCoatRoughnessConnection); \
	DECLARE_FUNCTION(execConnectOutputToClearCoat); \
	DECLARE_FUNCTION(execConnectToClearCoat); \
	DECLARE_FUNCTION(execGetClearCoatConnection); \
	DECLARE_FUNCTION(execConnectOutputToRefraction); \
	DECLARE_FUNCTION(execConnectToRefraction); \
	DECLARE_FUNCTION(execGetRefractionConnection); \
	DECLARE_FUNCTION(execConnectOutputToOcclusion); \
	DECLARE_FUNCTION(execConnectToOcclusion); \
	DECLARE_FUNCTION(execGetOcclusionConnection); \
	DECLARE_FUNCTION(execConnectOutputToOpacity); \
	DECLARE_FUNCTION(execConnectToOpacity); \
	DECLARE_FUNCTION(execGetOpacityConnection); \
	DECLARE_FUNCTION(execConnectOutputToSubsurface); \
	DECLARE_FUNCTION(execConnectToSubsurface); \
	DECLARE_FUNCTION(execGetSubsurfaceConnection); \
	DECLARE_FUNCTION(execConnectOutputToTangent); \
	DECLARE_FUNCTION(execConnectToTangent); \
	DECLARE_FUNCTION(execGetTangentConnection); \
	DECLARE_FUNCTION(execConnectOutputToNormal); \
	DECLARE_FUNCTION(execConnectToNormal); \
	DECLARE_FUNCTION(execGetNormalConnection); \
	DECLARE_FUNCTION(execConnectOutputToEmissiveColor); \
	DECLARE_FUNCTION(execConnectToEmissiveColor); \
	DECLARE_FUNCTION(execGetEmissiveColorConnection); \
	DECLARE_FUNCTION(execConnectOutputToAnisotropy); \
	DECLARE_FUNCTION(execConnectToAnisotropy); \
	DECLARE_FUNCTION(execGetAnisotropyConnection); \
	DECLARE_FUNCTION(execConnectOutputToRoughness); \
	DECLARE_FUNCTION(execConnectToRoughness); \
	DECLARE_FUNCTION(execGetRoughnessConnection); \
	DECLARE_FUNCTION(execConnectOutputToSpecular); \
	DECLARE_FUNCTION(execConnectToSpecular); \
	DECLARE_FUNCTION(execGetSpecularConnection); \
	DECLARE_FUNCTION(execConnectOutputToMetallic); \
	DECLARE_FUNCTION(execConnectToMetallic); \
	DECLARE_FUNCTION(execGetMetallicConnection); \
	DECLARE_FUNCTION(execConnectOutputToBaseColor); \
	DECLARE_FUNCTION(execConnectToBaseColor); \
	DECLARE_FUNCTION(execGetBaseColorConnection);


struct Z_Construct_UClass_UInterchangeMaterialFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMaterialFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeMaterialFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMaterialFactoryNode, UInterchangeBaseMaterialFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeMaterialFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMaterialFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeMaterialFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMaterialFactoryNode(UInterchangeMaterialFactoryNode&&) = delete; \
	UInterchangeMaterialFactoryNode(const UInterchangeMaterialFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeMaterialFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeMaterialFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_34_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_37_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMaterialFactoryNode;

// ********** End Class UInterchangeMaterialFactoryNode ********************************************

// ********** Begin Class UInterchangeMaterialExpressionFactoryNode ********************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_292_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomExpressionClassName); \
	DECLARE_FUNCTION(execGetCustomExpressionClassName);


struct Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_292_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialExpressionFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMaterialExpressionFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMaterialExpressionFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_292_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeMaterialExpressionFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMaterialExpressionFactoryNode(UInterchangeMaterialExpressionFactoryNode&&) = delete; \
	UInterchangeMaterialExpressionFactoryNode(const UInterchangeMaterialExpressionFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeMaterialExpressionFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialExpressionFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialExpressionFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeMaterialExpressionFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_289_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_292_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_292_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_292_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_292_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMaterialExpressionFactoryNode;

// ********** End Class UInterchangeMaterialExpressionFactoryNode **********************************

// ********** Begin Class UInterchangeMaterialInstanceFactoryNode **********************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_312_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomBlendMode); \
	DECLARE_FUNCTION(execGetCustomBlendMode); \
	DECLARE_FUNCTION(execSetCustomParent); \
	DECLARE_FUNCTION(execGetCustomParent); \
	DECLARE_FUNCTION(execSetCustomInstanceClassName); \
	DECLARE_FUNCTION(execGetCustomInstanceClassName);


struct Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_312_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialInstanceFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMaterialInstanceFactoryNode, UInterchangeBaseMaterialFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMaterialInstanceFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_312_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeMaterialInstanceFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMaterialInstanceFactoryNode(UInterchangeMaterialInstanceFactoryNode&&) = delete; \
	UInterchangeMaterialInstanceFactoryNode(const UInterchangeMaterialInstanceFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeMaterialInstanceFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialInstanceFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialInstanceFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeMaterialInstanceFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_309_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_312_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_312_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_312_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_312_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMaterialInstanceFactoryNode;

// ********** End Class UInterchangeMaterialInstanceFactoryNode ************************************

// ********** Begin Class UInterchangeMaterialReferenceFactoryNode *********************************
struct Z_Construct_UClass_UInterchangeMaterialReferenceFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialReferenceFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_354_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialReferenceFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMaterialReferenceFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeMaterialReferenceFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMaterialReferenceFactoryNode, UInterchangeBaseMaterialFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeMaterialReferenceFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMaterialReferenceFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_354_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeMaterialReferenceFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMaterialReferenceFactoryNode(UInterchangeMaterialReferenceFactoryNode&&) = delete; \
	UInterchangeMaterialReferenceFactoryNode(const UInterchangeMaterialReferenceFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeMaterialReferenceFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialReferenceFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialReferenceFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeMaterialReferenceFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_351_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_354_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_354_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_354_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMaterialReferenceFactoryNode;

// ********** End Class UInterchangeMaterialReferenceFactoryNode ***********************************

// ********** Begin Class UInterchangeMaterialFunctionCallExpressionFactoryNode ********************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_364_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomMaterialFunctionDependency); \
	DECLARE_FUNCTION(execGetCustomMaterialFunctionDependency);


struct Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_364_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialFunctionCallExpressionFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMaterialFunctionCallExpressionFactoryNode, UInterchangeMaterialExpressionFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMaterialFunctionCallExpressionFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_364_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeMaterialFunctionCallExpressionFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMaterialFunctionCallExpressionFactoryNode(UInterchangeMaterialFunctionCallExpressionFactoryNode&&) = delete; \
	UInterchangeMaterialFunctionCallExpressionFactoryNode(const UInterchangeMaterialFunctionCallExpressionFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeMaterialFunctionCallExpressionFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialFunctionCallExpressionFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialFunctionCallExpressionFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeMaterialFunctionCallExpressionFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_361_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_364_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_364_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_364_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_364_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMaterialFunctionCallExpressionFactoryNode;

// ********** End Class UInterchangeMaterialFunctionCallExpressionFactoryNode **********************

// ********** Begin Class UInterchangeMaterialFunctionFactoryNode **********************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_390_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputConnection);


struct Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_390_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialFunctionFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeMaterialFunctionFactoryNode, UInterchangeBaseMaterialFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeMaterialFunctionFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_390_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeMaterialFunctionFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeMaterialFunctionFactoryNode(UInterchangeMaterialFunctionFactoryNode&&) = delete; \
	UInterchangeMaterialFunctionFactoryNode(const UInterchangeMaterialFunctionFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeMaterialFunctionFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialFunctionFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialFunctionFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeMaterialFunctionFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_387_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_390_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_390_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_390_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_390_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeMaterialFunctionFactoryNode;

// ********** End Class UInterchangeMaterialFunctionFactoryNode ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
