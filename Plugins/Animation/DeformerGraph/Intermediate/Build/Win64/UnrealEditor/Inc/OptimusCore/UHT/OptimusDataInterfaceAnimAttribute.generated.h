// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/OptimusDataInterfaceAnimAttribute.h"

#ifdef OPTIMUSCORE_OptimusDataInterfaceAnimAttribute_generated_h
#error "OptimusDataInterfaceAnimAttribute.generated.h already included, missing '#pragma once' in OptimusDataInterfaceAnimAttribute.h"
#endif
#define OPTIMUSCORE_OptimusDataInterfaceAnimAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusAnimAttributeDescription **********************************
struct Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_24_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusAnimAttributeDescription_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusAnimAttributeDescription;
// ********** End ScriptStruct FOptimusAnimAttributeDescription ************************************

// ********** Begin ScriptStruct FOptimusAnimAttributeArray ****************************************
struct Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusAnimAttributeArray_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusAnimAttributeArray;
// ********** End ScriptStruct FOptimusAnimAttributeArray ******************************************

// ********** Begin Class UOptimusAnimAttributeDataInterface ***************************************
struct Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAnimAttributeDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusAnimAttributeDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusAnimAttributeDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusAnimAttributeDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusAnimAttributeDataInterface, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusAnimAttributeDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusAnimAttributeDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_115_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusAnimAttributeDataInterface(UOptimusAnimAttributeDataInterface&&) = delete; \
	UOptimusAnimAttributeDataInterface(const UOptimusAnimAttributeDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusAnimAttributeDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusAnimAttributeDataInterface); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusAnimAttributeDataInterface) \
	OPTIMUSCORE_API virtual ~UOptimusAnimAttributeDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_112_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusAnimAttributeDataInterface;

// ********** End Class UOptimusAnimAttributeDataInterface *****************************************

// ********** Begin Class UOptimusAnimAttributeDataProvider ****************************************
struct Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAnimAttributeDataProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_196_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusAnimAttributeDataProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusAnimAttributeDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusAnimAttributeDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusAnimAttributeDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusAnimAttributeDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusAnimAttributeDataProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_196_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusAnimAttributeDataProvider(UOptimusAnimAttributeDataProvider&&) = delete; \
	UOptimusAnimAttributeDataProvider(const UOptimusAnimAttributeDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusAnimAttributeDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusAnimAttributeDataProvider); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusAnimAttributeDataProvider) \
	NO_API virtual ~UOptimusAnimAttributeDataProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_193_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_196_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_196_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h_196_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusAnimAttributeDataProvider;

// ********** End Class UOptimusAnimAttributeDataProvider ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAnimAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
