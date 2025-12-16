// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProfileGo/ProfileGo.h"

#ifdef AUTOMATEDPERFTESTING_ProfileGo_generated_h
#error "ProfileGo.generated.h already included, missing '#pragma once' in ProfileGo.h"
#endif
#define AUTOMATEDPERFTESTING_ProfileGo_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FProfileGoScenarioAPT *********************************************
struct Z_Construct_UScriptStruct_FProfileGoScenarioAPT_Statics;
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProfileGoScenarioAPT_Statics; \
	AUTOMATEDPERFTESTING_API static class UScriptStruct* StaticStruct();


struct FProfileGoScenarioAPT;
// ********** End ScriptStruct FProfileGoScenarioAPT ***********************************************

// ********** Begin ScriptStruct FProfileGoGeneratedScenarioAPT ************************************
struct Z_Construct_UScriptStruct_FProfileGoGeneratedScenarioAPT_Statics;
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_82_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProfileGoGeneratedScenarioAPT_Statics; \
	AUTOMATEDPERFTESTING_API static class UScriptStruct* StaticStruct(); \
	typedef FProfileGoScenarioAPT Super;


struct FProfileGoGeneratedScenarioAPT;
// ********** End ScriptStruct FProfileGoGeneratedScenarioAPT **************************************

// ********** Begin ScriptStruct FProfileGoCollectionAPT *******************************************
struct Z_Construct_UScriptStruct_FProfileGoCollectionAPT_Statics;
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_107_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProfileGoCollectionAPT_Statics; \
	AUTOMATEDPERFTESTING_API static class UScriptStruct* StaticStruct();


struct FProfileGoCollectionAPT;
// ********** End ScriptStruct FProfileGoCollectionAPT *********************************************

// ********** Begin ScriptStruct FProfileGoCommandAPT **********************************************
struct Z_Construct_UScriptStruct_FProfileGoCommandAPT_Statics;
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_119_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProfileGoCommandAPT_Statics; \
	AUTOMATEDPERFTESTING_API static class UScriptStruct* StaticStruct();


struct FProfileGoCommandAPT;
// ********** End ScriptStruct FProfileGoCommandAPT ************************************************

// ********** Begin ScriptStruct FProfileGoScenarioResultAPT ***************************************
struct Z_Construct_UScriptStruct_FProfileGoScenarioResultAPT_Statics;
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_155_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProfileGoScenarioResultAPT_Statics; \
	AUTOMATEDPERFTESTING_API static class UScriptStruct* StaticStruct();


struct FProfileGoScenarioResultAPT;
// ********** End ScriptStruct FProfileGoScenarioResultAPT *****************************************

// ********** Begin ScriptStruct FProfileGoRequestAPT **********************************************
struct Z_Construct_UScriptStruct_FProfileGoRequestAPT_Statics;
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_182_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FProfileGoRequestAPT_Statics; \
	AUTOMATEDPERFTESTING_API static class UScriptStruct* StaticStruct();


struct FProfileGoRequestAPT;
// ********** End ScriptStruct FProfileGoRequestAPT ************************************************

// ********** Begin Class UProfileGo ***************************************************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckIfStreamingCompleted); \
	DECLARE_FUNCTION(execWaitForStreamingCommandComplete); \
	DECLARE_FUNCTION(execWaitForCommandComplete); \
	DECLARE_FUNCTION(execMarkCommandComplete);


struct Z_Construct_UClass_UProfileGo_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UProfileGo_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_227_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProfileGo(); \
	friend struct ::Z_Construct_UClass_UProfileGo_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UProfileGo_NoRegister(); \
public: \
	DECLARE_CLASS2(UProfileGo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UProfileGo_NoRegister) \
	DECLARE_SERIALIZER(UProfileGo) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_227_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UProfileGo(UProfileGo&&) = delete; \
	UProfileGo(const UProfileGo&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UProfileGo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProfileGo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProfileGo) \
	AUTOMATEDPERFTESTING_API virtual ~UProfileGo();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_224_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_227_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_227_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h_227_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UProfileGo;

// ********** End Class UProfileGo *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_ProfileGo_ProfileGo_h

// ********** Begin Enum EProfileGoStateAPT ********************************************************
#define FOREACH_ENUM_EPROFILEGOSTATEAPT(op) \
	op(EProfileGoStateAPT::None) \
	op(EProfileGoStateAPT::StartingRequest) \
	op(EProfileGoStateAPT::SettlingLocation) \
	op(EProfileGoStateAPT::RunningCommands) \
	op(EProfileGoStateAPT::CompletedScenario) \
	op(EProfileGoStateAPT::Summary) \
	op(EProfileGoStateAPT::Completed) 

enum class EProfileGoStateAPT : int8;
template<> struct TIsUEnumClass<EProfileGoStateAPT> { enum { Value = true }; };
template<> AUTOMATEDPERFTESTING_NON_ATTRIBUTED_API UEnum* StaticEnum<EProfileGoStateAPT>();
// ********** End Enum EProfileGoStateAPT **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
