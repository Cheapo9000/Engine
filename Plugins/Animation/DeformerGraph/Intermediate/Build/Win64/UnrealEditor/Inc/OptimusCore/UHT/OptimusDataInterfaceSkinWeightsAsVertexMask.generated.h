// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/OptimusDataInterfaceSkinWeightsAsVertexMask.h"

#ifdef OPTIMUSCORE_OptimusDataInterfaceSkinWeightsAsVertexMask_generated_h
#error "OptimusDataInterfaceSkinWeightsAsVertexMask.generated.h already included, missing '#pragma once' in OptimusDataInterfaceSkinWeightsAsVertexMask.h"
#endif
#define OPTIMUSCORE_OptimusDataInterfaceSkinWeightsAsVertexMask_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusSkinWeightsAsVertexMaskDataInterface *****************************
struct Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSkinWeightsAsVertexMaskDataInterface, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSkinWeightsAsVertexMaskDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusSkinWeightsAsVertexMaskDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSkinWeightsAsVertexMaskDataInterface(UOptimusSkinWeightsAsVertexMaskDataInterface&&) = delete; \
	UOptimusSkinWeightsAsVertexMaskDataInterface(const UOptimusSkinWeightsAsVertexMaskDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusSkinWeightsAsVertexMaskDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSkinWeightsAsVertexMaskDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSkinWeightsAsVertexMaskDataInterface) \
	OPTIMUSCORE_API virtual ~UOptimusSkinWeightsAsVertexMaskDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_22_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSkinWeightsAsVertexMaskDataInterface;

// ********** End Class UOptimusSkinWeightsAsVertexMaskDataInterface *******************************

// ********** Begin Class UOptimusSkinWeightsAsVertexMaskDataProvider ******************************
struct Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSkinWeightsAsVertexMaskDataProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSkinWeightsAsVertexMaskDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusSkinWeightsAsVertexMaskDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSkinWeightsAsVertexMaskDataProvider) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusSkinWeightsAsVertexMaskDataProvider*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSkinWeightsAsVertexMaskDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSkinWeightsAsVertexMaskDataProvider(UOptimusSkinWeightsAsVertexMaskDataProvider&&) = delete; \
	UOptimusSkinWeightsAsVertexMaskDataProvider(const UOptimusSkinWeightsAsVertexMaskDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSkinWeightsAsVertexMaskDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSkinWeightsAsVertexMaskDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSkinWeightsAsVertexMaskDataProvider) \
	NO_API virtual ~UOptimusSkinWeightsAsVertexMaskDataProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_88_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_94_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSkinWeightsAsVertexMaskDataProvider;

// ********** End Class UOptimusSkinWeightsAsVertexMaskDataProvider ********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinWeightsAsVertexMask_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
