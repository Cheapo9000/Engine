// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/OptimusDataInterfaceSkinnedMeshVertexAttribute.h"

#ifdef OPTIMUSCORE_OptimusDataInterfaceSkinnedMeshVertexAttribute_generated_h
#error "OptimusDataInterfaceSkinnedMeshVertexAttribute.generated.h already included, missing '#pragma once' in OptimusDataInterfaceSkinnedMeshVertexAttribute.h"
#endif
#define OPTIMUSCORE_OptimusDataInterfaceSkinnedMeshVertexAttribute_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusSkinnedMeshVertexAttributeDataInterface **************************
struct Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSkinnedMeshVertexAttributeDataInterface, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSkinnedMeshVertexAttributeDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSkinnedMeshVertexAttributeDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSkinnedMeshVertexAttributeDataInterface(UOptimusSkinnedMeshVertexAttributeDataInterface&&) = delete; \
	UOptimusSkinnedMeshVertexAttributeDataInterface(const UOptimusSkinnedMeshVertexAttributeDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSkinnedMeshVertexAttributeDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSkinnedMeshVertexAttributeDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSkinnedMeshVertexAttributeDataInterface) \
	NO_API virtual ~UOptimusSkinnedMeshVertexAttributeDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_17_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSkinnedMeshVertexAttributeDataInterface;

// ********** End Class UOptimusSkinnedMeshVertexAttributeDataInterface ****************************

// ********** Begin Class UOptimusSkinnedMeshVertexAttributeDataProvider ***************************
struct Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSkinnedMeshVertexAttributeDataProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusSkinnedMeshVertexAttributeDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusSkinnedMeshVertexAttributeDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusSkinnedMeshVertexAttributeDataProvider) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusSkinnedMeshVertexAttributeDataProvider*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_58_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSkinnedMeshVertexAttributeDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusSkinnedMeshVertexAttributeDataProvider(UOptimusSkinnedMeshVertexAttributeDataProvider&&) = delete; \
	UOptimusSkinnedMeshVertexAttributeDataProvider(const UOptimusSkinnedMeshVertexAttributeDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSkinnedMeshVertexAttributeDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSkinnedMeshVertexAttributeDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSkinnedMeshVertexAttributeDataProvider) \
	NO_API virtual ~UOptimusSkinnedMeshVertexAttributeDataProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_53_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_58_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusSkinnedMeshVertexAttributeDataProvider;

// ********** End Class UOptimusSkinnedMeshVertexAttributeDataProvider *****************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshVertexAttribute_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
