// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/DataInterfaces/PCGCustomKernelDataInterface.h"

#ifdef PCG_PCGCustomKernelDataInterface_generated_h
#error "PCGCustomKernelDataInterface.generated.h already included, missing '#pragma once' in PCGCustomKernelDataInterface.h"
#endif
#define PCG_PCGCustomKernelDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGCustomKernelDataInterface ********************************************
struct Z_Construct_UClass_UPCGCustomKernelDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCustomKernelDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCustomKernelDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGCustomKernelDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCustomKernelDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCustomKernelDataInterface, UPCGComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCustomKernelDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGCustomKernelDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGCustomKernelDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCustomKernelDataInterface(UPCGCustomKernelDataInterface&&) = delete; \
	UPCGCustomKernelDataInterface(const UPCGCustomKernelDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGCustomKernelDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCustomKernelDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCustomKernelDataInterface) \
	PCG_API virtual ~UPCGCustomKernelDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_17_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCustomKernelDataInterface;

// ********** End Class UPCGCustomKernelDataInterface **********************************************

// ********** Begin Class UPCGCustomComputeKernelDataProvider **************************************
struct Z_Construct_UClass_UPCGCustomComputeKernelDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGCustomComputeKernelDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGCustomComputeKernelDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGCustomComputeKernelDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGCustomComputeKernelDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGCustomComputeKernelDataProvider, UPCGComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGCustomComputeKernelDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGCustomComputeKernelDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGCustomComputeKernelDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGCustomComputeKernelDataProvider(UPCGCustomComputeKernelDataProvider&&) = delete; \
	UPCGCustomComputeKernelDataProvider(const UPCGCustomComputeKernelDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGCustomComputeKernelDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGCustomComputeKernelDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGCustomComputeKernelDataProvider) \
	NO_API virtual ~UPCGCustomComputeKernelDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_52_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGCustomComputeKernelDataProvider;

// ********** End Class UPCGCustomComputeKernelDataProvider ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGCustomKernelDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
