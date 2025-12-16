// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TraceSourceFilteringSettings.h"

#ifdef SOURCEFILTERINGCORE_TraceSourceFilteringSettings_generated_h
#error "TraceSourceFilteringSettings.generated.h already included, missing '#pragma once' in TraceSourceFilteringSettings.h"
#endif
#define SOURCEFILTERINGCORE_TraceSourceFilteringSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTraceSourceFilteringSettings ********************************************
struct Z_Construct_UClass_UTraceSourceFilteringSettings_Statics;
SOURCEFILTERINGCORE_API UClass* Z_Construct_UClass_UTraceSourceFilteringSettings_NoRegister();

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTraceSourceFilteringSettings(); \
	friend struct ::Z_Construct_UClass_UTraceSourceFilteringSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCEFILTERINGCORE_API UClass* ::Z_Construct_UClass_UTraceSourceFilteringSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTraceSourceFilteringSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SourceFilteringCore"), Z_Construct_UClass_UTraceSourceFilteringSettings_NoRegister) \
	DECLARE_SERIALIZER(UTraceSourceFilteringSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("TraceSourceFilters");} \



#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTraceSourceFilteringSettings(UTraceSourceFilteringSettings&&) = delete; \
	UTraceSourceFilteringSettings(const UTraceSourceFilteringSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOURCEFILTERINGCORE_API, UTraceSourceFilteringSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraceSourceFilteringSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTraceSourceFilteringSettings) \
	SOURCEFILTERINGCORE_API virtual ~UTraceSourceFilteringSettings();


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_8_PROLOG
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTraceSourceFilteringSettings;

// ********** End Class UTraceSourceFilteringSettings **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringCore_Public_TraceSourceFilteringSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
