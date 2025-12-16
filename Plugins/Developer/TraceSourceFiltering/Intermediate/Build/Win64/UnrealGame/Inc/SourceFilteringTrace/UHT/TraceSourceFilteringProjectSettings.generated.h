// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TraceSourceFilteringProjectSettings.h"

#ifdef SOURCEFILTERINGTRACE_TraceSourceFilteringProjectSettings_generated_h
#error "TraceSourceFilteringProjectSettings.generated.h already included, missing '#pragma once' in TraceSourceFilteringProjectSettings.h"
#endif
#define SOURCEFILTERINGTRACE_TraceSourceFilteringProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTraceSourceFilteringProjectSettings *************************************
struct Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics;
SOURCEFILTERINGTRACE_API UClass* Z_Construct_UClass_UTraceSourceFilteringProjectSettings_NoRegister();

#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTraceSourceFilteringProjectSettings(); \
	friend struct ::Z_Construct_UClass_UTraceSourceFilteringProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SOURCEFILTERINGTRACE_API UClass* ::Z_Construct_UClass_UTraceSourceFilteringProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UTraceSourceFilteringProjectSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SourceFilteringTrace"), Z_Construct_UClass_UTraceSourceFilteringProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UTraceSourceFilteringProjectSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SOURCEFILTERINGTRACE_API UTraceSourceFilteringProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTraceSourceFilteringProjectSettings(UTraceSourceFilteringProjectSettings&&) = delete; \
	UTraceSourceFilteringProjectSettings(const UTraceSourceFilteringProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SOURCEFILTERINGTRACE_API, UTraceSourceFilteringProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTraceSourceFilteringProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTraceSourceFilteringProjectSettings) \
	SOURCEFILTERINGTRACE_API virtual ~UTraceSourceFilteringProjectSettings();


#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h_13_PROLOG
#define FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTraceSourceFilteringProjectSettings;

// ********** End Class UTraceSourceFilteringProjectSettings ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_TraceSourceFiltering_Source_SourceFilteringTrace_Public_TraceSourceFilteringProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
