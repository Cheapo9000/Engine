// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FunctionalTest.h"

#ifdef FUNCTIONALTESTING_FunctionalTest_generated_h
#error "FunctionalTest.generated.h already included, missing '#pragma once' in FunctionalTest.h"
#endif
#define FUNCTIONALTESTING_FunctionalTest_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
class UTraceQueryTestResults;
class UWorld;
enum class EComparisonMethod : uint8;
enum class EFunctionalTestResult : uint8;
struct FDateTime;

// ********** Begin Class UAutomationPerformaceHelper **********************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndStatsFile); \
	DECLARE_FUNCTION(execBeginStatsFile); \
	DECLARE_FUNCTION(execTriggerGPUTraceIfRecordFallsBelowBudget); \
	DECLARE_FUNCTION(execStopCPUProfiling); \
	DECLARE_FUNCTION(execStartCPUProfiling); \
	DECLARE_FUNCTION(execIsCurrentRecordWithinRenderThreadBudget); \
	DECLARE_FUNCTION(execIsCurrentRecordWithinGameThreadBudget); \
	DECLARE_FUNCTION(execIsCurrentRecordWithinGPUBudget); \
	DECLARE_FUNCTION(execOnAllTestsComplete); \
	DECLARE_FUNCTION(execOnBeginTests); \
	DECLARE_FUNCTION(execIsRecording); \
	DECLARE_FUNCTION(execWriteLogFile); \
	DECLARE_FUNCTION(execEndRecording); \
	DECLARE_FUNCTION(execBeginRecording); \
	DECLARE_FUNCTION(execEndRecordingBaseline); \
	DECLARE_FUNCTION(execBeginRecordingBaseline); \
	DECLARE_FUNCTION(execSample); \
	DECLARE_FUNCTION(execTick);


struct Z_Construct_UClass_UAutomationPerformaceHelper_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UAutomationPerformaceHelper_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAutomationPerformaceHelper(); \
	friend struct ::Z_Construct_UClass_UAutomationPerformaceHelper_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_UAutomationPerformaceHelper_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomationPerformaceHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_UAutomationPerformaceHelper_NoRegister) \
	DECLARE_SERIALIZER(UAutomationPerformaceHelper)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_102_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomationPerformaceHelper(UAutomationPerformaceHelper&&) = delete; \
	UAutomationPerformaceHelper(const UAutomationPerformaceHelper&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, UAutomationPerformaceHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomationPerformaceHelper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAutomationPerformaceHelper) \
	FUNCTIONALTESTING_API virtual ~UAutomationPerformaceHelper();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_99_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_102_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomationPerformaceHelper;

// ********** End Class UAutomationPerformaceHelper ************************************************

// ********** Begin Delegate FFunctionalTestEventSignature *****************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_245_DELEGATE \
FUNCTIONALTESTING_API void FFunctionalTestEventSignature_DelegateWrapper(const FMulticastScriptDelegate& FunctionalTestEventSignature);


// ********** End Delegate FFunctionalTestEventSignature *******************************************

// ********** Begin Class AFunctionalTest **********************************************************
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execIsEnabledInWorld); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execRegisterAutoDestroyActor); \
	DECLARE_FUNCTION(execSetConsoleVariableFromBoolean); \
	DECLARE_FUNCTION(execSetConsoleVariableFromFloat); \
	DECLARE_FUNCTION(execSetConsoleVariableFromInteger); \
	DECLARE_FUNCTION(execSetConsoleVariable); \
	DECLARE_FUNCTION(execGetCurrentRerunReason); \
	DECLARE_FUNCTION(execAddRerun); \
	DECLARE_FUNCTION(execSetTimeLimit); \
	DECLARE_FUNCTION(execLogMessage); \
	DECLARE_FUNCTION(execFinishTest); \
	DECLARE_FUNCTION(execAddInfo); \
	DECLARE_FUNCTION(execAddError); \
	DECLARE_FUNCTION(execAddWarning); \
	DECLARE_FUNCTION(execAssertEqual_TraceQueryResults); \
	DECLARE_FUNCTION(execAssertNotEqual_String); \
	DECLARE_FUNCTION(execAssertEqual_String); \
	DECLARE_FUNCTION(execAssertNotEqual_Matrix); \
	DECLARE_FUNCTION(execAssertEqual_Matrix); \
	DECLARE_FUNCTION(execAssertNotEqual_Quat); \
	DECLARE_FUNCTION(execAssertEqual_Quat); \
	DECLARE_FUNCTION(execAssertNotEqual_Plane); \
	DECLARE_FUNCTION(execAssertEqual_Plane); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector4); \
	DECLARE_FUNCTION(execAssertEqual_Vector4); \
	DECLARE_FUNCTION(execAssertNotEqual_Box2D); \
	DECLARE_FUNCTION(execAssertEqual_Box2D); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector2D); \
	DECLARE_FUNCTION(execAssertEqual_Vector2D); \
	DECLARE_FUNCTION(execAssertNotEqual_Vector); \
	DECLARE_FUNCTION(execAssertEqual_Vector); \
	DECLARE_FUNCTION(execAssertNotEqual_Rotator); \
	DECLARE_FUNCTION(execAssertEqual_RotatorOrientation); \
	DECLARE_FUNCTION(execAssertEqual_Rotator); \
	DECLARE_FUNCTION(execAssertNotEqual_Transform); \
	DECLARE_FUNCTION(execAssertEqual_Object); \
	DECLARE_FUNCTION(execAssertEqual_Name); \
	DECLARE_FUNCTION(execAssertEqual_Int); \
	DECLARE_FUNCTION(execAssertEqual_Bool); \
	DECLARE_FUNCTION(execAssertEqual_Double); \
	DECLARE_FUNCTION(execAssertEqual_Float); \
	DECLARE_FUNCTION(execAssertEqual_Transform); \
	DECLARE_FUNCTION(execAssertValue_DateTime); \
	DECLARE_FUNCTION(execAssertValue_Double); \
	DECLARE_FUNCTION(execAssertValue_Float); \
	DECLARE_FUNCTION(execAssertValue_Int); \
	DECLARE_FUNCTION(execAssertIsValid); \
	DECLARE_FUNCTION(execAssertFalse); \
	DECLARE_FUNCTION(execAssertTrue);


