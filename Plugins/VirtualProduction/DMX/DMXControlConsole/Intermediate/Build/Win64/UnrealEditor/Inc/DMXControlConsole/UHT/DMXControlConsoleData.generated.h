// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXControlConsoleData.h"

#ifdef DMXCONTROLCONSOLE_DMXControlConsoleData_generated_h
#error "DMXControlConsoleData.generated.h already included, missing '#pragma once' in DMXControlConsoleData.h"
#endif
#define DMXCONTROLCONSOLE_DMXControlConsoleData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXControlConsoleData ***************************************************
struct Z_Construct_UClass_UDMXControlConsoleData_Statics;
DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleData_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleData_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXControlConsoleData(); \
	friend struct ::Z_Construct_UClass_UDMXControlConsoleData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXCONTROLCONSOLE_API UClass* ::Z_Construct_UClass_UDMXControlConsoleData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXControlConsoleData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXControlConsole"), Z_Construct_UClass_UDMXControlConsoleData_NoRegister) \
	DECLARE_SERIALIZER(UDMXControlConsoleData)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleData_h_36_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXControlConsoleData(UDMXControlConsoleData&&) = delete; \
	UDMXControlConsoleData(const UDMXControlConsoleData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXControlConsoleData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXControlConsoleData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXControlConsoleData) \
	NO_API virtual ~UDMXControlConsoleData();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleData_h_31_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleData_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleData_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleData_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXControlConsoleData;

// ********** End Class UDMXControlConsoleData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleData_h

// ********** Begin Enum EDMXControlConsoleStopDMXMode *********************************************
#define FOREACH_ENUM_EDMXCONTROLCONSOLESTOPDMXMODE(op) \
	op(EDMXControlConsoleStopDMXMode::SendDefaultValues) \
	op(EDMXControlConsoleStopDMXMode::SendZeroValues) \
	op(EDMXControlConsoleStopDMXMode::DoNotSendValues) 

enum class EDMXControlConsoleStopDMXMode : uint8;
template<> struct TIsUEnumClass<EDMXControlConsoleStopDMXMode> { enum { Value = true }; };
template<> DMXCONTROLCONSOLE_NON_ATTRIBUTED_API UEnum* StaticEnum<EDMXControlConsoleStopDMXMode>();
// ********** End Enum EDMXControlConsoleStopDMXMode ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
