// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EmptySourceFilter.h"

#ifdef SOURCEFILTERINGTRACE_EmptySourceFilter_generated_h
#error "EmptySourceFilter.generated.h already included, missing '#pragma once' in EmptySourceFilter.h"
#endif
#define SOURCEFILTERINGTRACE_EmptySourceFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEmptySourceFilter *******************************************************
struct Z_Construct_UClass_UEmptySourceFilter_Statics;
SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UEmptySourceFilter_NoRegister();

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEmptySourceFilter(); \
	friend struct ::Z_Construct_UClass_UEmptySourceFilter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCEFILTERINGTRACE_API UClass* ::Z_Construct_UClass_UEmptySourceFilter_NoRegister(); \
public: \
	DECLARE_CLASS2(UEmptySourceFilter, UDataSourceFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), Z_Construct_UClass_UEmptySourceFilter_NoRegister) \
	DECLARE_SERIALIZER(UEmptySourceFilter)


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOURCEFILTERINGTRACE_API UEmptySourceFilter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEmptySourceFilter(UEmptySourceFilter&&) = delete; \
	UEmptySourceFilter(const UEmptySourceFilter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOURCEFILTERINGTRACE_API, UEmptySourceFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEmptySourceFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEmptySourceFilter) \
	SOURCEFILTERINGTRACE_API virtual ~UEmptySourceFilter();


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h_10_PROLOG
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEmptySourceFilter;

// ********** End Class UEmptySourceFilter *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_EmptySourceFilter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
