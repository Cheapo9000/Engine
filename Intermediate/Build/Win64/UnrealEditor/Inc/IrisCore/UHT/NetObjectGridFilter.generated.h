// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h"

#ifdef IRISCORE_NetObjectGridFilter_generated_h
#error "NetObjectGridFilter.generated.h already included, missing '#pragma once' in NetObjectGridFilter.h"
#endif
#define IRISCORE_NetObjectGridFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FNetObjectGridFilterProfile ***************************************
struct Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics;
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_27_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


struct FNetObjectGridFilterProfile;
// ********** End ScriptStruct FNetObjectGridFilterProfile *****************************************

// ********** Begin Class UNetObjectGridFilterConfig ***********************************************
struct Z_Construct_UClass_UNetObjectGridFilterConfig_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFilterConfig_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectGridFilterConfig(); \
	friend struct ::Z_Construct_UClass_UNetObjectGridFilterConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectGridFilterConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectGridFilterConfig, UNetObjectFilterConfig, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectGridFilterConfig_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectGridFilterConfig)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetObjectGridFilterConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectGridFilterConfig(UNetObjectGridFilterConfig&&) = delete; \
	UNetObjectGridFilterConfig(const UNetObjectGridFilterConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectGridFilterConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectGridFilterConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetObjectGridFilterConfig) \
	IRISCORE_API virtual ~UNetObjectGridFilterConfig();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_43_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectGridFilterConfig;

// ********** End Class UNetObjectGridFilterConfig *************************************************

// ********** Begin Class UNetObjectGridFilter *****************************************************
struct Z_Construct_UClass_UNetObjectGridFilter_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridFilter_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectGridFilter(); \
	friend struct ::Z_Construct_UClass_UNetObjectGridFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectGridFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectGridFilter, UNetObjectFilter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectGridFilter_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectGridFilter)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetObjectGridFilter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectGridFilter(UNetObjectGridFilter&&) = delete; \
	UNetObjectGridFilter(const UNetObjectGridFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetObjectGridFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectGridFilter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNetObjectGridFilter) \
	NO_API virtual ~UNetObjectGridFilter();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_81_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectGridFilter;

// ********** End Class UNetObjectGridFilter *******************************************************

// ********** Begin Class UNetObjectGridWorldLocFilter *********************************************
struct Z_Construct_UClass_UNetObjectGridWorldLocFilter_Statics;
IRISCORE_API UClass* Z_Construct_UClass_UNetObjectGridWorldLocFilter_NoRegister();

#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_301_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectGridWorldLocFilter(); \
	friend struct ::Z_Construct_UClass_UNetObjectGridWorldLocFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend IRISCORE_API UClass* ::Z_Construct_UClass_UNetObjectGridWorldLocFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UNetObjectGridWorldLocFilter, UNetObjectGridFilter, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), Z_Construct_UClass_UNetObjectGridWorldLocFilter_NoRegister) \
	DECLARE_SERIALIZER(UNetObjectGridWorldLocFilter)


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_301_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetObjectGridWorldLocFilter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNetObjectGridWorldLocFilter(UNetObjectGridWorldLocFilter&&) = delete; \
	UNetObjectGridWorldLocFilter(const UNetObjectGridWorldLocFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectGridWorldLocFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectGridWorldLocFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetObjectGridWorldLocFilter) \
	IRISCORE_API virtual ~UNetObjectGridWorldLocFilter();


#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_298_PROLOG
#define FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_301_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_301_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_301_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNetObjectGridWorldLocFilter;

// ********** End Class UNetObjectGridWorldLocFilter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Net_Iris_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
