// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EnhancedPlayerInput.h"

#ifdef ENHANCEDINPUT_EnhancedPlayerInput_generated_h
#error "EnhancedPlayerInput.generated.h already included, missing '#pragma once' in EnhancedPlayerInput.h"
#endif
#define ENHANCEDINPUT_EnhancedPlayerInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FInjectedInput ****************************************************
struct Z_Construct_UScriptStruct_FInjectedInput_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_43_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInjectedInput_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FInjectedInput;
// ********** End ScriptStruct FInjectedInput ******************************************************

// ********** Begin ScriptStruct FKeyConsumptionOptions ********************************************
struct Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FKeyConsumptionOptions_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FKeyConsumptionOptions;
// ********** End ScriptStruct FKeyConsumptionOptions **********************************************

// ********** Begin ScriptStruct FInjectedInputArray ***********************************************
struct Z_Construct_UScriptStruct_FInjectedInputArray_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_68_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FInjectedInputArray_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FInjectedInputArray;
// ********** End ScriptStruct FInjectedInputArray *************************************************

// ********** Begin ScriptStruct FAppliedInputContextData ******************************************
struct Z_Construct_UScriptStruct_FAppliedInputContextData_Statics;
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_77_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FAppliedInputContextData_Statics; \
	ENHANCEDINPUT_API static class UScriptStruct* StaticStruct();


struct FAppliedInputContextData;
// ********** End ScriptStruct FAppliedInputContextData ********************************************

// ********** Begin Class UEnhancedPlayerInput *****************************************************
struct Z_Construct_UClass_UEnhancedPlayerInput_Statics;
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedPlayerInput(); \
	friend struct ::Z_Construct_UClass_UEnhancedPlayerInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ENHANCEDINPUT_API UClass* ::Z_Construct_UClass_UEnhancedPlayerInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UEnhancedPlayerInput, UPlayerInput, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), Z_Construct_UClass_UEnhancedPlayerInput_NoRegister) \
	DECLARE_SERIALIZER(UEnhancedPlayerInput)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_100_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEnhancedPlayerInput(UEnhancedPlayerInput&&) = delete; \
	UEnhancedPlayerInput(const UEnhancedPlayerInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UEnhancedPlayerInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedPlayerInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnhancedPlayerInput) \
	ENHANCEDINPUT_API virtual ~UEnhancedPlayerInput();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_93_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_100_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEnhancedPlayerInput;

// ********** End Class UEnhancedPlayerInput *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_EnhancedPlayerInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
