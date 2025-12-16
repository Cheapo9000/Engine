// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeLightNode.h"

#ifdef INTERCHANGENODES_InterchangeLightNode_generated_h
#error "InterchangeLightNode.generated.h already included, missing '#pragma once' in InterchangeLightNode.h"
#endif
#define INTERCHANGENODES_InterchangeLightNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeLightUnits : uint8;
enum class EInterchangeSkyLightSourceType : uint8;
struct FLinearColor;

// ********** Begin Class UInterchangeBaseLightNode ************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomUseTemperature); \
	DECLARE_FUNCTION(execGetCustomUseTemperature); \
	DECLARE_FUNCTION(execSetCustomTemperature); \
	DECLARE_FUNCTION(execGetCustomTemperature); \
	DECLARE_FUNCTION(execSetCustomIntensity); \
	DECLARE_FUNCTION(execGetCustomIntensity); \
	DECLARE_FUNCTION(execSetCustomLightColor); \
	DECLARE_FUNCTION(execGetCustomLightColor);


struct Z_Construct_UClass_UInterchangeBaseLightNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeBaseLightNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeBaseLightNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeBaseLightNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeBaseLightNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeBaseLightNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeBaseLightNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeBaseLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeBaseLightNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeBaseLightNode(UInterchangeBaseLightNode&&) = delete; \
	UInterchangeBaseLightNode(const UInterchangeBaseLightNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeBaseLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeBaseLightNode) \
	INTERCHANGENODES_API virtual ~UInterchangeBaseLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_30_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeBaseLightNode;

// ********** End Class UInterchangeBaseLightNode **************************************************

// ********** Begin Class UInterchangeLightNode ****************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomRotation); \
	DECLARE_FUNCTION(execGetCustomRotation); \
	DECLARE_FUNCTION(execSetCustomIESBrightnessScale); \
	DECLARE_FUNCTION(execGetCustomIESBrightnessScale); \
	DECLARE_FUNCTION(execSetCustomUseIESBrightness); \
	DECLARE_FUNCTION(execGetCustomUseIESBrightness); \
	DECLARE_FUNCTION(execSetCustomIESTexture); \
	DECLARE_FUNCTION(execGetCustomIESTexture); \
	DECLARE_FUNCTION(execSetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execGetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execSetCustomIntensityUnits); \
	DECLARE_FUNCTION(execGetCustomIntensityUnits);


struct Z_Construct_UClass_UInterchangeLightNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeLightNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLightNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeLightNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeLightNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeLightNode, UInterchangeBaseLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeLightNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeLightNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeLightNode(UInterchangeLightNode&&) = delete; \
	UInterchangeLightNode(const UInterchangeLightNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeLightNode) \
	INTERCHANGENODES_API virtual ~UInterchangeLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_75_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeLightNode;

// ********** End Class UInterchangeLightNode ******************************************************

// ********** Begin Class UInterchangePointLightNode ***********************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execGetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execSetCustomUseInverseSquaredFalloff); \
	DECLARE_FUNCTION(execGetCustomUseInverseSquaredFalloff);


struct Z_Construct_UClass_UInterchangePointLightNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangePointLightNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePointLightNode(); \
	friend struct ::Z_Construct_UClass_UInterchangePointLightNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangePointLightNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangePointLightNode, UInterchangeLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangePointLightNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangePointLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangePointLightNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangePointLightNode(UInterchangePointLightNode&&) = delete; \
	UInterchangePointLightNode(const UInterchangePointLightNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangePointLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePointLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangePointLightNode) \
	INTERCHANGENODES_API virtual ~UInterchangePointLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_131_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_134_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangePointLightNode;

// ********** End Class UInterchangePointLightNode *************************************************

// ********** Begin Class UInterchangeSpotLightNode ************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execGetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execSetCustomInnerConeAngle); \
	DECLARE_FUNCTION(execGetCustomInnerConeAngle);


struct Z_Construct_UClass_UInterchangeSpotLightNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSpotLightNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_160_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSpotLightNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSpotLightNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeSpotLightNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSpotLightNode, UInterchangePointLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeSpotLightNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSpotLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_160_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeSpotLightNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSpotLightNode(UInterchangeSpotLightNode&&) = delete; \
	UInterchangeSpotLightNode(const UInterchangeSpotLightNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeSpotLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSpotLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSpotLightNode) \
	INTERCHANGENODES_API virtual ~UInterchangeSpotLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_157_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_160_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_160_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_160_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_160_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSpotLightNode;

