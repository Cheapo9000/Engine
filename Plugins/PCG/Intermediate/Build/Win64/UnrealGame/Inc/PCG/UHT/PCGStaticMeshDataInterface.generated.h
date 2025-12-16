// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/DataInterfaces/PCGStaticMeshDataInterface.h"

#ifdef PCG_PCGStaticMeshDataInterface_generated_h
#error "PCGStaticMeshDataInterface.generated.h already included, missing '#pragma once' in PCGStaticMeshDataInterface.h"
#endif
#define PCG_PCGStaticMeshDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGStaticMeshDataInterface **********************************************
struct Z_Construct_UClass_UPCGStaticMeshDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGStaticMeshDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGStaticMeshDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGStaticMeshDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGStaticMeshDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGStaticMeshDataInterface, UPCGComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGStaticMeshDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGStaticMeshDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGStaticMeshDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGStaticMeshDataInterface(UPCGStaticMeshDataInterface&&) = delete; \
	UPCGStaticMeshDataInterface(const UPCGStaticMeshDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGStaticMeshDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGStaticMeshDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGStaticMeshDataInterface) \
	NO_API virtual ~UPCGStaticMeshDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_19_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGStaticMeshDataInterface;

// ********** End Class UPCGStaticMeshDataInterface ************************************************

// ********** Begin Class UPCGStaticMeshDataProvider ***********************************************
struct Z_Construct_UClass_UPCGStaticMeshDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGStaticMeshDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGStaticMeshDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGStaticMeshDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGStaticMeshDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGStaticMeshDataProvider, UPCGComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGStaticMeshDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGStaticMeshDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGStaticMeshDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGStaticMeshDataProvider(UPCGStaticMeshDataProvider&&) = delete; \
	UPCGStaticMeshDataProvider(const UPCGStaticMeshDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGStaticMeshDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGStaticMeshDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGStaticMeshDataProvider) \
	NO_API virtual ~UPCGStaticMeshDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_40_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGStaticMeshDataProvider;

// ********** End Class UPCGStaticMeshDataProvider *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGStaticMeshDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
