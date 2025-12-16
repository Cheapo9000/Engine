// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/OptimusDataInterfaceCustomComputeKernel.h"

#ifdef OPTIMUSCORE_OptimusDataInterfaceCustomComputeKernel_generated_h
#error "OptimusDataInterfaceCustomComputeKernel.generated.h already included, missing '#pragma once' in OptimusDataInterfaceCustomComputeKernel.h"
#endif
#define OPTIMUSCORE_OptimusDataInterfaceCustomComputeKernel_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusCustomComputeKernelDataInterface *********************************
struct Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusCustomComputeKernelDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusCustomComputeKernelDataInterface, UComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusCustomComputeKernelDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusCustomComputeKernelDataInterface) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusCustomComputeKernelDataInterface*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusCustomComputeKernelDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusCustomComputeKernelDataInterface(UOptimusCustomComputeKernelDataInterface&&) = delete; \
	UOptimusCustomComputeKernelDataInterface(const UOptimusCustomComputeKernelDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusCustomComputeKernelDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusCustomComputeKernelDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusCustomComputeKernelDataInterface) \
	OPTIMUSCORE_API virtual ~UOptimusCustomComputeKernelDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_22_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusCustomComputeKernelDataInterface;

// ********** End Class UOptimusCustomComputeKernelDataInterface ***********************************

// ********** Begin Class UOptimusCustomComputeKernelDataProvider **********************************
struct Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusCustomComputeKernelDataProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusCustomComputeKernelDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusCustomComputeKernelDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusCustomComputeKernelDataProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusCustomComputeKernelDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusCustomComputeKernelDataProvider(UOptimusCustomComputeKernelDataProvider&&) = delete; \
	UOptimusCustomComputeKernelDataProvider(const UOptimusCustomComputeKernelDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusCustomComputeKernelDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusCustomComputeKernelDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusCustomComputeKernelDataProvider) \
	NO_API virtual ~UOptimusCustomComputeKernelDataProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_70_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusCustomComputeKernelDataProvider;

// ********** End Class UOptimusCustomComputeKernelDataProvider ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceCustomComputeKernel_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