#if WITH_EDITOR
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execEditTags);
#else // WITH_EDITOR
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_CALLBACK_WRAPPERS
struct Z_Construct_UClass_AFunctionalTest_Statics;
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest_NoRegister();

#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFunctionalTest(); \
	friend struct ::Z_Construct_UClass_AFunctionalTest_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUNCTIONALTESTING_API UClass* ::Z_Construct_UClass_AFunctionalTest_NoRegister(); \
public: \
	DECLARE_CLASS2(AFunctionalTest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), Z_Construct_UClass_AFunctionalTest_NoRegister) \
	DECLARE_SERIALIZER(AFunctionalTest)


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFunctionalTest(AFunctionalTest&&) = delete; \
	AFunctionalTest(const AFunctionalTest&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FUNCTIONALTESTING_API, AFunctionalTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFunctionalTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFunctionalTest) \
	FUNCTIONALTESTING_API virtual ~AFunctionalTest();


#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_248_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_CALLBACK_WRAPPERS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h_251_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFunctionalTest;

// ********** End Class AFunctionalTest ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTest_h

// ********** Begin Enum EComparisonMethod *********************************************************
#define FOREACH_ENUM_ECOMPARISONMETHOD(op) \
	op(EComparisonMethod::Equal_To) \
	op(EComparisonMethod::Not_Equal_To) \
	op(EComparisonMethod::Greater_Than_Or_Equal_To) \
	op(EComparisonMethod::Less_Than_Or_Equal_To) \
	op(EComparisonMethod::Greater_Than) \
	op(EComparisonMethod::Less_Than) 

enum class EComparisonMethod : uint8;
template<> struct TIsUEnumClass<EComparisonMethod> { enum { Value = true }; };
template<> FUNCTIONALTESTING_NON_ATTRIBUTED_API UEnum* StaticEnum<EComparisonMethod>();
// ********** End Enum EComparisonMethod ***********************************************************

// ********** Begin Enum EFunctionalTestResult *****************************************************
#define FOREACH_ENUM_EFUNCTIONALTESTRESULT(op) \
	op(EFunctionalTestResult::Default) \
	op(EFunctionalTestResult::Invalid) \
	op(EFunctionalTestResult::Error) \
	op(EFunctionalTestResult::Running) \
	op(EFunctionalTestResult::Failed) \
	op(EFunctionalTestResult::Succeeded) 

enum class EFunctionalTestResult : uint8;
template<> struct TIsUEnumClass<EFunctionalTestResult> { enum { Value = true }; };
template<> FUNCTIONALTESTING_NON_ATTRIBUTED_API UEnum* StaticEnum<EFunctionalTestResult>();
// ********** End Enum EFunctionalTestResult *******************************************************

// ********** Begin Enum EFunctionalTestLogHandling ************************************************
#define FOREACH_ENUM_EFUNCTIONALTESTLOGHANDLING(op) \
	op(EFunctionalTestLogHandling::ProjectDefault) \
	op(EFunctionalTestLogHandling::OutputIsError) \
	op(EFunctionalTestLogHandling::OutputIgnored) 

enum class EFunctionalTestLogHandling : uint8;
template<> struct TIsUEnumClass<EFunctionalTestLogHandling> { enum { Value = true }; };
template<> FUNCTIONALTESTING_NON_ATTRIBUTED_API UEnum* StaticEnum<EFunctionalTestLogHandling>();
// ********** End Enum EFunctionalTestLogHandling **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
