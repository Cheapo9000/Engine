// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/DataInterfaces/PCGDebugDataInterface.h"

#ifdef PCG_PCGDebugDataInterface_generated_h
#error "PCGDebugDataInterface.generated.h already included, missing '#pragma once' in PCGDebugDataInterface.h"
#endif
#define PCG_PCGDebugDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGDebugDataInterface ***************************************************
struct Z_Construct_UClass_UPCGDebugDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDebugDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDebugDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGDebugDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDebugDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDebugDataInterface, UPCGComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDebugDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGDebugDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PCG_API UPCGDebugDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDebugDataInterface(UPCGDebugDataInterface&&) = delete; \
	UPCGDebugDataInterface(const UPCGDebugDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGDebugDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDebugDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDebugDataInterface) \
	PCG_API virtual ~UPCGDebugDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_16_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDebugDataInterface;

// ********** End Class UPCGDebugDataInterface *****************************************************

// ********** Begin Class UPCGDebugDataProvider ****************************************************
struct Z_Construct_UClass_UPCGDebugDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGDebugDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGDebugDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGDebugDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGDebugDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGDebugDataProvider, UPCGComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGDebugDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGDebugDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGDebugDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGDebugDataProvider(UPCGDebugDataProvider&&) = delete; \
	UPCGDebugDataProvider(const UPCGDebugDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGDebugDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGDebugDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGDebugDataProvider) \
	NO_API virtual ~UPCGDebugDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_40_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGDebugDataProvider;

// ********** End Class UPCGDebugDataProvider ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGDebugDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
