// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterfaces/DIFleshDeformer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSFLESHENGINE_DIFleshDeformer_generated_h
#error "DIFleshDeformer.generated.h already included, missing '#pragma once' in DIFleshDeformer.h"
#endif
#define CHAOSFLESHENGINE_DIFleshDeformer_generated_h

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFleshDeformerParameters_Statics; \
	CHAOSFLESHENGINE_API static class UScriptStruct* StaticStruct();


template<> CHAOSFLESHENGINE_API UScriptStruct* StaticStruct<struct FFleshDeformerParameters>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDIFleshDeformer(); \
	friend struct Z_Construct_UClass_UDIFleshDeformer_Statics; \
public: \
	DECLARE_CLASS(UDIFleshDeformer, UOptimusComputeDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), NO_API) \
	DECLARE_SERIALIZER(UDIFleshDeformer)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDIFleshDeformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDIFleshDeformer(UDIFleshDeformer&&); \
	UDIFleshDeformer(const UDIFleshDeformer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDIFleshDeformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDIFleshDeformer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDIFleshDeformer)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_28_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHENGINE_API UClass* StaticClass<class UDIFleshDeformer>();

#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDIFleshDeformerDataProvider(); \
	friend struct Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics; \
public: \
	DECLARE_CLASS(UDIFleshDeformerDataProvider, UComputeDataProvider, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosFleshEngine"), NO_API) \
	DECLARE_SERIALIZER(UDIFleshDeformerDataProvider)


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDIFleshDeformerDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDIFleshDeformerDataProvider(UDIFleshDeformerDataProvider&&); \
	UDIFleshDeformerDataProvider(const UDIFleshDeformerDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDIFleshDeformerDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDIFleshDeformerDataProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDIFleshDeformerDataProvider) \
	NO_API virtual ~UDIFleshDeformerDataProvider();


#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_60_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSFLESHENGINE_API UClass* StaticClass<class UDIFleshDeformerDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
