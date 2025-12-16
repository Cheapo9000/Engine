// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/OptimusDataInterfaceSkinnedMeshRead.h"

#ifdef OPTIMUSCORE_OptimusDataInterfaceSkinnedMeshRead_generated_h
#error "OptimusDataInterfaceSkinnedMeshRead.generated.h already included, missing '#pragma once' in OptimusDataInterfaceSkinnedMeshRead.h"
#endif
#define OPTIMUSCORE_OptimusDataInterfaceSkinnedMeshRead_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusSkinnedMeshReadDataInterface *************************************
struct Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSkinnedMeshReadDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSkinnedMeshReadDataInterface, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusSkinnedMeshReadDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSkinnedMeshReadDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusSkinnedMeshReadDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSkinnedMeshReadDataInterface(UOptimusSkinnedMeshReadDataInterface&&) = delete; \
	UOptimusSkinnedMeshReadDataInterface(const UOptimusSkinnedMeshReadDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusSkinnedMeshReadDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSkinnedMeshReadDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSkinnedMeshReadDataInterface) \
	OPTIMUSCORE_API virtual ~UOptimusSkinnedMeshReadDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_22_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSkinnedMeshReadDataInterface;

// ********** End Class UOptimusSkinnedMeshReadDataInterface ***************************************

// ********** Begin Class UOptimusSkinnedMeshReadDataProvider **************************************
struct Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSkinnedMeshReadDataProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSkinnedMeshReadDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusSkinnedMeshReadDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSkinnedMeshReadDataProvider) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusSkinnedMeshReadDataProvider*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSkinnedMeshReadDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSkinnedMeshReadDataProvider(UOptimusSkinnedMeshReadDataProvider&&) = delete; \
	UOptimusSkinnedMeshReadDataProvider(const UOptimusSkinnedMeshReadDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSkinnedMeshReadDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSkinnedMeshReadDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSkinnedMeshReadDataProvider) \
	NO_API virtual ~UOptimusSkinnedMeshReadDataProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_55_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSkinnedMeshReadDataProvider;

// ********** End Class UOptimusSkinnedMeshReadDataProvider ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshRead_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
