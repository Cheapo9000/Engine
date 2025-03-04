// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TraceSourceFilteringSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOURCEFILTERINGCORE_TraceSourceFilteringSettings_generated_h
#error "TraceSourceFilteringSettings.generated.h already included, missing '#pragma once' in TraceSourceFilteringSettings.h"
#endif
#define SOURCEFILTERINGCORE_TraceSourceFilteringSettings_generated_h

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTraceSourceFilteringSettings(); \
	friend struct Z_Construct_UClass_UTraceSourceFilteringSettings_Statics; \
public: \
	DECLARE_CLASS(UTraceSourceFilteringSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SourceFilteringCore"), NO_API) \
	DECLARE_SERIALIZER(UTraceSourceFilteringSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("TraceSourceFilters");} \



#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTraceSourceFilteringSettings(UTraceSourceFilteringSettings&&); \
	UTraceSourceFilteringSettings(const UTraceSourceFilteringSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTraceSourceFilteringSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraceSourceFilteringSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTraceSourceFilteringSettings) \
	NO_API virtual ~UTraceSourceFilteringSettings();


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_8_PROLOG
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOURCEFILTERINGCORE_API UClass* StaticClass<class UTraceSourceFilteringSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
