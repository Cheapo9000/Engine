// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/PCGAttributeFilter.h"

#ifdef PCG_PCGAttributeFilter_generated_h
#error "PCGAttributeFilter.generated.h already included, missing '#pragma once' in PCGAttributeFilter.h"
#endif
#define PCG_PCGAttributeFilter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGAttributeFilterThresholdSettings ******************************
struct Z_Construct_UScriptStruct_FPCGAttributeFilterThresholdSettings_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_28_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGAttributeFilterThresholdSettings_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGAttributeFilterThresholdSettings;
// ********** End ScriptStruct FPCGAttributeFilterThresholdSettings ********************************

// ********** Begin Class UPCGAttributeFilteringSettings *******************************************
struct Z_Construct_UClass_UPCGAttributeFilteringSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttributeFilteringSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributeFilteringSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAttributeFilteringSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttributeFilteringSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttributeFilteringSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttributeFilteringSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttributeFilteringSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_68_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttributeFilteringSettings(UPCGAttributeFilteringSettings&&) = delete; \
	UPCGAttributeFilteringSettings(const UPCGAttributeFilteringSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAttributeFilteringSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributeFilteringSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGAttributeFilteringSettings) \
	PCG_API virtual ~UPCGAttributeFilteringSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_65_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttributeFilteringSettings;

// ********** End Class UPCGAttributeFilteringSettings *********************************************

// ********** Begin Class UPCGAttributeFilteringRangeSettings **************************************
struct Z_Construct_UClass_UPCGAttributeFilteringRangeSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGAttributeFilteringRangeSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_151_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGAttributeFilteringRangeSettings(); \
	friend struct ::Z_Construct_UClass_UPCGAttributeFilteringRangeSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGAttributeFilteringRangeSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGAttributeFilteringRangeSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGAttributeFilteringRangeSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGAttributeFilteringRangeSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_151_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGAttributeFilteringRangeSettings(UPCGAttributeFilteringRangeSettings&&) = delete; \
	UPCGAttributeFilteringRangeSettings(const UPCGAttributeFilteringRangeSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGAttributeFilteringRangeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGAttributeFilteringRangeSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGAttributeFilteringRangeSettings) \
	PCG_API virtual ~UPCGAttributeFilteringRangeSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_148_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_151_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_151_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h_151_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGAttributeFilteringRangeSettings;

// ********** End Class UPCGAttributeFilteringRangeSettings ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_PCGAttributeFilter_h

// ********** Begin Enum EPCGAttributeFilterOperator ***********************************************
#define FOREACH_ENUM_EPCGATTRIBUTEFILTEROPERATOR(op) \
	op(EPCGAttributeFilterOperator::Greater) \
	op(EPCGAttributeFilterOperator::GreaterOrEqual) \
	op(EPCGAttributeFilterOperator::Lesser) \
	op(EPCGAttributeFilterOperator::LesserOrEqual) \
	op(EPCGAttributeFilterOperator::Equal) \
	op(EPCGAttributeFilterOperator::NotEqual) \
	op(EPCGAttributeFilterOperator::InRange) \
	op(EPCGAttributeFilterOperator::Substring) \
	op(EPCGAttributeFilterOperator::Matches) 

enum class EPCGAttributeFilterOperator : uint8;
template<> struct TIsUEnumClass<EPCGAttributeFilterOperator> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGAttributeFilterOperator>();
// ********** End Enum EPCGAttributeFilterOperator *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
