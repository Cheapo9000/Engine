// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeLightFactoryNode.h"

#ifdef INTERCHANGEFACTORYNODES_InterchangeLightFactoryNode_generated_h
#error "InterchangeLightFactoryNode.generated.h already included, missing '#pragma once' in InterchangeLightFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeLightFactoryNode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeSkyLightSourceType : uint8;
enum class ELightUnits : uint8;
struct FColor;

// ********** Begin Class UInterchangeBaseLightFactoryNode *****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomUseTemperature); \
	DECLARE_FUNCTION(execGetCustomUseTemperature); \
	DECLARE_FUNCTION(execSetCustomTemperature); \
	DECLARE_FUNCTION(execGetCustomTemperature); \
	DECLARE_FUNCTION(execSetCustomIntensity); \
	DECLARE_FUNCTION(execGetCustomIntensity); \
	DECLARE_FUNCTION(execSetCustomLightColor); \
	DECLARE_FUNCTION(execGetCustomLightColor);


struct Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeBaseLightFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeBaseLightFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeBaseLightFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeBaseLightFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeBaseLightFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeBaseLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeBaseLightFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeBaseLightFactoryNode(UInterchangeBaseLightFactoryNode&&) = delete; \
	UInterchangeBaseLightFactoryNode(const UInterchangeBaseLightFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeBaseLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeBaseLightFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeBaseLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeBaseLightFactoryNode;

// ********** End Class UInterchangeBaseLightFactoryNode *******************************************

// ********** Begin Class UInterchangeDirectionalLightFactoryNode **********************************
struct Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDirectionalLightFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeDirectionalLightFactoryNode, UInterchangeBaseLightFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeDirectionalLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeDirectionalLightFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeDirectionalLightFactoryNode(UInterchangeDirectionalLightFactoryNode&&) = delete; \
	UInterchangeDirectionalLightFactoryNode(const UInterchangeDirectionalLightFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeDirectionalLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDirectionalLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDirectionalLightFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeDirectionalLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_55_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeDirectionalLightFactoryNode;

// ********** End Class UInterchangeDirectionalLightFactoryNode ************************************

// ********** Begin Class UInterchangeLightFactoryNode *********************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
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


struct Z_Construct_UClass_UInterchangeLightFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeLightFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLightFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeLightFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeLightFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeLightFactoryNode, UInterchangeBaseLightFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeLightFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeLightFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeLightFactoryNode(UInterchangeLightFactoryNode&&) = delete; \
	UInterchangeLightFactoryNode(const UInterchangeLightFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeLightFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_61_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeLightFactoryNode;

// ********** End Class UInterchangeLightFactoryNode ***********************************************

// ********** Begin Class UInterchangeRectLightFactoryNode *****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomSourceHeight); \
	DECLARE_FUNCTION(execGetCustomSourceHeight); \
	DECLARE_FUNCTION(execSetCustomSourceWidth); \
	DECLARE_FUNCTION(execGetCustomSourceWidth);


struct Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeRectLightFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_120_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeRectLightFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeRectLightFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeRectLightFactoryNode, UInterchangeLightFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeRectLightFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeRectLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_120_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeRectLightFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeRectLightFactoryNode(UInterchangeRectLightFactoryNode&&) = delete; \
	UInterchangeRectLightFactoryNode(const UInterchangeRectLightFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeRectLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeRectLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeRectLightFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeRectLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_117_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_120_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_120_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_120_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_120_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeRectLightFactoryNode;

// ********** End Class UInterchangeRectLightFactoryNode *******************************************

// ********** Begin Class UInterchangePointLightFactoryNode ****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execGetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execSetCustomUseInverseSquaredFalloff); \
	DECLARE_FUNCTION(execGetCustomUseInverseSquaredFalloff);


struct Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangePointLightFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePointLightFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangePointLightFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangePointLightFactoryNode, UInterchangeLightFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangePointLightFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangePointLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangePointLightFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangePointLightFactoryNode(UInterchangePointLightFactoryNode&&) = delete; \
	UInterchangePointLightFactoryNode(const UInterchangePointLightFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangePointLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePointLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangePointLightFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangePointLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_145_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangePointLightFactoryNode;

// ********** End Class UInterchangePointLightFactoryNode ******************************************

// ********** Begin Class UInterchangeSpotLightFactoryNode *****************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execGetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execSetCustomInnerConeAngle); \
	DECLARE_FUNCTION(execGetCustomInnerConeAngle);


struct Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSpotLightFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSpotLightFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeSpotLightFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSpotLightFactoryNode, UInterchangePointLightFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeSpotLightFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSpotLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeSpotLightFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSpotLightFactoryNode(UInterchangeSpotLightFactoryNode&&) = delete; \
	UInterchangeSpotLightFactoryNode(const UInterchangeSpotLightFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeSpotLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSpotLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSpotLightFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeSpotLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_170_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_173_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSpotLightFactoryNode;

// ********** End Class UInterchangeSpotLightFactoryNode *******************************************

// ********** Begin Class UInterchangeSkyLightFactoryNode ******************************************
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomSourceType); \
	DECLARE_FUNCTION(execGetCustomSourceType); \
	DECLARE_FUNCTION(execSetCustomCubemapDependency); \
	DECLARE_FUNCTION(execGetCustomCubemapDependency);


struct Z_Construct_UClass_UInterchangeSkyLightFactoryNode_Statics;
INTERCHANGEFACTORYNODES_API UClass* Z_Construct_UClass_UInterchangeSkyLightFactoryNode_NoRegister();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_200_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSkyLightFactoryNode(); \
	friend struct ::Z_Construct_UClass_UInterchangeSkyLightFactoryNode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERCHANGEFACTORYNODES_API UClass* ::Z_Construct_UClass_UInterchangeSkyLightFactoryNode_NoRegister(); \
public: \
	DECLARE_CLASS2(UInterchangeSkyLightFactoryNode, UInterchangeBaseLightFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), Z_Construct_UClass_UInterchangeSkyLightFactoryNode_NoRegister) \
	DECLARE_SERIALIZER(UInterchangeSkyLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_200_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEFACTORYNODES_API UInterchangeSkyLightFactoryNode(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInterchangeSkyLightFactoryNode(UInterchangeSkyLightFactoryNode&&) = delete; \
	UInterchangeSkyLightFactoryNode(const UInterchangeSkyLightFactoryNode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEFACTORYNODES_API, UInterchangeSkyLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkyLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSkyLightFactoryNode) \
	INTERCHANGEFACTORYNODES_API virtual ~UInterchangeSkyLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_197_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_200_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_200_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInterchangeSkyLightFactoryNode;

// ********** End Class UInterchangeSkyLightFactoryNode ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