// ********** End Class UInterchangeSpotLightNode **************************************************

// ********** Begin Class UInterchangeRectLightNode ************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomSourceHeight); \
	DECLARE_FUNCTION(execGetCustomSourceHeight); \
	DECLARE_FUNCTION(execSetCustomSourceWidth); \
	DECLARE_FUNCTION(execGetCustomSourceWidth);


struct Z_Construct_UClass_UInterchangeRectLightNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeRectLightNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeRectLightNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeRectLightNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeRectLightNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeRectLightNode, UInterchangeLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeRectLightNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeRectLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_187_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeRectLightNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeRectLightNode(UInterchangeRectLightNode&&) = delete; \
	UInterchangeRectLightNode(const UInterchangeRectLightNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeRectLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeRectLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeRectLightNode) \
	INTERCHANGENODES_API virtual ~UInterchangeRectLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_184_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_187_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_187_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeRectLightNode;

// ********** End Class UInterchangeRectLightNode **************************************************

// ********** Begin Class UInterchangeDirectionalLightNode *****************************************
struct Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeDirectionalLightNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_213_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDirectionalLightNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeDirectionalLightNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeDirectionalLightNode, UInterchangeBaseLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeDirectionalLightNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeDirectionalLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_213_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeDirectionalLightNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeDirectionalLightNode(UInterchangeDirectionalLightNode&&) = delete; \
	UInterchangeDirectionalLightNode(const UInterchangeDirectionalLightNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeDirectionalLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDirectionalLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDirectionalLightNode) \
	INTERCHANGENODES_API virtual ~UInterchangeDirectionalLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_210_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_213_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_213_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_213_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeDirectionalLightNode;

// ********** End Class UInterchangeDirectionalLightNode *******************************************

// ********** Begin Class UInterchangeSkyLightNode *************************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_223_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomSourceType); \
	DECLARE_FUNCTION(execGetCustomSourceType); \
	DECLARE_FUNCTION(execSetCustomCubemapDependency); \
	DECLARE_FUNCTION(execGetCustomCubemapDependency);


struct Z_Construct_UClass_UInterchangeSkyLightNode_Statics;
INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeSkyLightNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_223_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSkyLightNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSkyLightNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGENODES_API UClass* ::Z_Construct_UClass_UInterchangeSkyLightNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSkyLightNode, UInterchangeBaseLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), Z_Construct_UClass_UInterchangeSkyLightNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSkyLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_223_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGENODES_API UInterchangeSkyLightNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSkyLightNode(UInterchangeSkyLightNode&&) = delete; \
	UInterchangeSkyLightNode(const UInterchangeSkyLightNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGENODES_API, UInterchangeSkyLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkyLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSkyLightNode) \
	INTERCHANGENODES_API virtual ~UInterchangeSkyLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_220_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_223_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_223_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_223_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_223_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSkyLightNode;

// ********** End Class UInterchangeSkyLightNode ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h

// ********** Begin Enum EInterchangeLightUnits ****************************************************
#define FOREACH_ENUM_EINTERCHANGELIGHTUNITS(op) \
	op(EInterchangeLightUnits::Unitless) \
	op(EInterchangeLightUnits::Candelas) \
	op(EInterchangeLightUnits::Lumens) \
	op(EInterchangeLightUnits::EV) 

enum class EInterchangeLightUnits : uint8;
template<> struct TIsUEnumClass<EInterchangeLightUnits> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeLightUnits>();
// ********** End Enum EInterchangeLightUnits ******************************************************

// ********** Begin Enum EInterchangeSkyLightSourceType ********************************************
#define FOREACH_ENUM_EINTERCHANGESKYLIGHTSOURCETYPE(op) \
	op(EInterchangeSkyLightSourceType::CapturedScene) \
	op(EInterchangeSkyLightSourceType::SpecifiedCubemap) 

enum class EInterchangeSkyLightSourceType : uint8;
template<> struct TIsUEnumClass<EInterchangeSkyLightSourceType> { enum { Value = true }; };
template<> INTERCHANGENODES_NON_ATTRIBUTED_API UEnum* StaticEnum<EInterchangeSkyLightSourceType>();
// ********** End Enum EInterchangeSkyLightSourceType **********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
