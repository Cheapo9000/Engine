// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Filtering/NetObjectConnectionFilter.h"

#ifdef IRISCORE_NetObjectConnectionFilter_generated_h
#error "NetObjectConnectionFilter.generated.h already included, missing '#pragma once' in NetObjectConnectionFilter.h"
#endif
#define IRISCORE_NetObjectConnectionFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNetObjectConnectionFilterConfig *****************************************
struct Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectConnectionFilterConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectConnectionFilterConfig(); \
	friend struct ::Z_Construct_UClass_UNetObjectConnectionFilterConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectConnectionFilterConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectConnectionFilterConfig, UNetObjectFilterConfig, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectConnectionFilterConfig_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectConnectionFilterConfig)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetObjectConnectionFilterConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectConnectionFilterConfig(UNetObjectConnectionFilterConfig&&) = delete; \
	UNetObjectConnectionFilterConfig(const UNetObjectConnectionFilterConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectConnectionFilterConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectConnectionFilterConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetObjectConnectionFilterConfig) \
	IRISCORE_API virtual ~UNetObjectConnectionFilterConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_17_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectConnectionFilterConfig;

// ********** End Class UNetObjectConnectionFilterConfig *******************************************

// ********** Begin Class UNetObjectConnectionFilter ***********************************************
struct Z_Construct_UClass_UNetObjectConnectionFilter_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectConnectionFilter_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectConnectionFilter(); \
	friend struct ::Z_Construct_UClass_UNetObjectConnectionFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectConnectionFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectConnectionFilter, UNetObjectFilter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectConnectionFilter_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectConnectionFilter)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetObjectConnectionFilter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectConnectionFilter(UNetObjectConnectionFilter&&) = delete; \
	UNetObjectConnectionFilter(const UNetObjectConnectionFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectConnectionFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectConnectionFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetObjectConnectionFilter) \
	IRISCORE_API virtual ~UNetObjectConnectionFilter();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_32_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectConnectionFilter;

// ********** End Class UNetObjectConnectionFilter *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectConnectionFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
