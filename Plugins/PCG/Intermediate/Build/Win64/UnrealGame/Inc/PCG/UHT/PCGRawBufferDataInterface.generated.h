// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/DataInterfaces/PCGRawBufferDataInterface.h"

#ifdef PCG_PCGRawBufferDataInterface_generated_h
#error "PCGRawBufferDataInterface.generated.h already included, missing '#pragma once' in PCGRawBufferDataInterface.h"
#endif
#define PCG_PCGRawBufferDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGRawBufferDataInterface ***********************************************
struct Z_Construct_UClass_UPCGRawBufferDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGRawBufferDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGRawBufferDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGRawBufferDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGRawBufferDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGRawBufferDataInterface, UPCGExportableDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGRawBufferDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGRawBufferDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGRawBufferDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGRawBufferDataInterface(UPCGRawBufferDataInterface&&) = delete; \
	UPCGRawBufferDataInterface(const UPCGRawBufferDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGRawBufferDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGRawBufferDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGRawBufferDataInterface) \
	NO_API virtual ~UPCGRawBufferDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_15_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGRawBufferDataInterface;

// ********** End Class UPCGRawBufferDataInterface *************************************************

// ********** Begin Class UPCGRawBufferDataProvider ************************************************
struct Z_Construct_UClass_UPCGRawBufferDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGRawBufferDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_45_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGRawBufferDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGRawBufferDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGRawBufferDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGRawBufferDataProvider, UPCGExportableDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGRawBufferDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGRawBufferDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_45_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGRawBufferDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGRawBufferDataProvider(UPCGRawBufferDataProvider&&) = delete; \
	UPCGRawBufferDataProvider(const UPCGRawBufferDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGRawBufferDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGRawBufferDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGRawBufferDataProvider) \
	NO_API virtual ~UPCGRawBufferDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_42_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_45_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h_45_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGRawBufferDataProvider;

// ********** End Class UPCGRawBufferDataProvider **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGRawBufferDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
