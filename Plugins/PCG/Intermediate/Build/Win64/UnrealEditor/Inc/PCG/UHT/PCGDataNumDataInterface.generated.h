// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/DataInterfaces/BuiltInKernels/PCGDataNumDataInterface.h"

#ifdef PCG_PCGDataNumDataInterface_generated_h
#error "PCGDataNumDataInterface.generated.h already included, missing '#pragma once' in PCGDataNumDataInterface.h"
#endif
#define PCG_PCGDataNumDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDataNumDataInterface *************************************************
struct Z_Construct_UClass_UPCGDataNumDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataNumDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataNumDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGDataNumDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataNumDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataNumDataInterface, UPCGComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataNumDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataNumDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDataNumDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataNumDataInterface(UPCGDataNumDataInterface&&) = delete; \
	UPCGDataNumDataInterface(const UPCGDataNumDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDataNumDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataNumDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataNumDataInterface) \
	NO_API virtual ~UPCGDataNumDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_13_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataNumDataInterface;

// ********** End Class UPCGDataNumDataInterface ***************************************************

// ********** Begin Class UPCGDataNumDataProvider **************************************************
struct Z_Construct_UClass_UPCGDataNumDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataNumDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataNumDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGDataNumDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataNumDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataNumDataProvider, UPCGComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataNumDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataNumDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDataNumDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataNumDataProvider(UPCGDataNumDataProvider&&) = delete; \
	UPCGDataNumDataProvider(const UPCGDataNumDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDataNumDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataNumDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataNumDataProvider) \
	NO_API virtual ~UPCGDataNumDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_28_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataNumDataProvider;

// ********** End Class UPCGDataNumDataProvider ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_BuiltInKernels_PCGDataNumDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
