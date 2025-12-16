// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/OptimusDataInterfaceHalfEdge.h"

#ifdef OPTIMUSCORE_OptimusDataInterfaceHalfEdge_generated_h
#error "OptimusDataInterfaceHalfEdge.generated.h already included, missing '#pragma once' in OptimusDataInterfaceHalfEdge.h"
#endif
#define OPTIMUSCORE_OptimusDataInterfaceHalfEdge_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOptimusHalfEdgeDataInterface ********************************************
struct Z_Construct_UClass_UOptimusHalfEdgeDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusHalfEdgeDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusHalfEdgeDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusHalfEdgeDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusHalfEdgeDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusHalfEdgeDataInterface, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusHalfEdgeDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusHalfEdgeDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OPTIMUSCORE_API UOptimusHalfEdgeDataInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusHalfEdgeDataInterface(UOptimusHalfEdgeDataInterface&&) = delete; \
	UOptimusHalfEdgeDataInterface(const UOptimusHalfEdgeDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusHalfEdgeDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusHalfEdgeDataInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusHalfEdgeDataInterface) \
	OPTIMUSCORE_API virtual ~UOptimusHalfEdgeDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_27_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusHalfEdgeDataInterface;

// ********** End Class UOptimusHalfEdgeDataInterface **********************************************

// ********** Begin Class UOptimusHalfEdgeDataProvider *********************************************
struct Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusHalfEdgeDataProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusHalfEdgeDataProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusHalfEdgeDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusHalfEdgeDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusHalfEdgeDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusHalfEdgeDataProvider) \
	virtual UObject* _getUObject() const override { return const_cast<UOptimusHalfEdgeDataProvider*>(this); }


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusHalfEdgeDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusHalfEdgeDataProvider(UOptimusHalfEdgeDataProvider&&) = delete; \
	UOptimusHalfEdgeDataProvider(const UOptimusHalfEdgeDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusHalfEdgeDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusHalfEdgeDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusHalfEdgeDataProvider) \
	NO_API virtual ~UOptimusHalfEdgeDataProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_55_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusHalfEdgeDataProvider;

// ********** End Class UOptimusHalfEdgeDataProvider ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
