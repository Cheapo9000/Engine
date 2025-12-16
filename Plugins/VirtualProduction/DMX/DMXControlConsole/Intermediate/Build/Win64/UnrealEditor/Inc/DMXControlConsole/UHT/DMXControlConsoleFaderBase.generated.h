// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXControlConsoleFaderBase.h"

#ifdef DMXCONTROLCONSOLE_DMXControlConsoleFaderBase_generated_h
#error "DMXControlConsoleFaderBase.generated.h already included, missing '#pragma once' in DMXControlConsoleFaderBase.h"
#endif
#define DMXCONTROLCONSOLE_DMXControlConsoleFaderBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDMXControlConsoleFaderBase **********************************************
struct Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics;
DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderBase_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleFaderBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXControlConsoleFaderBase(); \
	friend struct ::Z_Construct_UClass_UDMXControlConsoleFaderBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXCONTROLCONSOLE_API UClass* ::Z_Construct_UClass_UDMXControlConsoleFaderBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXControlConsoleFaderBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DMXControlConsole"), Z_Construct_UClass_UDMXControlConsoleFaderBase_NoRegister) \
	DECLARE_SERIALIZER(UDMXControlConsoleFaderBase) \
	virtual UObject* _getUObject() const override { return const_cast<UDMXControlConsoleFaderBase*>(this); }


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleFaderBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXControlConsoleFaderBase(UDMXControlConsoleFaderBase&&) = delete; \
	UDMXControlConsoleFaderBase(const UDMXControlConsoleFaderBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXControlConsoleFaderBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXControlConsoleFaderBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMXControlConsoleFaderBase) \
	NO_API virtual ~UDMXControlConsoleFaderBase();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleFaderBase_h_17_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleFaderBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleFaderBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleFaderBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXControlConsoleFaderBase;

// ********** End Class UDMXControlConsoleFaderBase ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_DMXControlConsoleFaderBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
