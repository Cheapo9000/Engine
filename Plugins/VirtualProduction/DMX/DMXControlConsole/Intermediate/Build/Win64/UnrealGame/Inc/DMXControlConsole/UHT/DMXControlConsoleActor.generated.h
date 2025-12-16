// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXControlConsoleActor.h"

#ifdef DMXCONTROLCONSOLE_DMXControlConsoleActor_generated_h
#error "DMXControlConsoleActor.generated.h already included, missing '#pragma once' in DMXControlConsoleActor.h"
#endif
#define DMXCONTROLCONSOLE_DMXControlConsoleActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ADMXControlConsoleActor **************************************************
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetToZero); \
	DECLARE_FUNCTION(execResetToDefault); \
	DECLARE_FUNCTION(execPauseSendingDMX); \
	DECLARE_FUNCTION(execStopSendingDMX); \
	DECLARE_FUNCTION(execStartSendingDMX);


struct Z_Construct_UClass_ADMXControlConsoleActor_Statics;
DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_ADMXControlConsoleActor_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleActor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADMXControlConsoleActor(); \
	friend struct ::Z_Construct_UClass_ADMXControlConsoleActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXCONTROLCONSOLE_API UClass* ::Z_Construct_UClass_ADMXControlConsoleActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ADMXControlConsoleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXControlConsole"), Z_Construct_UClass_ADMXControlConsoleActor_NoRegister) \
	DECLARE_SERIALIZER(ADMXControlConsoleActor)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleActor_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADMXControlConsoleActor(ADMXControlConsoleActor&&) = delete; \
	ADMXControlConsoleActor(const ADMXControlConsoleActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADMXControlConsoleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADMXControlConsoleActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADMXControlConsoleActor) \
	NO_API virtual ~ADMXControlConsoleActor();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleActor_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleActor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleActor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleActor_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleActor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADMXControlConsoleActor;

// ********** End Class ADMXControlConsoleActor ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
