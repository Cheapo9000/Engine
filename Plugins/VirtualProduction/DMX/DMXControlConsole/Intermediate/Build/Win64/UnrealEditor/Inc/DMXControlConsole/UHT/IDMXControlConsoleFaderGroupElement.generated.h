// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IDMXControlConsoleFaderGroupElement.h"

#ifdef DMXCONTROLCONSOLE_IDMXControlConsoleFaderGroupElement_generated_h
#error "IDMXControlConsoleFaderGroupElement.generated.h already included, missing '#pragma once' in IDMXControlConsoleFaderGroupElement.h"
#endif
#define DMXCONTROLCONSOLE_IDMXControlConsoleFaderGroupElement_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UDMXControlConsoleFaderGroupElement **********************************
struct Z_Construct_UClass_UDMXControlConsoleFaderGroupElement_Statics;
DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroupElement_NoRegister();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_IDMXControlConsoleFaderGroupElement_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXControlConsoleFaderGroupElement(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDMXControlConsoleFaderGroupElement(UDMXControlConsoleFaderGroupElement&&) = delete; \
	UDMXControlConsoleFaderGroupElement(const UDMXControlConsoleFaderGroupElement&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXControlConsoleFaderGroupElement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXControlConsoleFaderGroupElement); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXControlConsoleFaderGroupElement) \
	virtual ~UDMXControlConsoleFaderGroupElement() = default;


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_IDMXControlConsoleFaderGroupElement_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDMXControlConsoleFaderGroupElement(); \
	friend struct ::Z_Construct_UClass_UDMXControlConsoleFaderGroupElement_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DMXCONTROLCONSOLE_API UClass* ::Z_Construct_UClass_UDMXControlConsoleFaderGroupElement_NoRegister(); \
public: \
	DECLARE_CLASS2(UDMXControlConsoleFaderGroupElement, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DMXControlConsole"), Z_Construct_UClass_UDMXControlConsoleFaderGroupElement_NoRegister) \
	DECLARE_SERIALIZER(UDMXControlConsoleFaderGroupElement)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_IDMXControlConsoleFaderGroupElement_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_IDMXControlConsoleFaderGroupElement_h_23_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_IDMXControlConsoleFaderGroupElement_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_IDMXControlConsoleFaderGroupElement_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDMXControlConsoleFaderGroupElement() {} \
public: \
	typedef UDMXControlConsoleFaderGroupElement UClassType; \
	typedef IDMXControlConsoleFaderGroupElement ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_IDMXControlConsoleFaderGroupElement_h_19_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_IDMXControlConsoleFaderGroupElement_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_IDMXControlConsoleFaderGroupElement_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDMXControlConsoleFaderGroupElement;

// ********** End Interface UDMXControlConsoleFaderGroupElement ************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Internal_IDMXControlConsoleFaderGroupElement_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
