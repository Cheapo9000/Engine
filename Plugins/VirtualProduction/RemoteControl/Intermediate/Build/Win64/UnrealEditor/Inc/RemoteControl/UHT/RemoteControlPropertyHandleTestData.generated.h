// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Tests/RemoteControlPropertyHandleTestData.h"

#ifdef REMOTECONTROL_RemoteControlPropertyHandleTestData_generated_h
#error "RemoteControlPropertyHandleTestData.generated.h already included, missing '#pragma once' in RemoteControlPropertyHandleTestData.h"
#endif
#define REMOTECONTROL_RemoteControlPropertyHandleTestData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FRemoteControlTestStructInnerSimple *******************************
struct Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_30_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlTestStructInnerSimple_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FRemoteControlTestStructInnerSimple;
// ********** End ScriptStruct FRemoteControlTestStructInnerSimple *********************************

// ********** Begin ScriptStruct FRemoteControlTestStructInner *************************************
struct Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_39_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlTestStructInner_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FRemoteControlTestStructInner;
// ********** End ScriptStruct FRemoteControlTestStructInner ***************************************

// ********** Begin ScriptStruct FRemoteControlTestStructOuter *************************************
struct Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics;
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_66_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FRemoteControlTestStructOuter_Statics; \
	REMOTECONTROL_API static class UScriptStruct* StaticStruct();


struct FRemoteControlTestStructOuter;
// ********** End ScriptStruct FRemoteControlTestStructOuter ***************************************

// ********** Begin Class URemoteControlAPITestObject **********************************************
struct Z_Construct_UClass_URemoteControlAPITestObject_Statics;
REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlAPITestObject_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURemoteControlAPITestObject(); \
	friend struct ::Z_Construct_UClass_URemoteControlAPITestObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend REMOTECONTROL_API UClass* ::Z_Construct_UClass_URemoteControlAPITestObject_NoRegister(); \
public: \
	DECLARE_CLASS2(URemoteControlAPITestObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControl"), Z_Construct_UClass_URemoteControlAPITestObject_NoRegister) \
	DECLARE_SERIALIZER(URemoteControlAPITestObject)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_85_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URemoteControlAPITestObject(URemoteControlAPITestObject&&) = delete; \
	URemoteControlAPITestObject(const URemoteControlAPITestObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URemoteControlAPITestObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URemoteControlAPITestObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URemoteControlAPITestObject) \
	NO_API virtual ~URemoteControlAPITestObject();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_81_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h_85_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URemoteControlAPITestObject;

// ********** End Class URemoteControlAPITestObject ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Private_Tests_RemoteControlPropertyHandleTestData_h

// ********** Begin Enum ERemoteControlEnumClass ***************************************************
#define FOREACH_ENUM_EREMOTECONTROLENUMCLASS(op) \
	op(ERemoteControlEnumClass::E_One) \
	op(ERemoteControlEnumClass::E_Two) \
	op(ERemoteControlEnumClass::E_Three) 

enum class ERemoteControlEnumClass : uint8;
template<> struct TIsUEnumClass<ERemoteControlEnumClass> { enum { Value = true }; };
template<> REMOTECONTROL_NON_ATTRIBUTED_API UEnum* StaticEnum<ERemoteControlEnumClass>();
// ********** End Enum ERemoteControlEnumClass *****************************************************

// ********** Begin Enum ERemoteControlEnum ********************************************************
#define FOREACH_ENUM_EREMOTECONTROLENUM(op) \
	op(ERemoteControlEnum::E_One) \
	op(ERemoteControlEnum::E_Two) \
	op(ERemoteControlEnum::E_Three) 

namespace ERemoteControlEnum { enum Type : int; }
template<> REMOTECONTROL_NON_ATTRIBUTED_API UEnum* StaticEnum<ERemoteControlEnum::Type>();
// ********** End Enum ERemoteControlEnum **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
