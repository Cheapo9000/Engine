// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elements/Grammar/PCGSelectGrammar.h"

#ifdef PCG_PCGSelectGrammar_generated_h
#error "PCGSelectGrammar.generated.h already included, missing '#pragma once' in PCGSelectGrammar.h"
#endif
#define PCG_PCGSelectGrammar_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPCGSelectGrammarCriterion ****************************************
struct Z_Construct_UScriptStruct_FPCGSelectGrammarCriterion_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSelectGrammar_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSelectGrammarCriterion_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSelectGrammarCriterion;
// ********** End ScriptStruct FPCGSelectGrammarCriterion ******************************************

// ********** Begin ScriptStruct FPCGSelectGrammarCriteriaAttributeNames ***************************
struct Z_Construct_UScriptStruct_FPCGSelectGrammarCriteriaAttributeNames_Statics;
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSelectGrammar_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FPCGSelectGrammarCriteriaAttributeNames_Statics; \
	PCG_API static class UScriptStruct* StaticStruct();


struct FPCGSelectGrammarCriteriaAttributeNames;
// ********** End ScriptStruct FPCGSelectGrammarCriteriaAttributeNames *****************************

// ********** Begin Class UPCGSelectGrammarSettings ************************************************
struct Z_Construct_UClass_UPCGSelectGrammarSettings_Statics;
PCG_API UClass* Z_Construct_UClass_UPCGSelectGrammarSettings_NoRegister();

#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSelectGrammar_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGSelectGrammarSettings(); \
	friend struct ::Z_Construct_UClass_UPCGSelectGrammarSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PCG_API UClass* ::Z_Construct_UClass_UPCGSelectGrammarSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UPCGSelectGrammarSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG"), Z_Construct_UClass_UPCGSelectGrammarSettings_NoRegister) \
	DECLARE_SERIALIZER(UPCGSelectGrammarSettings)


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSelectGrammar_h_82_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPCGSelectGrammarSettings(UPCGSelectGrammarSettings&&) = delete; \
	UPCGSelectGrammarSettings(const UPCGSelectGrammarSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PCG_API, UPCGSelectGrammarSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGSelectGrammarSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPCGSelectGrammarSettings) \
	PCG_API virtual ~UPCGSelectGrammarSettings();


#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSelectGrammar_h_79_PROLOG
#define FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSelectGrammar_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSelectGrammar_h_82_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSelectGrammar_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPCGSelectGrammarSettings;

// ********** End Class UPCGSelectGrammarSettings **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_PCG_Source_PCG_Public_Elements_Grammar_PCGSelectGrammar_h

// ********** Begin Enum EPCGSelectGrammarComparator ***********************************************
#define FOREACH_ENUM_EPCGSELECTGRAMMARCOMPARATOR(op) \
	op(EPCGSelectGrammarComparator::BinaryOps) \
	op(EPCGSelectGrammarComparator::Select) \
	op(EPCGSelectGrammarComparator::LessThan) \
	op(EPCGSelectGrammarComparator::LessThanEqualTo) \
	op(EPCGSelectGrammarComparator::EqualTo) \
	op(EPCGSelectGrammarComparator::GreaterThanEqualTo) \
	op(EPCGSelectGrammarComparator::GreaterThan) \
	op(EPCGSelectGrammarComparator::TernaryOps) \
	op(EPCGSelectGrammarComparator::RangeExclusive) \
	op(EPCGSelectGrammarComparator::RangeInclusive) 

enum class EPCGSelectGrammarComparator : uint16;
template<> struct TIsUEnumClass<EPCGSelectGrammarComparator> { enum { Value = true }; };
template<> PCG_NON_ATTRIBUTED_API UEnum* StaticEnum<EPCGSelectGrammarComparator>();
// ********** End Enum EPCGSelectGrammarComparator *************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
