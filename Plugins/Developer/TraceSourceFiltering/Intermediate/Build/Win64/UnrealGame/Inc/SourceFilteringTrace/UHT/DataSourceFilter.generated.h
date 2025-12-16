// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSourceFilter.h"

#ifdef SOURCEFILTERINGTRACE_DataSourceFilter_generated_h
#error "DataSourceFilter.generated.h already included, missing '#pragma once' in DataSourceFilter.h"
#endif
#define SOURCEFILTERINGTRACE_DataSourceFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UDataSourceFilter ********************************************************
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoesActorPassFilter);


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_17_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UDataSourceFilter_Statics;
SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilter_NoRegister();

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataSourceFilter(); \
	friend struct ::Z_Construct_UClass_UDataSourceFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCEFILTERINGTRACE_API UClass* ::Z_Construct_UClass_UDataSourceFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataSourceFilter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), Z_Construct_UClass_UDataSourceFilter_NoRegister) \
	DECLARE_SERIALIZER(UDataSourceFilter) \
	virtual UObject* _getUObject() const override { return const_cast<UDataSourceFilter*>(this); }


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataSourceFilter(UDataSourceFilter&&) = delete; \
	UDataSourceFilter(const UDataSourceFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOURCEFILTERINGTRACE_API, UDataSourceFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataSourceFilter)


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_11_PROLOG
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_17_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataSourceFilter;

// ********** End Class UDataSourceFilter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
