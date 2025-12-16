// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PyTestInterface.h"

#ifdef PYTHONSCRIPTPLUGIN_PyTestInterface_generated_h
#error "PyTestInterface.generated.h already included, missing '#pragma once' in PyTestInterface.h"
#endif
#define PYTHONSCRIPTPLUGIN_PyTestInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UPyTestInterface *****************************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFuncInterface);


struct Z_Construct_UClass_UPyTestInterface_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyTestInterface(UPyTestInterface&&) = delete; \
	UPyTestInterface(const UPyTestInterface&) = delete; \
	virtual ~UPyTestInterface() = default;


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPyTestInterface(); \
	friend struct ::Z_Construct_UClass_UPyTestInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPyTestInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyTestInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPyTestInterface_NoRegister) \
	DECLARE_SERIALIZER(UPyTestInterface)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IPyTestInterface() {} \
public: \
	typedef UPyTestInterface UClassType; \
	typedef IPyTestInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_12_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyTestInterface;

// ********** End Interface UPyTestInterface *******************************************************

// ********** Begin Interface UPyTestChildInterface ************************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFuncInterfaceChild);


struct Z_Construct_UClass_UPyTestChildInterface_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestChildInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestChildInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestChildInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestChildInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestChildInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyTestChildInterface(UPyTestChildInterface&&) = delete; \
	UPyTestChildInterface(const UPyTestChildInterface&) = delete; \
	virtual ~UPyTestChildInterface() = default;


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPyTestChildInterface(); \
	friend struct ::Z_Construct_UClass_UPyTestChildInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPyTestChildInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyTestChildInterface, UPyTestInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPyTestChildInterface_NoRegister) \
	DECLARE_SERIALIZER(UPyTestChildInterface)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_INCLASS_IINTERFACE \
protected: \
	virtual ~IPyTestChildInterface() {} \
public: \
	typedef UPyTestChildInterface UClassType; \
	typedef IPyTestChildInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_29_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_32_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyTestChildInterface;

// ********** End Interface UPyTestChildInterface **************************************************

// ********** Begin Interface UPyTestOtherInterface ************************************************
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFuncInterfaceOther);


struct Z_Construct_UClass_UPyTestOtherInterface_Statics;
PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestOtherInterface_NoRegister();

#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPyTestOtherInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPyTestOtherInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPyTestOtherInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPyTestOtherInterface); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPyTestOtherInterface(UPyTestOtherInterface&&) = delete; \
	UPyTestOtherInterface(const UPyTestOtherInterface&) = delete; \
	virtual ~UPyTestOtherInterface() = default;


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPyTestOtherInterface(); \
	friend struct ::Z_Construct_UClass_UPyTestOtherInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PYTHONSCRIPTPLUGIN_API UClass* ::Z_Construct_UClass_UPyTestOtherInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UPyTestOtherInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/PythonScriptPlugin"), Z_Construct_UClass_UPyTestOtherInterface_NoRegister) \
	DECLARE_SERIALIZER(UPyTestOtherInterface)


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_INCLASS_IINTERFACE \
protected: \
	virtual ~IPyTestOtherInterface() {} \
public: \
	typedef UPyTestOtherInterface UClassType; \
	typedef IPyTestOtherInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h_49_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPyTestOtherInterface;

// ********** End Interface UPyTestOtherInterface **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTestInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
