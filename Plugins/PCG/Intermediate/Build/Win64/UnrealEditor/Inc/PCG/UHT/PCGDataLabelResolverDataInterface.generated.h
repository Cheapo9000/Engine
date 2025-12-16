// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/DataInterfaces/PCGDataLabelResolverDataInterface.h"

#ifdef PCG_PCGDataLabelResolverDataInterface_generated_h
#error "PCGDataLabelResolverDataInterface.generated.h already included, missing '#pragma once' in PCGDataLabelResolverDataInterface.h"
#endif
#define PCG_PCGDataLabelResolverDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDataLabelResolverDataInterface ***************************************
struct Z_Construct_UClass_UPCGDataLabelResolverDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataLabelResolverDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataLabelResolverDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGDataLabelResolverDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataLabelResolverDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataLabelResolverDataInterface, UPCGComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataLabelResolverDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataLabelResolverDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDataLabelResolverDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataLabelResolverDataInterface(UPCGDataLabelResolverDataInterface&&) = delete; \
	UPCGDataLabelResolverDataInterface(const UPCGDataLabelResolverDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDataLabelResolverDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataLabelResolverDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataLabelResolverDataInterface) \
	PCG_API virtual ~UPCGDataLabelResolverDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_17_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataLabelResolverDataInterface;

// ********** End Class UPCGDataLabelResolverDataInterface *****************************************

// ********** Begin Class UPCGDataLabelResolverDataProvider ****************************************
struct Z_Construct_UClass_UPCGDataLabelResolverDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataLabelResolverDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataLabelResolverDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGDataLabelResolverDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataLabelResolverDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataLabelResolverDataProvider, UPCGComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataLabelResolverDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataLabelResolverDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDataLabelResolverDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataLabelResolverDataProvider(UPCGDataLabelResolverDataProvider&&) = delete; \
	UPCGDataLabelResolverDataProvider(const UPCGDataLabelResolverDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDataLabelResolverDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataLabelResolverDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataLabelResolverDataProvider) \
	NO_API virtual ~UPCGDataLabelResolverDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_46_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataLabelResolverDataProvider;

// ********** End Class UPCGDataLabelResolverDataProvider ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataLabelResolverDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
