// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/RemoteControlDeltaAPITestData.h"

#ifdef REMOTECONTROL_RemoteControlDeltaAPITestData_generated_h
#error "RemoteControlDeltaAPITestData.generated.h already included, missing '#pragma once' in RemoteControlDeltaAPITestData.h"
#endif
#define REMOTECONTROL_RemoteControlDeltaAPITestData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRemoteControlDeltaAPITestStruct **********************************
struct Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_11_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlDeltaAPITestStruct_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FRemoteControlDeltaAPITestStruct;
// ********** End ScriptStruct FRemoteControlDeltaAPITestStruct ************************************

// ********** Begin Class URemoteControlDeltaAPITestObject *****************************************
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetInt32WithSetterValue); \
	DECLARE_FUNCTION(execGetInt32WithSetterValue);


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_23_ACCESSORS \
static void SetFloatWithSetterValue_WrapperImpl(void* Object, const void* InValue);


struct Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlDeltaAPITestObject_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlDeltaAPITestObject(); \
	friend struct ::Z_Construct_UClass_URemoteControlDeltaAPITestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URemoteControlDeltaAPITestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlDeltaAPITestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URemoteControlDeltaAPITestObject_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlDeltaAPITestObject)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URemoteControlDeltaAPITestObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlDeltaAPITestObject(URemoteControlDeltaAPITestObject&&) = delete; \
	URemoteControlDeltaAPITestObject(const URemoteControlDeltaAPITestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlDeltaAPITestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlDeltaAPITestObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URemoteControlDeltaAPITestObject) \
	NO_API virtual ~URemoteControlDeltaAPITestObject();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_20_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_23_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlDeltaAPITestObject;

// ********** End Class URemoteControlDeltaAPITestObject *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlDeltaAPITestData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
