// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/OptimusDataInterfaceAdvancedSkeleton.h"

#ifdef OPTIMUSCORE_OptimusDataInterfaceAdvancedSkeleton_generated_h
#error "OptimusDataInterfaceAdvancedSkeleton.generated.h already included, missing '#pragma once' in OptimusDataInterfaceAdvancedSkeleton.h"
#endif
#define OPTIMUSCORE_OptimusDataInterfaceAdvancedSkeleton_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusAnimAttributeBufferDescription ****************************
struct Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_26_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferDescription_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusAnimAttributeBufferDescription;
// ********** End ScriptStruct FOptimusAnimAttributeBufferDescription ******************************

// ********** Begin ScriptStruct FOptimusAnimAttributeBufferArray **********************************
struct Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_61_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusAnimAttributeBufferArray_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusAnimAttributeBufferArray;
// ********** End ScriptStruct FOptimusAnimAttributeBufferArray ************************************

// ********** Begin Class UOptimusAdvancedSkeletonDataInterface ************************************
struct Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_110_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusAdvancedSkeletonDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusAdvancedSkeletonDataInterface, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusAdvancedSkeletonDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusAdvancedSkeletonDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_110_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusAdvancedSkeletonDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusAdvancedSkeletonDataInterface(UOptimusAdvancedSkeletonDataInterface&&) = delete; \
	UOptimusAdvancedSkeletonDataInterface(const UOptimusAdvancedSkeletonDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusAdvancedSkeletonDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusAdvancedSkeletonDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusAdvancedSkeletonDataInterface) \
	OPTIMUSCORE_API virtual ~UOptimusAdvancedSkeletonDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_107_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_110_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_110_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_110_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusAdvancedSkeletonDataInterface;

// ********** End Class UOptimusAdvancedSkeletonDataInterface **************************************

// ********** Begin Class UOptimusAdvancedSkeletonDataProvider *************************************
struct Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_216_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusAdvancedSkeletonDataProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusAdvancedSkeletonDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusAdvancedSkeletonDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusAdvancedSkeletonDataProvider) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusAdvancedSkeletonDataProvider*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_216_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusAdvancedSkeletonDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusAdvancedSkeletonDataProvider(UOptimusAdvancedSkeletonDataProvider&&) = delete; \
	UOptimusAdvancedSkeletonDataProvider(const UOptimusAdvancedSkeletonDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusAdvancedSkeletonDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusAdvancedSkeletonDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusAdvancedSkeletonDataProvider) \
	NO_API virtual ~UOptimusAdvancedSkeletonDataProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_210_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_216_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_216_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h_216_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusAdvancedSkeletonDataProvider;

// ********** End Class UOptimusAdvancedSkeletonDataProvider ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceAdvancedSkeleton_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
