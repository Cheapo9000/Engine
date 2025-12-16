// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/DataInterfaces/PCGVirtualTextureDataInterface.h"

#ifdef PCG_PCGVirtualTextureDataInterface_generated_h
#error "PCGVirtualTextureDataInterface.generated.h already included, missing '#pragma once' in PCGVirtualTextureDataInterface.h"
#endif
#define PCG_PCGVirtualTextureDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGVirtualTextureDataInterface ******************************************
struct Z_Construct_UClass_UPCGVirtualTextureDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGVirtualTextureDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGVirtualTextureDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGVirtualTextureDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGVirtualTextureDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGVirtualTextureDataInterface, UPCGComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGVirtualTextureDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGVirtualTextureDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGVirtualTextureDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGVirtualTextureDataInterface(UPCGVirtualTextureDataInterface&&) = delete; \
	UPCGVirtualTextureDataInterface(const UPCGVirtualTextureDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGVirtualTextureDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGVirtualTextureDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGVirtualTextureDataInterface) \
	NO_API virtual ~UPCGVirtualTextureDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_30_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGVirtualTextureDataInterface;

// ********** End Class UPCGVirtualTextureDataInterface ********************************************

// ********** Begin Class UPCGVirtualTextureDataProvider *******************************************
struct Z_Construct_UClass_UPCGVirtualTextureDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGVirtualTextureDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGVirtualTextureDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGVirtualTextureDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGVirtualTextureDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGVirtualTextureDataProvider, UPCGComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGVirtualTextureDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGVirtualTextureDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGVirtualTextureDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGVirtualTextureDataProvider(UPCGVirtualTextureDataProvider&&) = delete; \
	UPCGVirtualTextureDataProvider(const UPCGVirtualTextureDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGVirtualTextureDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGVirtualTextureDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGVirtualTextureDataProvider) \
	NO_API virtual ~UPCGVirtualTextureDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_53_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_56_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGVirtualTextureDataProvider;

// ********** End Class UPCGVirtualTextureDataProvider *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGVirtualTextureDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
