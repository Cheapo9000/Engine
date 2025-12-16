// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataSourceFilterSet.h"

#ifdef SOURCEFILTERINGTRACE_DataSourceFilterSet_generated_h
#error "DataSourceFilterSet.generated.h already included, missing '#pragma once' in DataSourceFilterSet.h"
#endif
#define SOURCEFILTERINGTRACE_DataSourceFilterSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDataSourceFilterSet *****************************************************
struct Z_Construct_UClass_UDataSourceFilterSet_Statics;
SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UDataSourceFilterSet_NoRegister();

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataSourceFilterSet(); \
	friend struct ::Z_Construct_UClass_UDataSourceFilterSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCEFILTERINGTRACE_API UClass* ::Z_Construct_UClass_UDataSourceFilterSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UDataSourceFilterSet, UDataSourceFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), Z_Construct_UClass_UDataSourceFilterSet_NoRegister) \
	DECLARE_SERIALIZER(UDataSourceFilterSet) \
	virtual UObject* _getUObject() const override { return const_cast<UDataSourceFilterSet*>(this); }


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOURCEFILTERINGTRACE_API UDataSourceFilterSet(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDataSourceFilterSet(UDataSourceFilterSet&&) = delete; \
	UDataSourceFilterSet(const UDataSourceFilterSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOURCEFILTERINGTRACE_API, UDataSourceFilterSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataSourceFilterSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataSourceFilterSet) \
	SOURCEFILTERINGTRACE_API virtual ~UDataSourceFilterSet();


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_13_PROLOG
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDataSourceFilterSet;

// ********** End Class UDataSourceFilterSet *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_DataSourceFilterSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
