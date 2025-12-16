// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/RemoteControlInterceptionTestData.h"

#ifdef REMOTECONTROL_RemoteControlInterceptionTestData_generated_h
#error "RemoteControlInterceptionTestData.generated.h already included, missing '#pragma once' in RemoteControlInterceptionTestData.h"
#endif
#define REMOTECONTROL_RemoteControlInterceptionTestData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteControlInterceptionFunctionParamStruct;

// ********** Begin ScriptStruct FRemoteControlInterceptionTestStruct ******************************
struct Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlInterceptionTestStruct_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FRemoteControlInterceptionTestStruct;
// ********** End ScriptStruct FRemoteControlInterceptionTestStruct ********************************

// ********** Begin ScriptStruct FRemoteControlInterceptionFunctionParamStruct *********************
struct Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlInterceptionFunctionParamStruct_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FRemoteControlInterceptionFunctionParamStruct;
// ********** End ScriptStruct FRemoteControlInterceptionFunctionParamStruct ***********************

// ********** Begin Class URemoteControlInterceptionTestObject *************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTestFunction);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_38_ACCESSORS \
static void SetValueWithSetter_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlInterceptionTestObject_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlInterceptionTestObject(); \
	friend struct ::Z_Construct_UClass_URemoteControlInterceptionTestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URemoteControlInterceptionTestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlInterceptionTestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URemoteControlInterceptionTestObject_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlInterceptionTestObject)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteControlInterceptionTestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlInterceptionTestObject(URemoteControlInterceptionTestObject&&) = delete; \
	URemoteControlInterceptionTestObject(const URemoteControlInterceptionTestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlInterceptionTestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlInterceptionTestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteControlInterceptionTestObject) \
	NO_API virtual ~URemoteControlInterceptionTestObject();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_34_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_38_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h_38_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlInterceptionTestObject;

// ********** End Class URemoteControlInterceptionTestObject ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlInterceptionTestData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
