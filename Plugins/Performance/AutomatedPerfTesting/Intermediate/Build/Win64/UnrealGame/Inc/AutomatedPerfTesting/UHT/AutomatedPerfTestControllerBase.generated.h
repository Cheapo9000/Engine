// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomatedPerfTestControllerBase.h"

#ifdef AUTOMATEDPERFTESTING_AutomatedPerfTestControllerBase_generated_h
#error "AutomatedPerfTestControllerBase.generated.h already included, missing '#pragma once' in AutomatedPerfTestControllerBase.h"
#endif
#define AUTOMATEDPERFTESTING_AutomatedPerfTestControllerBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGameStateBase;
class UWorld;

// ********** Begin Class UAutomatedPerfTestControllerBase *****************************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestControllerBase_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnVideoRecordingFinalized); \
	DECLARE_FUNCTION(execEndAutomatedPerfTest); \
	DECLARE_FUNCTION(execOnGameStateSet); \
	DECLARE_FUNCTION(execOnWorldBeginPlay); \
	DECLARE_FUNCTION(execTryEarlyExec);


struct Z_Construct_UClass_UAutomatedPerfTestControllerBase_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedPerfTestControllerBase_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestControllerBase_h_88_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomatedPerfTestControllerBase(); \
	friend struct ::Z_Construct_UClass_UAutomatedPerfTestControllerBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedPerfTestControllerBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedPerfTestControllerBase, UGauntletTestController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedPerfTestControllerBase_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedPerfTestControllerBase)


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestControllerBase_h_88_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedPerfTestControllerBase(UAutomatedPerfTestControllerBase&&) = delete; \
	UAutomatedPerfTestControllerBase(const UAutomatedPerfTestControllerBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedPerfTestControllerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedPerfTestControllerBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedPerfTestControllerBase) \
	AUTOMATEDPERFTESTING_API virtual ~UAutomatedPerfTestControllerBase();


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestControllerBase_h_85_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestControllerBase_h_88_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestControllerBase_h_88_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestControllerBase_h_88_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestControllerBase_h_88_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedPerfTestControllerBase;

// ********** End Class UAutomatedPerfTestControllerBase *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestControllerBase_h

// ********** Begin Enum EAutomatedPerfTestCSVOutputMode *******************************************
#define FOREACH_ENUM_EAUTOMATEDPERFTESTCSVOUTPUTMODE(op) \
	op(EAutomatedPerfTestCSVOutputMode::Single) \
	op(EAutomatedPerfTestCSVOutputMode::Separate) \
	op(EAutomatedPerfTestCSVOutputMode::Granular) 

enum class EAutomatedPerfTestCSVOutputMode : uint8;
template<> struct TIsUEnumClass<EAutomatedPerfTestCSVOutputMode> { enum { Value = true }; };
template<> AUTOMATEDPERFTESTING_NON_ATTRIBUTED_API UEnum* StaticEnum<EAutomatedPerfTestCSVOutputMode>();
// ********** End Enum EAutomatedPerfTestCSVOutputMode *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
