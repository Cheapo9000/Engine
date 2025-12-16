// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/OptimusDataInterfaceSkeleton.h"

#ifdef OPTIMUSCORE_OptimusDataInterfaceSkeleton_generated_h
#error "OptimusDataInterfaceSkeleton.generated.h already included, missing '#pragma once' in OptimusDataInterfaceSkeleton.h"
#endif
#define OPTIMUSCORE_OptimusDataInterfaceSkeleton_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusSkeletonDataInterface ********************************************
struct Z_Construct_UClass_UOptimusSkeletonDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkeletonDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSkeletonDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusSkeletonDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusSkeletonDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSkeletonDataInterface, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusSkeletonDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSkeletonDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusSkeletonDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSkeletonDataInterface(UOptimusSkeletonDataInterface&&) = delete; \
	UOptimusSkeletonDataInterface(const UOptimusSkeletonDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusSkeletonDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSkeletonDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSkeletonDataInterface) \
	OPTIMUSCORE_API virtual ~UOptimusSkeletonDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_17_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSkeletonDataInterface;

// ********** End Class UOptimusSkeletonDataInterface **********************************************

// ********** Begin Class UOptimusSkeletonDataProvider *********************************************
struct Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkeletonDataProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSkeletonDataProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusSkeletonDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusSkeletonDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSkeletonDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusSkeletonDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSkeletonDataProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSkeletonDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSkeletonDataProvider(UOptimusSkeletonDataProvider&&) = delete; \
	UOptimusSkeletonDataProvider(const UOptimusSkeletonDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSkeletonDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSkeletonDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSkeletonDataProvider) \
	NO_API virtual ~UOptimusSkeletonDataProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_47_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSkeletonDataProvider;

// ********** End Class UOptimusSkeletonDataProvider ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkeleton_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
