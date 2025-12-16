// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/OptimusDataInterfaceDebugDraw.h"

#ifdef OPTIMUSCORE_OptimusDataInterfaceDebugDraw_generated_h
#error "OptimusDataInterfaceDebugDraw.generated.h already included, missing '#pragma once' in OptimusDataInterfaceDebugDraw.h"
#endif
#define OPTIMUSCORE_OptimusDataInterfaceDebugDraw_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOptimusDebugDrawParameters ***************************************
struct Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics;
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_20_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics; \
	OPTIMUSCORE_API static class UScriptStruct* StaticStruct();


struct FOptimusDebugDrawParameters;
// ********** End ScriptStruct FOptimusDebugDrawParameters *****************************************

// ********** Begin Class UOptimusDebugDrawDataInterface *******************************************
struct Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDebugDrawDataInterface_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusDebugDrawDataInterface(); \
	friend struct ::Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusDebugDrawDataInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusDebugDrawDataInterface, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusDebugDrawDataInterface_NoRegister) \
	DECLARE_SERIALIZER(UOptimusDebugDrawDataInterface)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_48_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusDebugDrawDataInterface(UOptimusDebugDrawDataInterface&&) = delete; \
	UOptimusDebugDrawDataInterface(const UOptimusDebugDrawDataInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OPTIMUSCORE_API, UOptimusDebugDrawDataInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDebugDrawDataInterface); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOptimusDebugDrawDataInterface) \
	OPTIMUSCORE_API virtual ~UOptimusDebugDrawDataInterface();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_45_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_48_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_48_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusDebugDrawDataInterface;

// ********** End Class UOptimusDebugDrawDataInterface *********************************************

// ********** Begin Class UOptimusDebugDrawDataProvider ********************************************
struct Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics;
OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDebugDrawDataProvider_NoRegister();

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusDebugDrawDataProvider(); \
	friend struct ::Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OPTIMUSCORE_API UClass* ::Z_Construct_UClass_UOptimusDebugDrawDataProvider_NoRegister(); \
public: \
	DECLARE_CLASS2(UOptimusDebugDrawDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OptimusCore"), Z_Construct_UClass_UOptimusDebugDrawDataProvider_NoRegister) \
	DECLARE_SERIALIZER(UOptimusDebugDrawDataProvider)


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_88_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusDebugDrawDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOptimusDebugDrawDataProvider(UOptimusDebugDrawDataProvider&&) = delete; \
	UOptimusDebugDrawDataProvider(const UOptimusDebugDrawDataProvider&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusDebugDrawDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusDebugDrawDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusDebugDrawDataProvider) \
	NO_API virtual ~UOptimusDebugDrawDataProvider();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_85_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOptimusDebugDrawDataProvider;

// ********** End Class UOptimusDebugDrawDataProvider **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
