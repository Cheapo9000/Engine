// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AutomatedPerfTestInterface.h"

#ifdef AUTOMATEDPERFTESTING_AutomatedPerfTestInterface_generated_h
#error "AutomatedPerfTestInterface.generated.h already included, missing '#pragma once' in AutomatedPerfTestInterface.h"
#endif
#define AUTOMATEDPERFTESTING_AutomatedPerfTestInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UAutomatedPerfTestInterface ******************************************
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UAutomatedPerfTestInterface_Statics;
AUTOMATEDPERFTESTING_API UClass* Z_Construct_UClass_UAutomatedPerfTestInterface_NoRegister();

#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUTOMATEDPERFTESTING_API UAutomatedPerfTestInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAutomatedPerfTestInterface(UAutomatedPerfTestInterface&&) = delete; \
	UAutomatedPerfTestInterface(const UAutomatedPerfTestInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUTOMATEDPERFTESTING_API, UAutomatedPerfTestInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAutomatedPerfTestInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAutomatedPerfTestInterface) \
	virtual ~UAutomatedPerfTestInterface() = default;


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAutomatedPerfTestInterface(); \
	friend struct ::Z_Construct_UClass_UAutomatedPerfTestInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AUTOMATEDPERFTESTING_API UClass* ::Z_Construct_UClass_UAutomatedPerfTestInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UAutomatedPerfTestInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AutomatedPerfTesting"), Z_Construct_UClass_UAutomatedPerfTestInterface_NoRegister) \
	DECLARE_SERIALIZER(UAutomatedPerfTestInterface)


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAutomatedPerfTestInterface() {} \
public: \
	typedef UAutomatedPerfTestInterface UClassType; \
	typedef IAutomatedPerfTestInterface ThisClass; \
	AUTOMATEDPERFTESTING_API static void Execute_Exit(UObject* O); \
	AUTOMATEDPERFTESTING_API static void Execute_RunTest(UObject* O); \
	AUTOMATEDPERFTESTING_API static void Execute_SetupTest(UObject* O); \
	AUTOMATEDPERFTESTING_API static void Execute_TeardownTest(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h_11_PROLOG
#define FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h_14_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAutomatedPerfTestInterface;

// ********** End Interface UAutomatedPerfTestInterface ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Performance_AutomatedPerfTesting_Source_AutomatedPerfTesting_Public_AutomatedPerfTestInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
