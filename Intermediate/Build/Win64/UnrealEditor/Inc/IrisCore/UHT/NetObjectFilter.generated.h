// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Filtering/NetObjectFilter.h"

#ifdef IRISCORE_NetObjectFilter_generated_h
#error "NetObjectFilter.generated.h already included, missing '#pragma once' in NetObjectFilter.h"
#endif
#define IRISCORE_NetObjectFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetObjectFilterConfig ***************************************************
struct Z_Construct_UClass_UNetObjectFilterConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectFilterConfig(); \
	friend struct ::Z_Construct_UClass_UNetObjectFilterConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectFilterConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectFilterConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectFilterConfig_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectFilterConfig)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetObjectFilterConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectFilterConfig(UNetObjectFilterConfig&&) = delete; \
	UNetObjectFilterConfig(const UNetObjectFilterConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectFilterConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectFilterConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetObjectFilterConfig) \
	IRISCORE_API virtual ~UNetObjectFilterConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_119_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_122_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectFilterConfig;

// ********** End Class UNetObjectFilterConfig *****************************************************

// ********** Begin Class UNetObjectFilter *********************************************************
struct Z_Construct_UClass_UNetObjectFilter_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilter_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectFilter(); \
	friend struct ::Z_Construct_UClass_UNetObjectFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectFilter_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectFilter)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_179_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectFilter(UNetObjectFilter&&) = delete; \
	UNetObjectFilter(const UNetObjectFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectFilter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNetObjectFilter) \
	IRISCORE_API virtual ~UNetObjectFilter();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_176_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_179_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_179_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectFilter;

// ********** End Class UNetObjectFilter ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
