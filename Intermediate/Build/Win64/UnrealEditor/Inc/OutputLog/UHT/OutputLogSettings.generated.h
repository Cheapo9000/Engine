// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OutputLogSettings.h"

#ifdef OUTPUTLOG_OutputLogSettings_generated_h
#error "OutputLogSettings.generated.h already included, missing '#pragma once' in OutputLogSettings.h"
#endif
#define OUTPUTLOG_OutputLogSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FOutputLogCategorySettings ****************************************
struct Z_Construct_UScriptStruct_FOutputLogCategorySettings_Statics;
#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOutputLogCategorySettings_Statics; \
	OUTPUTLOG_API static class UScriptStruct* StaticStruct();


struct FOutputLogCategorySettings;
// ********** End ScriptStruct FOutputLogCategorySettings ******************************************

// ********** Begin ScriptStruct FOutputLogFilterSettings ******************************************
struct Z_Construct_UScriptStruct_FOutputLogFilterSettings_Statics;
#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_55_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOutputLogFilterSettings_Statics; \
	OUTPUTLOG_API static class UScriptStruct* StaticStruct();


struct FOutputLogFilterSettings;
// ********** End ScriptStruct FOutputLogFilterSettings ********************************************

// ********** Begin Class UOutputLogSettings *******************************************************
struct Z_Construct_UClass_UOutputLogSettings_Statics;
OUTPUTLOG_API UClass* Z_Construct_UClass_UOutputLogSettings_NoRegister();

#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOutputLogSettings(); \
	friend struct ::Z_Construct_UClass_UOutputLogSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OUTPUTLOG_API UClass* ::Z_Construct_UClass_UOutputLogSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOutputLogSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OutputLog"), Z_Construct_UClass_UOutputLogSettings_NoRegister) \
	DECLARE_SERIALIZER(UOutputLogSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_87_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOutputLogSettings(UOutputLogSettings&&) = delete; \
	UOutputLogSettings(const UOutputLogSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OUTPUTLOG_API, UOutputLogSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOutputLogSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOutputLogSettings) \
	OUTPUTLOG_API virtual ~UOutputLogSettings();


#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_84_PROLOG
#define FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOutputLogSettings;

// ********** End Class UOutputLogSettings *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_OutputLog_Public_OutputLogSettings_h

// ********** Begin Enum ELogCategoryColorizationMode **********************************************
#define FOREACH_ENUM_ELOGCATEGORYCOLORIZATIONMODE(op) \
	op(ELogCategoryColorizationMode::None) \
	op(ELogCategoryColorizationMode::ColorizeWholeLine) \
	op(ELogCategoryColorizationMode::ColorizeCategoryOnly) \
	op(ELogCategoryColorizationMode::ColorizeCategoryAsBadge) 

enum class ELogCategoryColorizationMode : uint8;
template<> struct TIsUEnumClass<ELogCategoryColorizationMode> { enum { Value = true }; };
template<> OUTPUTLOG_NON_ATTRIBUTED_API UEnum* StaticEnum<ELogCategoryColorizationMode>();
// ********** End Enum ELogCategoryColorizationMode ************************************************

// ********** Begin Enum ELogLevelFilter ***********************************************************
#define FOREACH_ENUM_ELOGLEVELFILTER(op) \
	op(ELogLevelFilter::None) \
	op(ELogLevelFilter::Enabled) \
	op(ELogLevelFilter::All) 

enum class ELogLevelFilter : uint8;
template<> struct TIsUEnumClass<ELogLevelFilter> { enum { Value = true }; };
template<> OUTPUTLOG_NON_ATTRIBUTED_API UEnum* StaticEnum<ELogLevelFilter>();
// ********** End Enum ELogLevelFilter *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
