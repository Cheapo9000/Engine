// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Compute/DataInterfaces/PCGLandscapeDataInterface.h"

#ifdef PCG_PCGLandscapeDataInterface_generated_h
#error "PCGLandscapeDataInterface.generated.h already included, missing '#pragma once' in PCGLandscapeDataInterface.h"
#endif
#define PCG_PCGLandscapeDataInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPCGLandscapeDataInterface ***********************************************
struct Z_Construct_UClass_UPCGLandscapeDataInterface_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGLandscapeDataInterface_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLandscapeDataInterface(); \
	friend struct ::Z_Construct_UClass_UPCGLandscapeDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGLandscapeDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGLandscapeDataInterface, UPCGComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGLandscapeDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UPCGLandscapeDataInterface)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGLandscapeDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGLandscapeDataInterface(UPCGLandscapeDataInterface&&) = delete; \
	UPCGLandscapeDataInterface(const UPCGLandscapeDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGLandscapeDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLandscapeDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGLandscapeDataInterface) \
	NO_API virtual ~UPCGLandscapeDataInterface();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_45_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGLandscapeDataInterface;

// ********** End Class UPCGLandscapeDataInterface *************************************************

// ********** Begin Class UPCGLandscapeDataProvider ************************************************
struct Z_Construct_UClass_UPCGLandscapeDataProvider_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGLandscapeDataProvider_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGLandscapeDataProvider(); \
	friend struct ::Z_Construct_UClass_UPCGLandscapeDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGLandscapeDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGLandscapeDataProvider, UPCGComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGLandscapeDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UPCGLandscapeDataProvider)


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGLandscapeDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGLandscapeDataProvider(UPCGLandscapeDataProvider&&) = delete; \
	UPCGLandscapeDataProvider(const UPCGLandscapeDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGLandscapeDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGLandscapeDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGLandscapeDataProvider) \
	NO_API virtual ~UPCGLandscapeDataProvider();


#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_66_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_69_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h_69_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGLandscapeDataProvider;

// ********** End Class UPCGLandscapeDataProvider **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Private_Compute_DataInterfaces_PCGLandscapeDataInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
