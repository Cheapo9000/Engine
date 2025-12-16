// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/DataInterfaces/PCGDataCollectionDataInterface.h"

#ifdef PCG_PCGDataCollectionDataInterface_generated_h
#error "PCGDataCollectionDataInterface.generated.h already included, missing '#pragma once' in PCGDataCollectionDataInterface.h"
#endif
#define PCG_PCGDataCollectionDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDataCollectionDataInterface ******************************************
struct Z_Construct_UClass_UPCGDataCollectionDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataCollectionDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataCollectionDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGDataCollectionDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataCollectionDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataCollectionDataInterface, UPCGExportableDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataCollectionDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataCollectionDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDataCollectionDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataCollectionDataInterface(UPCGDataCollectionDataInterface&&) = delete; \
	UPCGDataCollectionDataInterface(const UPCGDataCollectionDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDataCollectionDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataCollectionDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataCollectionDataInterface) \
	NO_API virtual ~UPCGDataCollectionDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_25_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataCollectionDataInterface;

// ********** End Class UPCGDataCollectionDataInterface ********************************************

// ********** Begin Class UPCGDataCollectionDataProvider *******************************************
struct Z_Construct_UClass_UPCGDataCollectionDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDataCollectionDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDataCollectionDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGDataCollectionDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDataCollectionDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDataCollectionDataProvider, UPCGExportableDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDataCollectionDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGDataCollectionDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_70_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDataCollectionDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDataCollectionDataProvider(UPCGDataCollectionDataProvider&&) = delete; \
	UPCGDataCollectionDataProvider(const UPCGDataCollectionDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDataCollectionDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDataCollectionDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDataCollectionDataProvider) \
	NO_API virtual ~UPCGDataCollectionDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_67_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDataCollectionDataProvider;

// ********** End Class UPCGDataCollectionDataProvider *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDataCollectionDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
