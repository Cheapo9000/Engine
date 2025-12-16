// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/DataInterfaces/PCGInstanceDataInterface.h"

#ifdef PCG_PCGInstanceDataInterface_generated_h
#error "PCGInstanceDataInterface.generated.h already included, missing '#pragma once' in PCGInstanceDataInterface.h"
#endif
#define PCG_PCGInstanceDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGInstanceDataInterface ************************************************
struct Z_Construct_UClass_UPCGInstanceDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGInstanceDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGInstanceDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGInstanceDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGInstanceDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGInstanceDataInterface, UPCGComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGInstanceDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGInstanceDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGInstanceDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGInstanceDataInterface(UPCGInstanceDataInterface&&) = delete; \
	UPCGInstanceDataInterface(const UPCGInstanceDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGInstanceDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGInstanceDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGInstanceDataInterface) \
	NO_API virtual ~UPCGInstanceDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGInstanceDataInterface;

// ********** End Class UPCGInstanceDataInterface **************************************************

// ********** Begin Class UPCGInstanceDataProvider *************************************************
struct Z_Construct_UClass_UPCGInstanceDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGInstanceDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGInstanceDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGInstanceDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGInstanceDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGInstanceDataProvider, UPCGComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGInstanceDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGInstanceDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGInstanceDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGInstanceDataProvider(UPCGInstanceDataProvider&&) = delete; \
	UPCGInstanceDataProvider(const UPCGInstanceDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGInstanceDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGInstanceDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGInstanceDataProvider) \
	NO_API virtual ~UPCGInstanceDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_46_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGInstanceDataProvider;

// ********** End Class UPCGInstanceDataProvider ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGInstanceDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
