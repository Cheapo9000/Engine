// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/ExternalDataLayerInjectionPolicy.h"

#ifdef ENGINE_ExternalDataLayerInjectionPolicy_generated_h
#error "ExternalDataLayerInjectionPolicy.generated.h already included, missing '#pragma once' in ExternalDataLayerInjectionPolicy.h"
#endif
#define ENGINE_ExternalDataLayerInjectionPolicy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UExternalDataLayerInjectionPolicy ****************************************
struct Z_Construct_UClass_UExternalDataLayerInjectionPolicy_Statics;
ENGINE_API UClass* Z_Construct_UClass_UExternalDataLayerInjectionPolicy_NoRegister();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExternalDataLayerInjectionPolicy(); \
	friend struct ::Z_Construct_UClass_UExternalDataLayerInjectionPolicy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENGINE_API UClass* ::Z_Construct_UClass_UExternalDataLayerInjectionPolicy_NoRegister(); \
public: \
	DECLARE_CLASS2(UExternalDataLayerInjectionPolicy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), Z_Construct_UClass_UExternalDataLayerInjectionPolicy_NoRegister) \
	DECLARE_SERIALIZER(UExternalDataLayerInjectionPolicy)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UExternalDataLayerInjectionPolicy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UExternalDataLayerInjectionPolicy(UExternalDataLayerInjectionPolicy&&) = delete; \
	UExternalDataLayerInjectionPolicy(const UExternalDataLayerInjectionPolicy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UExternalDataLayerInjectionPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalDataLayerInjectionPolicy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalDataLayerInjectionPolicy) \
	ENGINE_API virtual ~UExternalDataLayerInjectionPolicy();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UExternalDataLayerInjectionPolicy;

// ********** End Class UExternalDataLayerInjectionPolicy ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
